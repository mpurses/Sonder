--debug = true
function Initialize()
	fileview = SKIN:GetMeasure('MeasureChild1')
	filecount = SKIN:GetMeasure('MeasureFileCount')
	fileviewvariables = SKIN:GetMeasure('MeasureChild1Var')
	filecountvariables = SKIN:GetMeasure('MeasureFileCountVariables')
end

q = 2
var = 2
presetFile = {}
VariableFile = {}

function gatherPresetFile()
	--print("gatherPresetFile running")
	local curFile = fileview:GetStringValue()
	if curFile ~= '' and curFile ~= '..' then
		table.insert(presetFile,curFile)
	end
	q = q+1

	if q <= (filecount:GetValue() + 1 + (justsaved and 1 or 0) + (justdeleted and -1 or 0)) then
		SKIN:Bang('[!SetOption MeasureChild1 Index '..q..'][!CommandMeasure MeasureFolder "Update"]')
	else
		MeterGenerator()
	end
end

function gatherVariableFiles()
	--print("gatherVariableFiles running")
	local curFileV = fileviewvariables:GetStringValue()
	if curFileV ~= '' and curFileV ~= '..' then
		table.insert(VariableFile,curFileV)
	end
	var = var+1

	if var <= (filecountvariables:GetValue() + 1 + (justsaved and 1 or 0) + (justdeleted and -1 or 0)) then
		SKIN:Bang('[!SetOption MeasureChild1Var Index '..var..'][!CommandMeasure MeasureVariableFolder "Update"]')
	else
		VariableGenerator()
	end
end

justsaved = false
justdeleted = false
setwallpaper = true
snapdone=false
r = 0
c = 0

function MeterGenerator()
	print("MeterGenerator running")
	--debug = true
	presetTable = {}
	local meterfile, err = io.open(SKIN:GetVariable('SETTINGSPATH')..'Presets\\ThemesPresetMeter.inc','w')
	if meterfile==nil then
		print('Failed to write to: '..err)
	else
		for k,filename in pairs(presetFile) do
			presetTable[filename] = {}
			for line in io.lines(SKIN:GetVariable('SETTINGSPATH')..'Presets\\Themes\\'..filename..'.inc') do
				local k,v = line:match('(.-)=(.-)$')
				presetTable[filename][k] = v
			end
			randomnum = math.random(0,100000000000)
			moddedFilename = filename:gsub(' ','')
			meterfile:write('['..moddedFilename..randomnum..'Snap]\n',
							'Meter=Image\n',
							'ImageName=#SETTINGSPATH#Presets\\Themes\\Snap\\'..filename..'.png\n',
							'MaskImageName=#@#Presets\\presetmask.png\n',
							'W=340\n',
							'X=('..(15+c*360)..'-#Scroll#)\nY='..(100+135*r)..'\n',
							'LeftMouseUpAction=[!WriteKeyValue Variables CurrentTheme "'..filename..'" "#@#Variables.inc"][!CommandMeasure MeasureRunCopyVariablesFile Run][!SetOption ApplyingPreset Text "Applying Preset..."][!ShowMeter ApplyingPreset][!Redraw][!SetVariable Name "'..filename..'"][!Update][!Delay 1000][!CommandMeasure Script "ApplyPreset(\''..filename..'\')"]\n',
							'DynamicVariables=1\n',
							'Group=Preset\n',
							'['..moddedFilename..randomnum..']\n',
							'Meter=String\n',
							'Text='..presetTable[filename]['Name']..'\n',
							'MeterStyle=PresetStyle\n',
							'X=('..(20+c*360)..'-#Scroll#)\nY='..(160+135*r)..'\n',
							'['..moddedFilename..randomnum..'Time]\n',
							'Meter=String\n',
							'Text='..presetTable[filename]['Time']..'\n',
							'MeterStyle=TimeStyle\nX=r\nY=R\n',
							'['..moddedFilename..randomnum..'Delete]\n',
							'Meter=String\n',
							'MeterStyle=DeleteStyle\nX=('..(350+c*360)..'-#Scroll#)\nY='..(200+135*r)..'\n',
							'LeftMouseUpAction=[!SetVariable Name "'..filename..'"][!Update][!Delay 1000][!CommandMeasure Script "DeletePreset(\''..filename..'\')"]\n')
			r = r + 1
			if r == 3 then
				r = 0 
				if k ~= #presetFile then c = c + 1 end
			end

		end
		meterfile:close()
		--SKIN:Bang('[!Redraw][!Update][!Log "Refreshed Presetmeter..."]')
	end
	if justdeleted then SKIN:Bang('[!Refresh][!Refresh "#rootconfig#\\Settings"]') end
	if justsaved then RefreshCondition() end
end

function VariableGenerator()
	--print("VariableGenerator running")
	--debug = true
	VariablepresetTable = {}
	for k,filename in pairs(VariableFile) do
		VariablepresetTable[filename] = {}
		for line in io.lines(SKIN:GetVariable('SETTINGSPATH')..'Presets\\Themes\\Variables\\'..filename..'.inc') do
			if not line:match('^%s-;') then
				if line:match('(.-)=(.-)[\r\n]') then
					local k,v = line:match('(.-)=(.-)[\r\n]')
					--print('Read Success rn: '..k..': '..v..'')
					if (string.match(v, '(#.*#)')) then
						v = string.gsub( v, '#(.*)#', '#*%1*#')
						--print('Matched: '..k..'='..v..'')
						--print('Detected r n line')
					end
					VariablepresetTable[filename][k] = v
				--This is incase it is manually written after the fact
				elseif line:match('(.-)=(.-)$') then
					local k,v = line:match('(.-)=(.-)$')
					--print('Read Success $: '..k..': '..v..'')
					if (string.match(v, '(#.*#)')) then
						v = string.gsub( v, '#(.*)#', '#*%1*#')
						--print('Matched: '..k..'='..v..'')
						--print('Detected $ line')
					end
					VariablepresetTable[filename][k] = v
				end
			end
		end
	end
	if justdeleted then SKIN:Bang('[!Refresh][!Refresh "#rootconfig#\\Settings"]') end
	if justsaved then RefreshCondition() end
end


illegalChar = {[',']='',['/']='',['\\']='',['*']='',['?']='',[':']='',['<']='',['>']='',['|']='',["'"]='',['"']=''}
legalizeIllegalChar = function (s)
						for k,v in pairs(illegalChar) do
							s = string.gsub(s,k,v)
						end return s end
stripWS = function(s)
			s = string.gsub(s,'^%s+','')
			s = string.gsub(s,'%s+$','')
			return s end

variableTable={}
variableTable['bar'] = {'Distance','Degree','VisualizerColor1','VisualizerColor2','Visualizer_Type','VisualizerBarWidth','VisualizerBarHeight','Anchor','GradientOrientation','Dot_Max_Size','Ellipse_W_Scale','Ellipse_H_Scale','DepthAmount_X','DepthAmount_Y'}				
variableTable['polygon'] = {'Distance','Degree','VisualizerColor1','VisualizerColor2','Visualizer_Type','WidthPoly','HeightPoly','Side','Density','Polygon_Type','RadialGradOrientation','Dot_Max_Size','Ellipse_W_Scale','Ellipse_H_Scale','DepthAmount_X','DepthAmount_Y'}
variableTable['wave'] = {'Distance','Degree','VisualizerColor1','VisualizerColor2','Visualizer_Type','GradientOrientation','RadialGradOrientation','Wave_Type','Peak','Wave_Density','Sub_Wave','HeightWave','Amplitude','Dot_Base_Size','Radius','Twist','Dot_Max_Size','Ellipse_W_Scale','Ellipse_H_Scale','DepthAmount_X','DepthAmount_Y'}
variableTable['stargazer'] = {'Distance','Degree','VisualizerColor1','VisualizerColor2','Visualizer_Type','GradientOrientation','Stargazer_type','Stargazer_Width','Stargazer_Height','Stargazer_Density','Stargazer_Direction','Stargazer_Speed','Wanderer_CenterX','Wanderer_CenterY','Wanderer_Limit1','Wanderer_Limit2','Wanderer_RotateLimit1','Wanderer_RotateLimit2','Wanderer_AsterismReader','Ash_FloatAmount','Stargazer_BounceFactor','Dot_Max_Size','Ellipse_W_Scale','Ellipse_H_Scale','DepthAmount_X','DepthAmount_Y'}

function SavePreset(name)
	print("SavePreset running")
	--debug = true
	--vistype = vistype:lower()
	name = stripWS(legalizeIllegalChar(name))
	if name == '' then
		name = 'Preset '..string.format('%x',os.time())
	end
	local file, err = io.open(SKIN:GetVariable('SETTINGSPATH')..'Presets\\Themes\\'..name..'.inc','w')
	local wall = ''
	local wallfitnum = ''
	local wallfittile = ''
	local wallfit = ''
	if setwallpaper then 
		--wall = SKIN:GetMeasure('WallpaperPath'):GetStringValue() 
		wall = '#SETTINGSPATH#Presets\\Themes\\Wallpapers\\'..name..'-Wallpaper.bmp'
		wallfitnum = SKIN:GetMeasure('WallpaperFit'):GetStringValue() 
		wallfittile = SKIN:GetMeasure('WallpaperTile'):GetStringValue() 
		if wallfitnum == '10' then 
		wallfit = 'Fill'
		elseif wallfitnum == '6' then
		wallfit = 'Fit'
		elseif wallfitnum == '2' then
		wallfit = 'Stretch'
		elseif wallfitnum == '0' and wallfittile == '1' then
		wallfit = 'Tile'
		elseif wallfitnum == '0' and wallfittile == '0' then
		wallfit = 'Center'
		elseif wallfitnum == '22' then
		wallfit = 'Span'
		end
	else 
		wall = 'none' 
		wallfit = 'none'
	end
	if file==nil then
		print('Failed to write to: '..err)
	else
		file:write('Name='..name..'\n','Time='..os.date('%Y %b %d %X')..'\n','Wallpaper='..wall..'\nWallpaperFit='..wallfit..'\n')
		file:close()
	end
	-------Convert to UTF8-------
	myMeasure = SKIN:GetMeasure('MeasureVariablesFileUTF8')
	fileUTF8 = myMeasure:GetStringValue()
	local UTF8file, err = io.open(SKIN:GetVariable('SETTINGSPATH')..'Presets\\Themes\\Variables\\'..name..'-Variables.inc','w')
	if UTF8file==nil then
		print('Failed to write to: '..err)
	else
		UTF8file:write(myMeasure:GetStringValue())
		UTF8file:close()
	end
	------Convert to UTF8------

	------------------ CANT DO THIS - UTF-16 -----------------------
	--REMOVE Settings (THEME PRESETS.ini) from newly saved preset folder 
	--[#ROOTCONFIG#\Settings]
	--Active=7    ---->   Active=0
	--local RemoveThemeFromLayout = io.open(SKIN:GetVariable('SETTINGSPATH')..'Layouts\\'..name..'\\Rainmeter.ini','r')
	--local strTP = RemoveThemeFromLayout:read('*all')
	--RemoveThemeFromLayout:close()

	--strTP = string.gsub( strTP, 'Active=7', 'Active=0' )

	--local RemoveThemeFromLayout = io.open(SKIN:GetVariable('SETTINGSPATH')..'Layouts\\'..name..'\\Rainmeter.ini','w')
	--RemoveThemeFromLayout:write(strTP)
	--RemoveThemeFromLayout:close()

	Snap(0,1,name)
	justsaved = true
	q,r,c = 2,0,0
	presetFile = {}
	SKIN:Bang('[!SetOption MeasureChild1 Index 2][!SetOption MeasureFolder Count "'..(filecount:GetValue()+2)..'"][!CommandMeasure MeasureFolder "Update"]')
	SKIN:Bang('[!SetOption MeasureChild1Var Index 2][!SetOption MeasureVariableFolder Count "'..(filecountvariables:GetValue()+2)..'"][!CommandMeasure MeasureVariableFolder "Update"]')
	SKIN:Bang('[!Delay 1000][!Refresh][!Delay 500][!Refresh]')
end

function ApplyPreset(filename)
	print("ApplyPreset running - Writing Variables, Setting Wallpaper, Applying Layout...")
	filenamevar = ''..filename..'-Variables'
	
	for k,v in pairs(VariablepresetTable[filenamevar]) do
		--Error here if k or v is nil
		--error(v,2)
		--Dont cahnge variables that 1) lua has trouble changing, 2) things that should stay the same (weather/location) and 3) Theme settings (just in case they don't match, but they should...)
		if k ~= 'BluetoothOpenSettings' and k ~= 'Turn_Off_Wifi' and k ~= 'Turn_On_Wifi' and k ~= 'ConnectActionCenter' and k ~= 'BluetoothDeviceWindow' and k~= 'DayTextSize' and k~= 'DayTextSizeHover' and k ~= 'AutoDetectCity' and k ~= 'Latitude' and k ~= 'Longitude' and k~= 'Daytime' and k~= 'SunsetTime' and k~= 'SunriseTime' and k ~= 'ToDoText' and k ~= 'ThemeChanger' and k ~= 'CurrentTheme' and k ~= 'ThemeLastChangedTime' and k ~= 'SunriseTheme' and k ~= 'SunsetTheme' and k ~= 'WorldMapCitySearch' and k~= 'WorldMapTimeZone1' and k~= 'WorldMapTimeZone2' and k~= 'WorldMapTimeZone3' and k~= 'WorldMapTimeZone4' and k~= 'WorldMapTimeZone5' and k~= 'WorldMapTimeZone6' and k~= 'WorldMapTimeZone7' and k~= 'WorldMapTimeZone8' and k~= 'WorldMapTimeZone9' and k~= 'WorldMapTimeZone10' and k~= 'WorldMapTimeZone11' and k~= 'WorldMapTimeZone12' and k~= 'WorldMapTimeZone13' and k~= 'WorldMapTimeZone14' and k~= 'WorldMapTimeZone15' and k~= 'FFTOverlap' and k~= 'RandomNumGenerated' and k~= 'RandomNumID' and k~= 'CurrentDayMeter' then
			SKIN:Bang('!WriteKeyValue Variables '..k..' "'..v..'" "#@#Variables.inc"')
			--print('Write: '..k..'='..v..'')
		end
	end
	--for k,v in pairs(presetTable[filename]) do
	--	if k ~= 'Name' and k ~= 'Time' and k ~= 'Wallpaper' and k ~= 'WallpaperFit' then
	--		Print("Writing variable in preset wallpaper file....")
	--		SKIN:Bang('!WriteKeyValue Variables '..k..' '..v..' "#@#Variables.inc"')
	--		SKIN:Bang('!SetVariable '..k..' '..v..' #rootconfig#\\Settings')
	--	end
	--end

-- Need to apply visualizer correctly....
	SKIN:Bang('[!ActivateConfig "#ROOTCONFIG#\\Visualizer" "Dots-Visualizer.ini"]')
	local vis_type = string.lower(VariablepresetTable[filenamevar]['Visualizer_Type'])
	if vis_type == 'bar' then
		SKIN:Bang('[!CommandMeasure Script "MeasureGeneratorBar(#VisualizerBarWidth#,#Preview#)" "#rootconfig#\\Visualizer"]'
				..'[!WriteKeyValue Script ScriptFile "#*@*#Visualizer\\DotGenerator.lua" "#ROOTCONFIGPATH#Visualizer\\Dots-Visualizer.ini"]'
				..'[!WriteKeyValue Rainmeter SkinWidth 0 "#ROOTCONFIGPATH#Visualizer\\Dots-Visualizer.ini"][!WriteKeyValue Rainmeter SkinHeight 0 "#ROOTCONFIGPATH#Visualizer\\Dots-Visualizer.ini"]')
	elseif vis_type == 'wave' then
		SKIN:Bang('[!CommandMeasure Script "MeasureGeneratorWave(#peak#,#Preview#,\'#wave_type#\')" "#rootconfig#\\Visualizer"]'
				..'[!WriteKeyValue Script ScriptFile "#*@*#Visualizer\\DotGenerator_Wave_#*wave_type*#.lua" "#ROOTCONFIGPATH#Visualizer\\Dots-Visualizer.ini"]'
				..'[!WriteKeyValue Rainmeter SkinWidth 0 "#ROOTCONFIGPATH#Visualizer\\Dots-Visualizer.ini"][!WriteKeyValue Rainmeter SkinHeight 0 "#ROOTCONFIGPATH#Visualizer\\Dots-Visualizer.ini"]')
	elseif vis_type == 'polygon' then
		SKIN:Bang('[!CommandMeasure Script "MeasureGeneratorPoly(#WidthPoly#,#Preview#,#HeightPoly#)" "#rootconfig#\\Visualizer"]'
				..'[!WriteKeyValue Script ScriptFile "#*@*#Visualizer\\DotGenerator_Polygon.lua" "#ROOTCONFIGPATH#Visualizer\\Dots-Visualizer.ini"]'
				..'[!WriteKeyValue Rainmeter SkinWidth 0 "#ROOTCONFIGPATH#Visualizer\\Dots-Visualizer.ini"][!WriteKeyValue Rainmeter SkinHeight 0 "#ROOTCONFIGPATH#Visualizer\\Dots-Visualizer.ini"]')
	elseif vis_type == 'stargazer' then
		SKIN:Bang('[!CommandMeasure Script "MeasureGeneratorStargazer(math.floor(#Stargazer_Width#/(200-#Stargazer_Density#)),#Preview#)" "#rootconfig#\\Visualizer"]'
				..'[!WriteKeyValue Script ScriptFile "#*@*#Visualizer\\DotGenerator_Stargazer_#*stargazer_type*#.lua" "#ROOTCONFIGPATH#Visualizer\\Dots-Visualizer.ini"]'
				..'[!WriteKeyValue Rainmeter SkinWidth #*Stargazer_Width*# "#ROOTCONFIGPATH#Visualizer\\Dots-Visualizer.ini"][!WriteKeyValue Rainmeter SkinHeight #*Stargazer_Height*# "#ROOTCONFIGPATH#Visualizer\\Dots-Visualizer.ini"]')
	elseif vis_type == 'line' then
		SKIN:Bang('[!CommandMeasure Script "MeasureGeneratorLine(#LineBands#,#Preview#)" "#rootconfig#\\Visualizer"]'
				..'[!WriteKeyValue Script ScriptFile "#*@*#Visualizer\\DotGenerator_Line.lua" "#ROOTCONFIGPATH#Visualizer\\Dots-Visualizer.ini"]'
				..'[!WriteKeyValue Rainmeter SkinWidth 0 "#ROOTCONFIGPATH#Visualizer\\Dots-Visualizer.ini"][!WriteKeyValue Rainmeter SkinHeight 0 "#ROOTCONFIGPATH#Visualizer\\Dots-Visualizer.ini"]')	
	end
	SKIN:Bang('[!DeactivateConfig "#ROOTCONFIG#\\Visualizer" "Dots-Visualizer.ini"]')
	local wall = presetTable[filename]['Wallpaper']
	local wallfit = presetTable[filename]['WallpaperFit']
	if wall ~= 'none' and wallfit ~= 'none' then 
		SKIN:Bang('!SetWallpaper "'..wall..'" "'..wallfit..'"') 
		print("Wallpaper Set")
	end
	--DONT COPY THIS....
	--SKIN:Bang('[!CommandMeasure MeasureRunApplyVariablesFile Run][!Redraw]')
	--WRITE CURRENT THEME(only after it gets through all this code, incase it fails somewhere) AND THEN LOAD THE LAYOUT
	SKIN:Bang('[!WriteKeyValue Variables CurrentTheme "'..filename..'" "#@#Variables.inc"]')
	SKIN:Bang('[!HideMeter ApplyingPreset][!Redraw]')
	SKIN:Bang('[!Delay 250][!LoadLayout "'..filename..'"]')
	-- AS SOON AS NEW LAYOUT IS APPLIED, NO CODE WILL WORK BELOW THIS BECAUSE OF UNLOAD/REFRESH OF RAINMETER --
end

function DeletePreset(filename)
	print("DeletePreset running")
	os.remove(SKIN:GetVariable('SETTINGSPATH')..'Presets\\Themes\\'..filename..'.inc')
	os.remove(SKIN:GetVariable('SETTINGSPATH')..'Presets\\Themes\\Snap\\'..filename..'.png')
	os.remove(SKIN:GetVariable('SETTINGSPATH')..'Layouts\\'..filename..'\\Rainmeter.ini')
	os.remove(SKIN:GetVariable('SETTINGSPATH')..'Presets\\Themes\\Variables\\'..filename..'-Variables.inc')
	os.remove(SKIN:GetVariable('SETTINGSPATH')..'Presets\\Themes\\Wallpapers\\'..filename..'-Wallpaper.bmp')
	justdeleted = true
	q,var,r,c = 2,2,0,0
	presetFile = {}
	VariableFile = {}
	SKIN:Bang('[!Delay 100][!CommandMeasure MeasureRunRemoveLayoutFolder Run]')
	SKIN:Bang('[!Delay 250][!SetOption MeasureChild1 Index 2][!SetOption MeasureFolder Count "'..filecount:GetValue()..'"][!CommandMeasure MeasureFolder "Update"]')
	SKIN:Bang('[!Delay 250][!SetOption MeasureChild1Var Index 2][!SetOption MeasureVariableFolder Count "'..filecountvariables:GetValue()..'"][!CommandMeasure MeasureVariableFolder "Update"]')
	SKIN:Bang('[!Delay 1000][!Refresh][!Delay 250][!Refresh]')
end

timing3,oldpos,scrollDir=0,0,0

function Update()
	if timing3 > 0 and timing3 < 10 then
		if (oldpos + timing3/10*100*scrollDir) >= (c+1)*350-640 then
			SKIN:Bang('!SetVariable Scroll '..(c+1)*350-640)
			timing3 = 11
		elseif (oldpos + timing3/10*100*scrollDir) <= 0 then
			SKIN:Bang('!SetVariable Scroll 0')
			oldpos = 0
			timing3 = 11
		else
			timing3 = timing3 + 1
			SKIN:Bang('!SetVariable Scroll '..oldpos + timing3/10*100*scrollDir)
		end
	elseif timing3 == 10 then
		timing3=11
	end
	--if setwallpaper then SKIN:Bang('!SetOption SetWallpaper Text "▣ Include wallpaper"')
	--else SKIN:Bang('!SetOption SetWallpaper Text "▢ Include wallpaper"') end
end

--I dont think this works because the Rainmeter.ini file is in UTF-16
function GetVisPos()
	--print("GetVisPos running")
	--debug=true
	file=io.open(SKIN:ReplaceVariables('#SETTINGSPATH#Rainmeter.ini'),'r')
	content=file:read("*a")
	file:close()
	for skinname,active,visX,visY in content:gmatch('%[(.-)%]\nActive=(.-)\nWindowX=(%d+)\nWindowY=(%d+)') do
			print(visX)
			print(visY)
			print(active)
			--Sonder, Dots-Visualizer, or Visualizer?
		if skinname == 'Sonder' then
			active = tonumber(active)
			return visX,visY,active
		end
	end
end

function Snap(visY,active,presetname)
	--print("Snap running")
	--debug=true
	local screenW = tonumber(SKIN:GetVariable('WORKAREAWIDTH'))
	local screenH = tonumber(SKIN:GetVariable('WORKAREAHEIGHT'))
	if active == 1 then
		if (screenH-visY-screenW*125/340) > screenW*125/340 then visY = math.ceil(screenH-screenW*125/340) end
		--SKIN:Bang('[!SetOption Snipping Program """\"#@#Presets\\BoxCutter\\boxcutter.exe\" -c 0,'..visY..','..screenW..','..math.ceil(visY+screenW*125/340)..' \"Preset\\Snap\\'..presetname..'.png\""""]')
		SKIN:Bang('["#@#Presets\\BoxCutter\\boxcutter.exe" -c 0,0,'..screenW..','..math.ceil(screenW*125/340)..' "#SETTINGSPATH#Presets\\Themes\\Snap\\'..presetname..'.png"]')
	else
		-- SKIN:Bang('[!SetOption Snipping Program """\"#@#Presets\\BoxCutter\\boxcutter.exe\" -c 0,0,'..screenW..','..math.ceil(screenW*125/340)..' \"Preset\\Snap\\'..presetname..'.png\""""]') 
		SKIN:Bang('["#@#Presets\\BoxCutter\\boxcutter.exe" -c 0,0,'..screenW..','..math.ceil(screenW*125/340)..' "#SETTINGSPATH#Presets\\Themes\\Snap\\'..presetname..'.png"]')
	end
	SKIN:Bang('[!SetTransparency 0][!UpdateMeasure Snipping][!CommandMeasure Snipping Run]')
end

function RefreshCondition()
	--print("RefreshCondition running")
	if justsaved and snapdone then
		SKIN:Bang('!Refresh')
	end
end