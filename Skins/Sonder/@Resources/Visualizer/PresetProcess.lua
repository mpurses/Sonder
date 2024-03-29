--debug = true
function Initialize()
	fileview = SKIN:GetMeasure('MeasureChild1')
	filecount = SKIN:GetMeasure('MeasureFileCount')
end

q = 2
presetFile = {}

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
justsaved = false
justdeleted = false
setwallpaper = false
snapdone=false
r = 0
c = 0

function MeterGenerator()
	print("MeterGenerator running")
	--debug = true
	presetTable = {}
	local meterfile, err = io.open(SKIN:GetVariable('SETTINGSPATH')..'Presets\\VisualizersPresetMeter.inc','w')
	if meterfile==nil then
		print('Failed to write to: '..err)
	else
		for k,filename in pairs(presetFile) do
			presetTable[filename] = {}
			for line in io.lines(SKIN:GetVariable('SETTINGSPATH')..'Presets\\Visualizers\\'..filename..'.inc') do
				local k,v = line:match('(.-)=(.-)$')
				if string.match(v, '(#.*#)') and k ~= 'Wallpaper' then
					v = string.gsub( v, '#(.*)#', '#*%1*#')
					--print('Matched: '..v..'')
				end
				presetTable[filename][k] = v
			end
			randomnum = math.random(0,100000000000)
			moddedFilename = filename:gsub(' ','')
			meterfile:write('['..moddedFilename..randomnum..'Snap]\n',
							'Meter=Image\n',
							'ImageName=#SETTINGSPATH#Presets\\Visualizers\\Snap\\'..filename..'.png\n',
							'MaskImageName=#@#Visualizer\\presetmask.png\n',
							'W=340\n',
							'X=('..(15+c*360)..'-#Scroll#)\nY='..(80+135*r)..'\n',
							'LeftMouseUpAction=[!CommandMeasure Script "ApplyPreset(\''..filename..'\')"]\n',
							'DynamicVariables=1\n',
							'Group=Preset\n',
							'['..moddedFilename..randomnum..']\n',
							'Meter=String\n',
							'Text='..presetTable[filename]['Name']..'\n',
							'MeterStyle=PresetStyle\n',
							'X=('..(20+c*360)..'-#Scroll#)\nY='..(140+135*r)..'\n',
							'['..moddedFilename..randomnum..'Time]\n',
							'Meter=String\n',
							'Text='..presetTable[filename]['Time']..'\n',
							'MeterStyle=TimeStyle\nX=r\nY=R\n',
							'['..moddedFilename..randomnum..'Delete]\n',
							'Meter=String\n',
							'MeterStyle=DeleteStyle\nX=('..(350+c*360)..'-#Scroll#)\nY='..(180+135*r)..'\n',
							'LeftMouseUpAction=[!CommandMeasure Script "DeletePreset(\''..filename..'\')"]\n')
			r = r + 1
			if r == 3 then
				r = 0 
				if k ~= #presetFile then c = c + 1 end
			end

		end
		meterfile:close()
	end
	if justdeleted then SKIN:Bang('[!Refresh][!Refresh "#rootconfig#\\Visualizer"]') end
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
variableTable['line'] = {'VisualizerColor1','VisualizerColor2','Visualizer_Type','LineBands','LineThickness','LineWidth','LineHeight','LineReactionAverage'}	

function SavePreset(vistype,name)
	print("SavePreset running")
--debug = true
	vistype = vistype:lower()
	name = stripWS(legalizeIllegalChar(name))
	if name == '' then
		name = 'Preset '..string.format('%x',os.time())
	end
	local file, err = io.open(SKIN:GetVariable('SETTINGSPATH')..'Presets\\Visualizers\\'..name..'.inc','w')
	local wall = ''
	local wallfitnum = ''
	local wallfittile = ''
	local wallfit = ''
	if setwallpaper then 
		wall = SKIN:GetMeasure('WallpaperPath'):GetStringValue() 
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
	visXpos,visYpos,visActive = GetVisPos()
 -- file:write('Name='..name..'\n','Time='..os.date('%Y %b %d %X')..'\n','Wallpaper='..wall..'\nX='..visXpos..'\nY='..visYpos..'\n')
	-- Errors with getting position so just setting to 0,0
	if file==nil then
		print('Failed to write to: '..err)
	else
		file:write('Name='..name..'\n','Time='..os.date('%Y %b %d %X')..'\n','Wallpaper='..wall..'\nWallpaperFit='..wallfit..'\nX='..'0'..'\nY='..'0'..'\n')
		for _,varname in pairs(variableTable[vistype]) do
			file:write(varname..'='..SKIN:GetVariable(varname)..'\n')
		end
		file:close()
	end
	-- Snap(visYpos,visActive,name)
	Snap(0,1,name)
	justsaved = true
	q,r,c = 2,0,0
	presetFile = {}
	SKIN:Bang('[!SetOption MeasureChild1 Index 2][!SetOption MeasureFolder Count "'..(filecount:GetValue()+2)..'"][!CommandMeasure MeasureFolder "Update"]')
	SKIN:Bang('[!Delay 1000][!Refresh][!Delay 500][!Refresh]')
end

function ApplyPreset(filename)
	print("ApplyPreset running")
	SKIN:Bang('[!ShowMeter ApplyingPreset][!Redraw]')
	SKIN:Bang('[!ActivateConfig "#ROOTCONFIG#\\Visualizer" "Dots-Visualizer.ini"]')
	for k,v in pairs(presetTable[filename]) do
		if k ~= 'Name' and k ~= 'Time' and k ~= 'Wallpaper' and k ~= 'WallpaperFit' and k ~= 'X' and k ~= 'Y' then
			SKIN:Bang('!WriteKeyValue Variables '..k..' '..v..' "#@#Variables.inc"')
			SKIN:Bang('!SetVariable '..k..' '..v..' #rootconfig#\\Visualizer')
		end
	end
	local vis_type = string.lower(presetTable[filename]['Visualizer_Type'])
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
	local wall = presetTable[filename]['Wallpaper']
	local wallfit = presetTable[filename]['WallpaperFit']
	if wall ~= 'none' and wallfit ~= 'none' then SKIN:Bang('!SetWallpaper "'..wall..'" "'..wallfit..'"') end
	SKIN:Bang('[!Move "'..presetTable[filename]['X']..'" "'..presetTable[filename]['Y']..'" #rootconfig#\\Visualizer][!Refresh #rootconfig#\\Visualizer]')
	SKIN:Bang('[!HideMeter ApplyingPreset][!Redraw]')
end

function DeletePreset(filename)
	print("DeletePreset running")
	os.remove(SKIN:GetVariable('SETTINGSPATH')..'Presets\\Visualizers\\'..filename..'.inc')
	os.remove(SKIN:GetVariable('SETTINGSPATH')..'Presets\\Visualizers\\Snap\\'..filename..'.png')
	justdeleted = true
	q,r,c = 2,0,0
	presetFile = {}
	SKIN:Bang('[!SetOption MeasureChild1 Index 2][!SetOption MeasureFolder Count "'..filecount:GetValue()..'"][!CommandMeasure MeasureFolder "Update"]')
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
	if setwallpaper then SKIN:Bang('!SetOption SetWallpaper Text "▣ Include wallpaper"')
	else SKIN:Bang('!SetOption SetWallpaper Text "▢ Include wallpaper"') end
end

function GetVisPos()
	print("GetVisPos running")
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
	print("Snap running")
	--debug=true
	local screenW = tonumber(SKIN:GetVariable('WORKAREAWIDTH'))
	local screenH = tonumber(SKIN:GetVariable('WORKAREAHEIGHT'))
	if active == 1 then
		if (screenH-visY-screenW*125/340) > screenW*125/340 then visY = math.ceil(screenH-screenW*125/340) end
		--SKIN:Bang('[!SetOption Snipping Program """\"#@#Presets\\BoxCutter\\boxcutter.exe\" -c 0,'..visY..','..screenW..','..math.ceil(visY+screenW*125/340)..' \"Preset\\Snap\\'..presetname..'.png\""""]')
		SKIN:Bang('["#@#Presets\\BoxCutter\\boxcutter.exe" -c 0,0,'..screenW..','..math.ceil(screenW*125/340)..' "#SETTINGSPATH#Presets\\Visualizers\\Snap\\'..presetname..'.png"]')
	else
		-- SKIN:Bang('[!SetOption Snipping Program """\"#@#Presets\\BoxCutter\\boxcutter.exe\" -c 0,0,'..screenW..','..math.ceil(screenW*125/340)..' \"Preset\\Snap\\'..presetname..'.png\""""]') 
		SKIN:Bang('["#@#Presets\\BoxCutter\\boxcutter.exe" -c 0,0,'..screenW..','..math.ceil(screenW*125/340)..' "#SETTINGSPATH#Presets\\Visualizers\\Snap\\'..presetname..'.png"]')
	end
	SKIN:Bang('[!SetTransparency 0][!UpdateMeasure Snipping][!CommandMeasure Snipping Run]')
end


function RefreshCondition()
	print("RefreshCondition running")
	if justsaved and snapdone then
		SKIN:Bang('[!Refresh][!Delay 500][!Refresh]]')
	end
end