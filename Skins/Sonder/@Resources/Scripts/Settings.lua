-- --------------------------------------------------------------------------------
-- DYNAMIC RAINMETER SETTINGS SYSTEM
-- v1.0.0
-- By raiguard
--
-- This file has been modified from the original to add some new functions.
-- --------------------------------------------------------------------------------
-- Changelog:
-- v1.0.0 - 2019-05-08
-- - Initial release
-- --------------------------------------------------------------------------------
-- MIT License

-- Copyright (c) 2019 Caleb Heuer

-- Permission is hereby granted, free of charge, to any person obtaining a copy
-- of this software and associated documentation files (the "Software"), to deal
-- in the Software without restriction, including without limitation the rights
-- to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
-- copies of the Software, and to permit persons to whom the Software is
-- furnished to do so, subject to the following conditions:

-- The above copyright notice and this permission notice shall be included in all
-- copies or substantial portions of the Software.

-- THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
-- IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
-- FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
-- AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
-- LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
-- OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
-- SOFTWARE.
-- --------------------------------------------------------------------------------
-- Documentation: https://github.com/raiguard/rainmeter-settings/blob/master/README.md

debug = false

function Initialize()
  meterUpdateGroup = SELF:GetOption('MeterUpdateGroup', 'Settings')
  settingsPath = SELF:GetOption('SettingsPath', SKIN:GetVariable('CURRENTPATH') .. SKIN:GetVariable('CURRENTFILE'))
  configPath = SELF:GetOption('ConfigPath', SKIN:GetVariable('CURRENTCONFIG'))
  assets = loadstring('return ' .. SELF:GetOption('Assets'))()
  defaultAction = SELF:GetOption('DefaultAction')
  measureInputText = SELF:GetOption('MeasureInputText', 'MeasureSettingsInputText')
  --colorPickerConfig = SELF:GetOption('ColorPickerConfig')
  --colorPickerPath = SKIN:GetVariable('SKINSPATH') .. colorPickerConfig .. '\\ColorPickerPlus.ini'
end

function Update() end

-- toggles the specified variable between the two given states
function Toggle(variable, onState, offState, actionSet, ifLogic, oSettingsPath, oConfigPath)
  local value = SKIN:GetVariable(variable)
  local lSettingsPath = oSettingsPath or settingsPath
  local lConfigPath = oConfigPath or configPath

  if value == offState then
    SetVariable(variable, onState, lSettingsPath, lConfigPath)
    RmLog(variable .. '=' .. onState, 'Debug')
    value = onState
  else
    SetVariable(variable, offState, lSettingsPath, lConfigPath)
    RmLog(variable .. '=' .. offState, 'Debug')
    value = offState
  end

  UpdateMeters()
  ActionSet(actionSet, ifLogic, value)
end

-- sets the specified variable to the given input. For use with radio buttons
-- and input boxes.
function Set(variable, input, actionSet, ifLogic, oSettingsPath, oConfigPath)
  local lSettingsPath = oSettingsPath or settingsPath
  local lConfigPath = oConfigPath or configPath
  SetVariable(variable, input, lSettingsPath, lConfigPath)
  RmLog(variable .. '=' .. input, 'Debug')
  UpdateMeters()
  ActionSet(actionSet, ifLogic, input)
end

-- changes variable to the next or previous value, based on a provided data table
function Pivot(data, variable, direction, actionSet, ifLogic, oSettingsPath, oConfigPath)
  local lSettingsPath = oSettingsPath or settingsPath
  local lConfigPath = oConfigPath or configPath
  data = type(data) == 'string' and loadstring('return ' .. SELF:GetOption(data) or nil)() or data
  local tableLength = table.length(data)
  local index = table.find(data, SKIN:GetVariable(variable))

  if index < tableLength and direction == 'right' then
    SetVariable(variable, data[index + 1], lSettingsPath, lConfigPath)
    RmLog(variable .. '=' .. data[index + 1], 'Debug')
    UpdateMeters()
    ActionSet(actionSet, ifLogic, data[index + 1])
  elseif index > 1 and direction == 'left' then
    SetVariable(variable, data[index - 1], lSettingsPath, lConfigPath)
    RmLog(variable .. '=' .. data[index - 1], 'Debug')
    UpdateMeters()
    ActionSet(actionSet, ifLogic, data[index - 1])
  end
end

-- invokes ColorPickerPlus; after color is selected, the Set() function is used with the given parameters
-- function PickColor(variable, actionSet, ifLogic, oSettingsPath, oConfigPath)
  -- local lSettingsPath = oSettingsPath or settingsPath
  -- local lConfigPath = oConfigPath or configPath
  -- SKIN:Bang('!WriteKeyValue', 'Variables', 'baseColor', SKIN:GetVariable(variable), colorPickerPath)
  -- SKIN:Bang('!WriteKeyValue', 'Variables', 'finishAction', '[!CommandMeasure ' .. SELF:GetName() .. ' \"Set(\'' .. variable .. '\', \'[&MeasureScript:GetColor(\'cur_rgb\')]\', ' .. (actionSet and ('\'' .. actionSet .. '\'') or 'nil') .. ', ' .. (ifLogic and ('\'' .. ifLogic .. '\'') or 'nil') .. ', \'' .. string.gsub(lSettingsPath, '\\', '\\\\') .. '\', \'' .. string.gsub(lConfigPath, '\\', '\\\\') .. '\')\" \"' .. SKIN:GetVariable('CURRENTCONFIG') .. '\"][!DeactivateConfig]', colorPickerPath)
  -- SKIN:Bang('!ActivateConfig', colorPickerConfig)
-- end

-- invokes a text box; after text is entered, the Set() function is used with the given parameters
function InputText(data, variable, actionSet, ifLogic, oSettingsPath, oConfigPath)
  local lSettingsPath = oSettingsPath or settingsPath
  local lConfigPath = oConfigPath or configPath
  data = type(data) == 'string' and loadstring('return ' .. SELF:GetOption(data) or nil)() or data
  optionsString = '[!SetVariable _inputTextEscape \"$UserInput$\"][!CommandMeasure '.. SELF:GetName() .. ' \"Set(\'' .. variable .. '\', \'[' .. measureInputText .. ']\', ' .. (actionSet and ('\'' .. actionSet .. '\'') or 'nil') .. ', ' .. (ifLogic and ('\'' .. ifLogic .. '\'') or 'nil') .. ', \'' .. string.gsub(lSettingsPath, '\\', '\\\\') .. '\', \'' .. string.gsub(lConfigPath, '\\', '\\\\') .. '\')\"] DefaultValue=\"#*' .. variable .. '*#\" X=\"([' .. data.meterName .. ':X] + ' .. (data.padding[1] or 0) .. ')\" Y=\"([' .. data.meterName .. ':Y] + ' .. (data.padding[2] or 0) .. ')\" W=\"([' .. data.meterName .. ':W] + ' .. (data.padding[1] or 0) + (data.padding[3] or 0) .. ')\" H=\"([' .. data.meterName .. ':H] + ' .. (data.padding[2] or 0) + (data.padding[4] or 0) .. ')\"'
  data.meterName = nil
  data.padding = nil

  for k,v in pairs(data) do
    optionsString = optionsString .. ' ' .. k .. '=' .. (type(v) == 'string' and '"' or '') .. v .. (type(v) == 'string' and '"' or '')
	print(optionsString)
  end

  if data and SKIN:GetVariable(variable) then
    SKIN:Bang('!SetOption', measureInputText, 'Command1', optionsString)
    SKIN:Bang('!UpdateMeasure', measureInputText)
    SKIN:Bang('!CommandMeasure', measureInputText, 'Executebatch 1')
  else
    RmLog('Data table or variable name is invalid!', 'Error')
  end
end

function ActionSet(actionSet, ifLogic, input)
  local actionSetName = actionSet
  if actionSet == nil then
    SKIN:Bang(defaultAction)
  else
    if ifLogic == true then
      actionSetName = actionSet .. input
      actionSet = SELF:GetOption(actionSet .. input)
    else actionSet = SELF:GetOption(actionSet) end
    if actionSet == '' then RmLog('ActionSet \'' .. actionSetName .. '\' is empty or missing', 'Warning') end
    RmLog(actionSetName .. '=' .. actionSet)
    SKIN:Bang(actionSet)
  end
end

function GetAsset(type, ref, onState)
  local var = SKIN:GetVariable(ref)
  return (var and assets[type]) and (var == onState and assets[type][1] or assets[type][2]) or RmLog('Variable reference or icon type are invalid!', 'Error')
end

-- sets the variable using both !SetVariable and !WriteKeyValue, updating the
-- value both in the settings skin and the primary skin
function SetVariable(name, parameter, filePath, configPath)
  SKIN:Bang('!SetVariable', name, parameter)
  if filePath == nil then SKIN:Bang('!WriteKeyValue', 'Variables', name, parameter)
  else SKIN:Bang('!WriteKeyValue', 'Variables', name, parameter, filePath) end
  if configPath ~= nil then SKIN:Bang('!SetVariable', name, parameter, configPath) end
end

-- updates the toggle buttons, radio buttons, and input boxes
function UpdateMeters()
  SKIN:Bang('!UpdateMeasureGroup', meterUpdateGroup)
  SKIN:Bang('!UpdateMeterGroup', meterUpdateGroup)
  SKIN:Bang('!Redraw')
end

function table.length(T)
  local count = 0
  for _ in pairs(T) do count = count + 1 end
  return count
end

function table.find(t, value)
  for _,v in pairs(t) do
    if (v == value) then
      return _
    end
  end
  return false
end

-- writes the given value or table to the rainmeter log
function RmLog(...)
  if debug == nil then debug = true end
  if printIndent == nil then printIndent = '' end
  if type(arg[1]) == 'table' then
    if arg[3] == nil then arg[3] = 'Debug' end
    if arg[3] == 'Debug' and debug == false then return end
    RmLog(printIndent .. arg[2] .. ' = {')
    local pI = printIndent
    printIndent = printIndent .. '    '
    for k,v in pairs(arg[1]) do
      if type(v) == 'table' then
        RmLog(v, k, arg[3])
      else
        RmLog(printIndent .. tostring(k) .. ' = ' .. tostring(v), arg[3])
      end
    end
    printIndent = pI
    RmLog(printIndent .. '}', arg[3])
  else
    if arg[2] == nil then arg[2] = 'Debug' end
    if arg[2] == 'Debug' and debug == false then return end
    SKIN:Bang("!Log", tostring(arg[1]), arg[2])
  end
end

-- --------------------------------------------------------------------------------
-- MODIFICATIONS

function GetKey(name, key) return SKIN:GetMeter(name):GetOption(key) end
function Gsub(string, pattern, replacement) return string:gsub(pattern, replacement or '') end