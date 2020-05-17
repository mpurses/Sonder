--[[
----------------------------------------------------------------------------------------------------

LOADSKIN.LUA
raiguard
v4.0.0

----------------------------------------------------------------------------------------------------

Release Notes:
v4.0.0 - 2019-05-12
- Added support for an unlimited number of asset variants
- Replaced GetIcon() with GetAsset()
- Fixed that calling the script through inline LUA from a MeterStyle line would
  crash Rainmeter
v3.0.1 - 2018-10-28
- Changed default toggle values back to the #toggleOn# and #toggleOff# variables
- Fixed script crashing if called through inline LUA
v3.0.0 - 2018-10-28
- Redesigned script to simplify the required inputs
- Improved documentation
v2.0.0 - 2018-6-22
- Updated to use the new ConfigActive plugin rather than WebParser
v1.3.0 - 2018-6-21
- The script now gets the input from a WebParser measure, rather than directly parsing
  Rainmeter.ini (for Rainmeter 4.2+ compatibility)
v1.2.0 - 2017-12-27
 - Added ability to specifically load or unload skins, rather than always toggling them
v1.1.0 - 2017-12-7
 - Consolidated LoadConfig() into LoadSkin()
v1.0.0 - 2017-10-2
 - Initial release

----------------------------------------------------------------------------------------------------

This script loads / unlaods the specified skin or config, and sets parameters for toggle
buttons related to those skins.


INSTRUCTIONS FOR USE:
Copy this file and paste it into your own suite. First, you will need to create a
ConfigActive plugin measure:

  [MeasureConfigActive]
  Measure=Plugin
  Plugin=ConfigActive

That's all you need to add to this measure, the script will handle the rest. Speaking of
the script, that is the next measure you need to create:

  [MeasureLoadSkinScript]
  Measure=Script
  ScriptFile=#@#Scripts\LoadSkin.lua
  Assets={ check_icon = { 'check-on', 'check-off' } }
  ToggleGroup=ToggleButtons
  MeasureName=MeasureConfigActive

The 'Assets' parameter is a raw LUA table defining what assets to use for the skin buttons.
The format of the assets table goes { groupname = { 'OnAsset', 'OffAsset' } }. You can
add as many groups as you want to the parent table. If you do not specify this option, the
table will default to having a 'state' group with the strings 'On' and 'Off' as their
respective states.

The 'ToggleGroup' parameter specifies the group that the toggle button meters belong to.
If you do not include this option, it will default to 'SkinToggles'.

Last but not least, the 'MeasureName' option is simply the name of the ConfigActive
measure that you created before. If unspecified, it will default to 'MeasureConfigActive'.

A toggle button meter should look something like this:

  [MeterToggleSystem]
  Meter=Image
  ImageName=#@#Images\[&MeasureLoadSkinScript:GetAsset('check_icon', 'illustro\\System')].png
  X=5
  Y=5
  W=31
  H=20
  LeftMouseUpAction=[!CommandMeasure MeasureLoadSkinScript "ToggleSkin('illustro\\System')"]
  DynamicVariables=1
  Group=SkinToggles

The toggle buttons get their parameters via inline LUA, which requires that
'DynamicVariables=1' must be set on all the buttons. The buttons must also belong to the
group specified in the script measure.

Obviously, if you are using strings as your buttons, the inline LUA will be contained in
the 'Text' option, rather than 'ImageName'.

----------------------------------------------------------------------------------------------------
]]--

function Initialize()
  assets = loadstring('return ' .. SELF:GetOption('Assets', '{ state = { \'On\', \'Off\' } }'))()
  toggleOn = SELF:GetOption('ToggleOn', SKIN:GetVariable('toggleOn'))
  toggleOff = SELF:GetOption('ToggleOff', SKIN:GetVariable('toggleOff'))
  radioOn = SELF:GetOption('RadioOn', toggleOn)
  radioOff = SELF:GetOption('RadioOff', toggleOff)
  toggleGroup = SELF:GetOption('ToggleGroup', 'SkinToggles')
  caMeasureName = SELF:GetOption('MeasureName', 'MeasureConfigActive')
end

function Update() end

-- toggles or sets the specified skin or config
function ToggleSkin(configName, iniName, toState)
  --[[
    PLEASE NOTE THAT THE DOUBLE BACKSLASHES ARE ALWAYS REQUIRED BECAUSE OF LUA SHENANIGANS
    configName: the name of the config you wish to toggle (e.g. 'illustro\\Disk')
    iniName (optional): the name of the skin INI you wish to toggle (e.g. '1 Disk.ini')
    toState (optional): the state you wish to set the skin to (1 for active, -1 for inactive)
  ]]--
  local configState, activeIni = GetConfigState(configName)
  local toState = toState or iniName and (iniName == activeIni and -1 or 1) or configState * -1
  if toState == 1 then
    if iniName == nil then
      SKIN:Bang('!ActivateConfig', configName)
    elseif iniName ~= activeIni then
      SKIN:Bang('!ActivateConfig', configName, iniName)
    end
  elseif configState == 1 then
    SKIN:Bang('!DeactivateConfig', configName)
  end
  SKIN:Bang('!UpdateMeterGroup', toggleGroup)
  SKIN:Bang('!Redraw')
  return ''
end

-- returns the requested asset based on the config's active status
function GetAsset(type, configName, iniName)
  --[[
    PLEASE NOTE THAT THE DOUBLE BACKSLASHES ARE ALWAYS REQUIRED BECAUSE OF LUA SHENANIGANS
    type: the asset type to retrieve from the assets table (e.g. 'check_icon')
    configName: the name of the relevant config (e.g. 'illustro\\Disk')
    iniName (optional): the name of the relevant INI file (e.g. '1 Disk.ini')
  ]]--
  local configState, activeIni = GetConfigState(configName)
  return (configState and assets[type]) and (configState == 1 and (iniName and (activeIni == iniName and assets[type][1] or assets[type][2]) or assets[type][1]) or assets[type][2]) or SKIN:Bang('!Log', 'Variable reference or icon type are invalid!', 'Error')
end

-- retrieves config state and active INI
function GetConfigState(configName)
  local isActive = SKIN:ReplaceVariables('[&' .. caMeasureName .. ':IsActive(' .. configName .. ')]')
  local activeIni = SKIN:ReplaceVariables('[&' .. caMeasureName .. ':ConfigVariantName(' .. configName .. ')]')
  return tonumber(isActive), activeIni
end