--
-- FixedPrecisionFormat v4.0.0 by SilverAzide
--
-- This work is licensed under a Creative Commons Attribution-Noncommercial-Share Alike 3.0 License.
--
-- History:
-- 4.0.0 - 2018-03-17:  Revised code to work with inline Lua (requires Rainmeter 4.1 or later).
-- 1.1.0 - 2015-05-22:  Added support for scale factor "0" to match Rainmeter's AutoScale option.
--                      Thanks to TGonZo for code improvements.
-- 1.0.0 - 2015-05-09:  Initial release.
--
----------------------------------------------------------------------------------------------------
--
-- Rainmeter's String meter formats numbers using a "variable precision, fixed scale" methodology.
-- ("Precision" is the total number of digits, not including signs and decimals, and "scale" is the
-- number of digits after the decimal.)
--
--   Examples:  3.141      (precision=4, scale=3; i.e., "NumOfDecimals=3")
--              314.159    (precision=6, scale=3)
--              3141.593   (precision=7, scale=3)
--              314159.265 (precision=9, scale=3)
--
-- This style of formatting means that the total number of digits in the resulting string, and thus
-- the string's length, is somewhat unpredictable.  Designers must include extra whitespace after
-- the numbers to account for large values, so if additional design elements follow the meter, there
-- is a possibility that the data can overflow one meter into another.  Also, when using this in
-- meters with rapidly changing values, the meter tends to show numbers that bounce around, as large
-- and small values alternate.
--
-- This script uses a "fixed precision, variable scale" methodology to format numbers.  This results
-- in values that have a more predicable string length and can lead to a cleaner looking display.
--
--   Examples:  3.14159   (precision=6, scale=5)
--              314.159   (precision=6, scale=3)
--              3141.53   (precision=6, scale=2)
--              314159    (precision=6, scale=0)
--
-- Note that in theory negative scales are valid; e.g., 31415900  (precision=6, scale=-2).  However,
-- this appears to be of little value and is not supported at this time.
--
-- REMEMBER:
--
--   This script returns a formatted STRING.  Numeric formatting options in String meters may not
--   have any effect (NumOfDecimals, Scale, AutoScale, etc.) and should not be used.
--
--
-- Usage
--
--   FormatNumber(InputValue, Precision, Factor)
--
--     InputValue
--
--       The value of a measure, variable, or formula to be formatted.
--
--     Precision
--
--       Specifies the numeric precision (i.e., the total number of digits in the number).  The
--       default is 3.
--
--     Factor
--
--       Specifies the scale factor.  Same as the Rainmeter String meter's "AutoScale" option:
--
--         0:  Disabled (default).
--         1:  Scales by 1024.
--         1k: Scales by 1024 with kilo as the lowest unit.
--         2:  Scales by 1000.
--         2k: Scales by 1000 with kilo as the lowest unit.
--
--       NOTE:
--
--         The value returned by the script includes a space between the scaled number and the scale
--         unit abbreviation.  When scaling is disabled, the number will include a trailing space.
--         To remove this space simply add Substitute=" ":"" to the measure.
--
--
-- Example skin:
--
-- [Rainmeter]
-- Update=1000
-- BackgroundMode=2
-- SolidColor=255,255,255,255
--
-- [Variables]
-- ; create variable to hold formatted text
-- TextNetIn=""
--
-- [LuaScript]
-- Measure=Script
-- ScriptFile=#@#FixedPrecisionFormat.lua
--
-- ; measure network inbound bytes/sec, format value when changed; e.g., "12.34 M"
-- [MeasureNetIn]
-- Measure=NetIn
-- OnChangeAction=[!SetVariable TextNetIn [&LuaScript:FormatNumber([&MeasureNetIn],4,'1k')]]
--
-- ; display inbound bytes/sec; e.g., "12.34 MB/s"
-- [MeterNetIn]
-- Meter=String
-- Text=#TextNetIn#B/s
-- DynamicVariables=1
--
-- ; alternative approach
-- ; NOTE:  This option does not need a variable to hold the formatted value, but the Lua function
-- ;        will be invoked on every update (once per second) instead of only when the value
-- ;        changes.
-- [MeterNetIn2]
-- Meter=String
-- Y=20r
-- Text=[&LuaScript:FormatNumber([&MeasureNetIn], 4, '1k')]B/s
-- DynamicVariables=1
--
----------------------------------------------------------------------------------------------------
--
function Initialize()
  --
  -- this function is called when the script measure is initialized or reloaded
  --

  -- initialize array of suffixes for scaled values
  asSuffix = { "", " k", " M", " G", " T", " P", " E", " Z", " Y" }

  return
end                                                                                    -- Initialize

function Update()
  --
  -- this function is called when the script measure is updated
  --
  return "success"
end

function FormatNumber(sInputValue, sPrecision, sFactor)
  --
  -- This function formats a number using a "fixed precision, variable scale" methodology.  Can be
  -- called on demand via inline Lua.
  --
  -- Where:  sInputValue = value to be formatted
  --         sPrecision  = numeric scale
  --         sFactor     = scale factor ("0", "1", "1k", "2", "2k")
  --
  -- Examples:  sInputValue = 3.141592654, sPrecision = 7, sFactor = "1":  output = "3.141593 "
  --            sInputValue = 31.41592654, sPrecision = 7, sFactor = "1":  output = "31.41593 "
  --            sInputValue = 314.1592654, sPrecision = 7, sFactor = "1":  output = "314.1593 "
  --            sInputValue = 3141.592654, sPrecision = 7, sFactor = "1":  output = "3.141593 k"
  --            sInputValue = 31415926.54, sPrecision = 7, sFactor = "1":  output = "31.41593 M"
  --            sInputValue = 31415926.54, sPrecision = 4, sFactor = "1":  output = "31.42 M"
  --            sInputValue = 31415926.54, sPrecision = 3, sFactor = "1":  output = "31.4 M"
  --            sInputValue = 31415926.54, sPrecision = 2, sFactor = "1":  output = "31 M"
  --            sInputValue = 31415926.54, sPrecision = 1, sFactor = "1":  output = "31 M" (precision too small)
  --            sInputValue = 3141.592654, sPrecision = 7, sFactor = "0":  output = "3141.593 "
  --

  -- initialize local vars
  local nDigitsAfterDecimal = 0
  local nDigitsBeforeDecimal = 0
  local nDivCount = 1
  local nDivisor = 1024.0
  local sPattern = ""
  local sText = ""

  --
  -- validate input parameters
  --
  local nValue = tonumber(sInputValue)

  -- validate Scale
  local nPrecision = math.floor(tonumber(sPrecision)) or 3
  if nPrecision > 0 then
    -- OK
  else
    -- invalid input
    nPrecision = 3
  end

  -- validate Factor and set divisor if needed
  if sFactor == "1" or sFactor == "1k" then
    -- OK
  elseif sFactor == "2" or sFactor == "2k" then
    nDivisor = 1000.0
  else
    sFactor = "0"
    nDivisor = 1.0
  end

  --
  -- format the value as text
  --

  -- if minimum value is K, divide value by divisor
  if sFactor == "1k" or sFactor == "2k" then
    nValue = nValue / nDivisor
    nDivCount = nDivCount + 1
  end

  while (math.abs(nValue) > nDivisor and nDivCount < 9 and nDivisor > 1.0) do
    nValue = nValue / nDivisor
    nDivCount = nDivCount + 1
  end

  nDigitsBeforeDecimal = math.max(1, math.floor(math.log10(math.abs(nValue))) + 1)
  nDigitsAfterDecimal = math.max(0, nPrecision - nDigitsBeforeDecimal)

  -- get formatting directive
  sPattern = "%." .. nDigitsAfterDecimal .. "f"

  -- format the number
  sText = string.format(sPattern, nValue) .. asSuffix[nDivCount]

  return sText
end                                                                                  -- FormatNumber
