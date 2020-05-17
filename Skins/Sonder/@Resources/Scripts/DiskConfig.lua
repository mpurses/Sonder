debug = false
alphabet = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
numDisks = 10

function Initialize()
  dynamicVarsPath = SKIN:GetVariable('dynamicVarsPath')
  hiddenDisks = SKIN:GetVariable('manualHideDisks')
  measureCheckTable = {
    A = SKIN:GetMeasure('MeasureCheckDiskAExists'),
    B = SKIN:GetMeasure('MeasureCheckDiskBExists'),
    C = SKIN:GetMeasure('MeasureCheckDiskCExists'),
    D = SKIN:GetMeasure('MeasureCheckDiskDExists'),
    E = SKIN:GetMeasure('MeasureCheckDiskEExists'),
    F = SKIN:GetMeasure('MeasureCheckDiskFExists'),
    G = SKIN:GetMeasure('MeasureCheckDiskGExists'),
    H = SKIN:GetMeasure('MeasureCheckDiskHExists'),
    I = SKIN:GetMeasure('MeasureCheckDiskIExists'),
    J = SKIN:GetMeasure('MeasureCheckDiskJExists'),
    K = SKIN:GetMeasure('MeasureCheckDiskKExists'),
    L = SKIN:GetMeasure('MeasureCheckDiskLExists'),
    M = SKIN:GetMeasure('MeasureCheckDiskMExists'),
    N = SKIN:GetMeasure('MeasureCheckDiskNExists'),
    O = SKIN:GetMeasure('MeasureCheckDiskOExists'),
    P = SKIN:GetMeasure('MeasureCheckDiskPExists'),
    Q = SKIN:GetMeasure('MeasureCheckDiskQExists'),
    R = SKIN:GetMeasure('MeasureCheckDiskRExists'),
    S = SKIN:GetMeasure('MeasureCheckDiskSExists'),
    T = SKIN:GetMeasure('MeasureCheckDiskTExists'),
    U = SKIN:GetMeasure('MeasureCheckDiskUExists'),
    V = SKIN:GetMeasure('MeasureCheckDiskVExists'),
    W = SKIN:GetMeasure('MeasureCheckDiskWExists'),
    X = SKIN:GetMeasure('MeasureCheckDiskXExists'),
    Y = SKIN:GetMeasure('MeasureCheckDiskYExists'),
    Z = SKIN:GetMeasure('MeasureCheckDiskZExists')
  }
end

function Update()
  local active,inactive = '',''
  local diskIndex = 0
  local isChanged = false

  hiddenDisks = SKIN:GetVariable('manualHideDisks')
  hideElements = SKIN:GetVariable('hideElements')

  alphabet:gsub('.', function(c)
    diskIndex = tonumber(SKIN:GetVariable('disk' .. c .. 'Index'))
    if measureCheckTable[c]:GetValue() > 0 and string.find(hiddenDisks, c) == nil then
      active = active .. c
      if diskIndex == 0 then
        isChanged = true
      end
    else
      inactive = inactive .. c
      if diskIndex > 0 then
        isChanged = true
      end
    end
  end)

  if isChanged then UpdateConnectedDisks(active, inactive) end
end

function UpdateConnectedDisks(active, inactive)
  RmLog('Disk state changed: ' .. active)
  local i,oobDisks = 0,''
  SetVariable('hideDisk0', 1)

  active:gsub('.', function(c)
    i = i + 1
    -- Set disk index value to the new letter
    SetVariable('d' .. ((i > numDisks) and 0 or i), c)
    -- Set disk hide variable
    SetVariable('hideDisk' .. ((i > numDisks) and 0 or i), '0')
    -- Set line graph disk index
    SetVariable('disk' .. c .. 'Index', (i > numDisks) and -1 or i)
    -- Add the disk to 'oobDisks' if it won't be shown in Disks Meter
    if i > numDisks then oobDisks = oobDisks .. c .. ': ' end
    -- Update measures and meters
    SKIN:Bang('!UpdateMeasureGroup', 'Disk' .. i)
    SKIN:Bang('!UpdateMeterGroup', 'Disk' .. i)
  end)

  inactive:gsub('.', function(c)
    SetVariable('disk' .. c .. 'Index', 0)
  end)

  for i=i+1,numDisks do
    -- Set disk index value to blank
    SetVariable('d' .. i, '')
    -- Set disk hide variable
    SetVariable('hideDisk' .. i, '1')
    -- Update measures and meters
    SKIN:Bang('!UpdateMeasureGroup', 'Disk' .. i)
    SKIN:Bang('!UpdateMeterGroup', 'Disk' .. i)
  end

  SetVariable('oobDisks', oobDisks)

  SKIN:Bang('!UpdateMeterGroup', 'Background')
end

function UpdateDiskElements(hideElements)
  alphabet:gsub('.', function(c)
    SetVariable('showDisk' .. c .. 'Element', (string.find(hideElements, c) and 0 or 1))
  end)
  SKIN:Bang('!UpdateMeterGroup', 'DiskElements')
  SKIN:Bang('!Redraw')
end

function SetVariable(key, value)
  SKIN:Bang('!SetVariable', key, value)
  SKIN:Bang('!WriteKeyValue', 'Variables', key, value, dynamicVarsPath)
end

function SetOption(section, key, value)
  SKIN:Bang('!SetOption', section, key, value)
end

-- function to make logging messages less cluttered
function RmLog(message, type)
  if type == nil then type = 'Debug' end
  if debug == true then
    SKIN:Bang('!Log', message, type)
  elseif type ~= 'Debug' then
    SKIN:Bang('!Log', message, type)
  end
end