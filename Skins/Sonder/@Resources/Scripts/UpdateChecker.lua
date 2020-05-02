--[[
--------------------------------------------------

Update Checker for Rainmeter
v6.1.0
By raiguard

Implements 'semver.lua' by kikito (https://github.com/kikito/semver.lua)
Implements 'JSON.lua' by rxi (https://github.com/rxi/json.lua)

--------------------------------------------------

Release Notes:
v6.1.0 - 2018-7-4
- Added 'RawChangelog' option
v6.0.0 - 2018-7-2
- Switched to use GitHub REST v3 API, rather than a customized INI file
v5.1.0 - 2018-6-21
- Switched to using the WebParser measure output rather than a downloaded file
  for the ReadINI function
v5.0.0 - 2017-12-20
- Removed hard-coded actions and replaced with arguments in the script measure
- Switched to using INI format for the remote version data
- Added 'GetIniValue' function for retrieving other information from remote
v4.0.0 - 2016-11-18
- Implemented "semver.lua" for more robust comparisons
v3.0.0 - 2016-11-14
- Added support for update checking on development versions
v2.1.0 - 2016-11-14
- Fixed oversight where if the user is on a development version for an
  outdated release, it would not return UpdateAvailable()
- Added 'ParsingError' return
v2.0.0 - 2016-8-4
- Removed dependancy on an output meter in favor of hard-coded actions, added
  more documentation
v1.0.1 - 2016-7-1
- Optimized gmatch function, more debug functionality
v1.0.0 - 2016-1-25
- Initial release

--------------------------------------------------

This script compares two semver-formatted version strings and compares them,
returning whether the current version is outdated, up-to-date, or a development
version. By default, it uses the GitHub REST API to download release information,
automatically extracting the most recent release from the specified repository.
However, you do not need to use this if you have another method for retrieving
the most recently released version.

Please keep in mind that version strings must be formatted using the Semantic
Versioning 2.0.0 format. See http://semver.org/ for additional information.

--------------------------------------------------

INSTRUCTIONS FOR USE:

[MeasureUpdateCheckerScript]
Measure=Script
Script=#@#Scripts\UpdateChecker.lua
CheckForPrereleases=#checkForPrereleases#
UpToDateAction=[!ShowMeter "UpToDateString"]
DevAction=[!ShowMeter "DevString"]
UpdateAvailableAction=[!ShowMeter "UpdateAvailableString"]
ParsingErrorAction=[!ShowMeter "ParsingErrorString"]

This is an example of the script measure you will use to invoke this script.
The 'CheckForPrereleases' defines whether the update checker will compare
with the most recent full release, or the most recent release whatsoever.
Each action option is a series of bangs to execute when that outcome is
reached by the comparison function.

[MeasureUpdateCheck]
Measure=WebParser
URL=#webParserUrl#
RegExp=(?siU)^(.*)$
StringIndex=1
UpdateRate=#updateCheckRate#
OnConnectErrorAction=[!Log "Couldn't connect to update server" "Error"]
FinishAction=[!CommandMeasure MeasureUpdateCheckerScript "CheckForUpdate('#version#', 'MeasureUpdateCheck')"]
DynamicVariables=1

This is an example of the webparser measure used to download the information.
The important thing to note here is the last argument on the 'FinishAction'
line. This must be the name of the WebParser measure, whatever that may
be. This allows the script to actually retrieve the string that was downloaded,
which lets the update check actually take place.

The script retrieves the raw JSON data from the GitHub API, then uses a JSON
parser function to convert it into a LUA table. From there, the script extracts
data for the most recent full release, and the most recent release regardless
of whether or not it is a prerelease. Which release is compared to and provides
the release information is determined by the 'CheckForPrereleases' option in the
script measure.

There are four values for each release that you can retrieve for displaying in
your skin. Each value is retrieved using
[&MeasureUpdateCheckerScript:GetReleaseInfo('key')]. Replace key with one of the
following options:

'name' - returns the tag version of the release
'date' - returns the published date of the release
'changelog' - returns the release's changelog, with the release version and
              published date added to the beginning
'downloadUrl' - returns the URL that can be used to download the .RMSKIN
                attached to the release

Please note that any meter that extracts information from the script in this way
will need 'DynamicVariables=1' set in order to function properly.

By default, the changelog will include the release's tag version and published
date attached to the beginning of the string. If you wish to disable this, add
'RawChangelog=1' to the script measure.

--------------------------------------------------
]]--

debug = false

function Initialize()
  upToDateAction = SELF:GetOption('UpToDateAction')
  updateAvailableAction = SELF:GetOption('UpdateAvailableAction')
  parsingErrorAction = SELF:GetOption('ParsingErrorAction')
  devAction = SELF:GetOption('DevAction')
  rawChangelog = tonumber(SELF:GetOption('RawChangelog', '0'))
  checkForPrereleases = tonumber(SELF:GetOption('CheckForPrereleases', '1'))
  if devAction == '' or devAction == nil then devAction = upToDateAction end
  printIndent = ' '
  releases = {}
end

function Update() end

function CheckForUpdate(cVersion, measureName)
  showPrereleases = tonumber(SELF:GetOption('ShowPrereleases', 1))
  apiJson = json.decode(SKIN:GetMeasure(measureName or 'MeasureUpdateCheck'):GetStringValue())
  releases = AssembleReleaseInfo(apiJson)
  Compare(cVersion, releases[checkForPrereleases + 1]['name'])
end

-- compares two semver-formatted version strings
function Compare(cVersion, rVersion)
  cVersion = v(cVersion)
  rVersion = v(rVersion)
  if cVersion == rVersion then
    LogHelper('Up-to-date', 'Debug')
    SKIN:Bang(upToDateAction)
  elseif cVersion > rVersion then
    LogHelper('Development version', 'Debug')
    SKIN:Bang(devAction)
  elseif cVersion < rVersion then
    LogHelper('Update available', 'Debug')
    SKIN:Bang(updateAvailableAction)
  else
    LogHelper('Parsing error', 'Debug')
    SKIN:Bang(parsingErrorAction)
  end
end

function GetReleaseInfo(key)
  return releases[checkForPrereleases + 1] and releases[checkForPrereleases + 1][key] or '---'
end

function AssembleReleaseInfo(jsonTable)
  local releases = {}
  local i = 0
  local k = 0
  while i == 0 do
    k = k + 1
    if jsonTable[k]['prerelease'] == false then
      i = 1
      releases[1] = {}
      releases[1]['name'] = jsonTable[k]['tag_name']:gsub('v', '')
      releases[1]['date'] = jsonTable[k]['published_at']:gsub('(.*)T(.*)', '%1')
      releases[1]['changelog'] = (rawChangelog == 0 and  'v' .. releases[1]['name'] .. ' - ' .. releases[1]['date'] .. '\n' or '') .. jsonTable[k]['body']:gsub('\r\n', '\n')
      releases[1]['downloadUrl'] = jsonTable[k]['assets'][1]['browser_download_url']
    end
  end
  releases[2] = {}
  releases[2]['name'] = jsonTable[1]['tag_name']:gsub('v', '')
  releases[2]['date'] = jsonTable[1]['published_at']:gsub('(.*)T(.*)', '%1')
  releases[2]['changelog'] = (rawChangelog == 0 and  'v' .. releases[2]['name'] .. ' - ' .. releases[2]['date'] .. '\n' or '') .. jsonTable[1]['body']:gsub('\r\n', '\n')
  releases[2]['downloadUrl'] = jsonTable[1]['assets'][1]['browser_download_url']
  return releases
end

-- function to make logging messages less cluttered
function LogHelper(message, type)
  if type == nil then type = 'Debug' end
  if debug == true then
    SKIN:Bang('!Log', message, type)
  elseif type ~= 'Debug' then
    SKIN:Bang('!Log', message, type)
  end
end


--[[
  --------------------------------------------------

  SEMVER.LUA
  By kitito

  MIT LICENSE

  Copyright (c) 2015 Enrique García Cota

  Permission is hereby granted, free of charge, to any person obtaining a
  copy of tother software and associated documentation files (the
  'Software'), to deal in the Software without restriction, including
  without limitation the rights to use, copy, modify, merge, publish,
  distribute, sublicense, and/or sell copies of the Software, and to
  permit persons to whom the Software is furnished to do so, subject to
  the following conditions:

  The above copyright notice and tother permission notice shall be included
  in all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS
  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
  CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
  TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
  SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

  --------------------------------------------------
]]--


local function checkPositiveInteger(number, name)
  assert(number >= 0, name .. ' must be a valid positive number')
  assert(math.floor(number) == number, name .. ' must be an integer')
end

local function present(value)
  return value and value ~= ''
end

-- splitByDot('a.bbc.d') == {'a', 'bbc', 'd'}
local function splitByDot(str)
  str = str or ''
  local t, count = {}, 0
  str:gsub('([^%.]+)', function(c)
    count = count + 1
    t[count] = c
  end)
  return t
end

local function parsePrereleaseAndBuildWithSign(str)
  local prereleaseWithSign, buildWithSign = str:match('^(-[^+]+)(+.+)$')
  if not (prereleaseWithSign and buildWithSign) then
    prereleaseWithSign = str:match('^(-.+)$')
    buildWithSign      = str:match('^(+.+)$')
  end
  assert(prereleaseWithSign or buildWithSign, ('The parameter %q must begin with + or - to denote a prerelease or a build'):format(str))
  return prereleaseWithSign, buildWithSign
end

local function parsePrerelease(prereleaseWithSign)
  if prereleaseWithSign then
    local prerelease = prereleaseWithSign:match('^-(%w[%.%w-]*)$')
    assert(prerelease, ('The prerelease %q is not a slash followed by alphanumerics, dots and slashes'):format(prereleaseWithSign))
    return prerelease
  end
end

local function parseBuild(buildWithSign)
  if buildWithSign then
    local build = buildWithSign:match('^%+(%w[%.%w-]*)$')
    assert(build, ('The build %q is not a + sign followed by alphanumerics, dots and slashes'):format(buildWithSign))
    return build
  end
end

local function parsePrereleaseAndBuild(str)
  if not present(str) then return nil, nil end

  local prereleaseWithSign, buildWithSign = parsePrereleaseAndBuildWithSign(str)

  local prerelease = parsePrerelease(prereleaseWithSign)
  local build = parseBuild(buildWithSign)

  return prerelease, build
end

local function parseVersion(str)
  local sMajor, sMinor, sPatch, sPrereleaseAndBuild = str:match('^(%d+)%.?(%d*)%.?(%d*)(.-)$')
  assert(type(sMajor) == 'string', ('Could not extract version number(s) from %q'):format(str))
  local major, minor, patch = tonumber(sMajor), tonumber(sMinor), tonumber(sPatch)
  local prerelease, build = parsePrereleaseAndBuild(sPrereleaseAndBuild)
  return major, minor, patch, prerelease, build
end


-- return 0 if a == b, -1 if a < b, and 1 if a > b
local function compare(a,b)
  return a == b and 0 or a < b and -1 or 1
end

local function compareIds(myId, otherId)
  if myId == otherId then return  0
  elseif not myId    then return -1
  elseif not otherId then return  1
  end

  local selfNumber, otherNumber = tonumber(myId), tonumber(otherId)

  if selfNumber and otherNumber then -- numerical comparison
    return compare(selfNumber, otherNumber)
  -- numericals are always smaller than alphanums
  elseif selfNumber then
    return -1
  elseif otherNumber then
    return 1
  else
    return compare(myId, otherId) -- alphanumerical comparison
  end
end

local function smallerIdList(myIds, otherIds)
  local myLength = #myIds
  local comparison

  for i=1, myLength do
    comparison = compareIds(myIds[i], otherIds[i])
    if comparison ~= 0 then
      return comparison == -1
    end
    -- if comparison == 0, continue loop
  end

  return myLength < #otherIds
end

local function smallerPrerelease(mine, other)
  if mine == other or not mine then return false
  elseif not other then return true
  end

  return smallerIdList(splitByDot(mine), splitByDot(other))
end

local methods = {}

function methods:nextMajor()
  return semver(self.major + 1, 0, 0)
end
function methods:nextMinor()
  return semver(self.major, self.minor + 1, 0)
end
function methods:nextPatch()
  return semver(self.major, self.minor, self.patch + 1)
end

local mt = { __index = methods }
function mt:__eq(other)
  return self.major == other.major and
         self.minor == other.minor and
         self.patch == other.patch and
         self.prerelease == other.prerelease
         -- notice that build is ignored for precedence in semver 2.0.0
end
function mt:__lt(other)
  if self.major ~= other.major then return self.major < other.major end
  if self.minor ~= other.minor then return self.minor < other.minor end
  if self.patch ~= other.patch then return self.patch < other.patch end
  return smallerPrerelease(self.prerelease, other.prerelease)
  -- notice that build is ignored for precedence in semver 2.0.0
end
-- This works like the 'pessimisstic operator' in Rubygems.
-- if a and b are versions, a ^ b means 'b is backwards-compatible with a'
-- in other words, 'it's safe to upgrade from a to b'
function mt:__pow(other)
  if self.major == 0 then
    return self == other
  end
  return self.major == other.major and
         self.minor <= other.minor
end
function mt:__tostring()
  local buffer = { ('%d.%d.%d'):format(self.major, self.minor, self.patch) }
  if self.prerelease then table.insert(buffer, '-' .. self.prerelease) end
  if self.build      then table.insert(buffer, '+' .. self.build) end
  return table.concat(buffer)
end

function v(major, minor, patch, prerelease, build)
  assert(major, 'At least one parameter is needed')

  if type(major) == 'string' then
    major,minor,patch,prerelease,build = parseVersion(major)
  end
  patch = patch or 0
  minor = minor or 0

  checkPositiveInteger(major, 'major')
  checkPositiveInteger(minor, 'minor')
  checkPositiveInteger(patch, 'patch')

  local result = {major=major, minor=minor, patch=patch, prerelease=prerelease, build=build}
  return setmetatable(result, mt)
end

--
-- json.lua
--
-- Copyright (c) 2018 rxi
--
-- Permission is hereby granted, free of charge, to any person obtaining a copy of
-- this software and associated documentation files (the "Software"), to deal in
-- the Software without restriction, including without limitation the rights to
-- use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
-- of the Software, and to permit persons to whom the Software is furnished to do
-- so, subject to the following conditions:
--
-- The above copyright notice and this permission notice shall be included in all
-- copies or substantial portions of the Software.
--
-- THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
-- IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
-- FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
-- AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
-- LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
-- OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
-- SOFTWARE.
--

json = { _version = "0.1.1" }

-------------------------------------------------------------------------------
-- Encode
-------------------------------------------------------------------------------

local encode

local escape_char_map = {
  [ "\\" ] = "\\\\",
  [ "\"" ] = "\\\"",
  [ "\b" ] = "\\b",
  [ "\f" ] = "\\f",
  [ "\n" ] = "\\n",
  [ "\r" ] = "\\r",
  [ "\t" ] = "\\t",
}

local escape_char_map_inv = { [ "\\/" ] = "/" }
for k, v in pairs(escape_char_map) do
  escape_char_map_inv[v] = k
end


local function escape_char(c)
  return escape_char_map[c] or string.format("\\u%04x", c:byte())
end


local function encode_nil(val)
  return "null"
end


local function encode_table(val, stack)
  local res = {}
  stack = stack or {}

  -- Circular reference?
  if stack[val] then error("circular reference") end

  stack[val] = true

  if val[1] ~= nil or next(val) == nil then
    -- Treat as array -- check keys are valid and it is not sparse
    local n = 0
    for k in pairs(val) do
      if type(k) ~= "number" then
        error("invalid table: mixed or invalid key types")
      end
      n = n + 1
    end
    if n ~= #val then
      error("invalid table: sparse array")
    end
    -- Encode
    for i, v in ipairs(val) do
      table.insert(res, encode(v, stack))
    end
    stack[val] = nil
    return "[" .. table.concat(res, ",") .. "]"

  else
    -- Treat as an object
    for k, v in pairs(val) do
      if type(k) ~= "string" then
        error("invalid table: mixed or invalid key types")
      end
      table.insert(res, encode(k, stack) .. ":" .. encode(v, stack))
    end
    stack[val] = nil
    return "{" .. table.concat(res, ",") .. "}"
  end
end


local function encode_string(val)
  return '"' .. val:gsub('[%z\1-\31\\"]', escape_char) .. '"'
end


local function encode_number(val)
  -- Check for NaN, -inf and inf
  if val ~= val or val <= -math.huge or val >= math.huge then
    error("unexpected number value '" .. tostring(val) .. "'")
  end
  return string.format("%.14g", val)
end


local type_func_map = {
  [ "nil"     ] = encode_nil,
  [ "table"   ] = encode_table,
  [ "string"  ] = encode_string,
  [ "number"  ] = encode_number,
  [ "boolean" ] = tostring,
}


encode = function(val, stack)
  local t = type(val)
  local f = type_func_map[t]
  if f then
    return f(val, stack)
  end
  error("unexpected type '" .. t .. "'")
end


function json.encode(val)
  return ( encode(val) )
end


-------------------------------------------------------------------------------
-- Decode
-------------------------------------------------------------------------------

local parse

local function create_set(...)
  local res = {}
  for i = 1, select("#", ...) do
    res[ select(i, ...) ] = true
  end
  return res
end

local space_chars   = create_set(" ", "\t", "\r", "\n")
local delim_chars   = create_set(" ", "\t", "\r", "\n", "]", "}", ",")
local escape_chars  = create_set("\\", "/", '"', "b", "f", "n", "r", "t", "u")
local literals      = create_set("true", "false", "null")

local literal_map = {
  [ "true"  ] = true,
  [ "false" ] = false,
  [ "null"  ] = nil,
}


local function next_char(str, idx, set, negate)
  for i = idx, #str do
    if set[str:sub(i, i)] ~= negate then
      return i
    end
  end
  return #str + 1
end


local function decode_error(str, idx, msg)
  local line_count = 1
  local col_count = 1
  for i = 1, idx - 1 do
    col_count = col_count + 1
    if str:sub(i, i) == "\n" then
      line_count = line_count + 1
      col_count = 1
    end
  end
  error( string.format("%s at line %d col %d", msg, line_count, col_count) )
end


local function codepoint_to_utf8(n)
  -- http://scripts.sil.org/cms/scripts/page.php?site_id=nrsi&id=iws-appendixa
  local f = math.floor
  if n <= 0x7f then
    return string.char(n)
  elseif n <= 0x7ff then
    return string.char(f(n / 64) + 192, n % 64 + 128)
  elseif n <= 0xffff then
    return string.char(f(n / 4096) + 224, f(n % 4096 / 64) + 128, n % 64 + 128)
  elseif n <= 0x10ffff then
    return string.char(f(n / 262144) + 240, f(n % 262144 / 4096) + 128,
                       f(n % 4096 / 64) + 128, n % 64 + 128)
  end
  error( string.format("invalid unicode codepoint '%x'", n) )
end


local function parse_unicode_escape(s)
  local n1 = tonumber( s:sub(3, 6),  16 )
  local n2 = tonumber( s:sub(9, 12), 16 )
  -- Surrogate pair?
  if n2 then
    return codepoint_to_utf8((n1 - 0xd800) * 0x400 + (n2 - 0xdc00) + 0x10000)
  else
    return codepoint_to_utf8(n1)
  end
end


local function parse_string(str, i)
  local has_unicode_escape = false
  local has_surrogate_escape = false
  local has_escape = false
  local last
  for j = i + 1, #str do
    local x = str:byte(j)

    if x < 32 then
      decode_error(str, j, "control character in string")
    end

    if last == 92 then -- "\\" (escape char)
      if x == 117 then -- "u" (unicode escape sequence)
        local hex = str:sub(j + 1, j + 5)
        if not hex:find("%x%x%x%x") then
          decode_error(str, j, "invalid unicode escape in string")
        end
        if hex:find("^[dD][89aAbB]") then
          has_surrogate_escape = true
        else
          has_unicode_escape = true
        end
      else
        local c = string.char(x)
        if not escape_chars[c] then
          decode_error(str, j, "invalid escape char '" .. c .. "' in string")
        end
        has_escape = true
      end
      last = nil

    elseif x == 34 then -- '"' (end of string)
      local s = str:sub(i + 1, j - 1)
      if has_surrogate_escape then
        s = s:gsub("\\u[dD][89aAbB]..\\u....", parse_unicode_escape)
      end
      if has_unicode_escape then
        s = s:gsub("\\u....", parse_unicode_escape)
      end
      if has_escape then
        s = s:gsub("\\.", escape_char_map_inv)
      end
      return s, j + 1

    else
      last = x
    end
  end
  decode_error(str, i, "expected closing quote for string")
end


local function parse_number(str, i)
  local x = next_char(str, i, delim_chars)
  local s = str:sub(i, x - 1)
  local n = tonumber(s)
  if not n then
    decode_error(str, i, "invalid number '" .. s .. "'")
  end
  return n, x
end


local function parse_literal(str, i)
  local x = next_char(str, i, delim_chars)
  local word = str:sub(i, x - 1)
  if not literals[word] then
    decode_error(str, i, "invalid literal '" .. word .. "'")
  end
  return literal_map[word], x
end


local function parse_array(str, i)
  local res = {}
  local n = 1
  i = i + 1
  while 1 do
    local x
    i = next_char(str, i, space_chars, true)
    -- Empty / end of array?
    if str:sub(i, i) == "]" then
      i = i + 1
      break
    end
    -- Read token
    x, i = parse(str, i)
    res[n] = x
    n = n + 1
    -- Next token
    i = next_char(str, i, space_chars, true)
    local chr = str:sub(i, i)
    i = i + 1
    if chr == "]" then break end
    if chr ~= "," then decode_error(str, i, "expected ']' or ','") end
  end
  return res, i
end


local function parse_object(str, i)
  local res = {}
  i = i + 1
  while 1 do
    local key, val
    i = next_char(str, i, space_chars, true)
    -- Empty / end of object?
    if str:sub(i, i) == "}" then
      i = i + 1
      break
    end
    -- Read key
    if str:sub(i, i) ~= '"' then
      decode_error(str, i, "expected string for key")
    end
    key, i = parse(str, i)
    -- Read ':' delimiter
    i = next_char(str, i, space_chars, true)
    if str:sub(i, i) ~= ":" then
      decode_error(str, i, "expected ':' after key")
    end
    i = next_char(str, i + 1, space_chars, true)
    -- Read value
    val, i = parse(str, i)
    -- Set
    res[key] = val
    -- Next token
    i = next_char(str, i, space_chars, true)
    local chr = str:sub(i, i)
    i = i + 1
    if chr == "}" then break end
    if chr ~= "," then decode_error(str, i, "expected '}' or ','") end
  end
  return res, i
end


local char_func_map = {
  [ '"' ] = parse_string,
  [ "0" ] = parse_number,
  [ "1" ] = parse_number,
  [ "2" ] = parse_number,
  [ "3" ] = parse_number,
  [ "4" ] = parse_number,
  [ "5" ] = parse_number,
  [ "6" ] = parse_number,
  [ "7" ] = parse_number,
  [ "8" ] = parse_number,
  [ "9" ] = parse_number,
  [ "-" ] = parse_number,
  [ "t" ] = parse_literal,
  [ "f" ] = parse_literal,
  [ "n" ] = parse_literal,
  [ "[" ] = parse_array,
  [ "{" ] = parse_object,
}


parse = function(str, idx)
  local chr = str:sub(idx, idx)
  local f = char_func_map[chr]
  if f then
    return f(str, idx)
  end
  decode_error(str, idx, "unexpected character '" .. chr .. "'")
end


function json.decode(str)
  if type(str) ~= "string" then
    error("expected argument of type string, got " .. type(str))
  end
  local res, idx = parse(str, next_char(str, 1, space_chars, true))
  idx = next_char(str, idx, space_chars, true)
  if idx <= #str then
    decode_error(str, idx, "trailing garbage")
  end
  return res
end


return json