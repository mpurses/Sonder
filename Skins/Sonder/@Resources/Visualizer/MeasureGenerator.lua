function MeasureGeneratorStargazer(band,preview)
	SKIN:Bang('!WriteKeyValue Audio Bands '..band+1)
	local file = io.open(SKIN:GetVariable('@')..'Visualizer\\MeasureAudio.inc','w')
	for i = 1,band do
		if preview == 0 then
			file:write('[MeasureAudio'..i..']\n',
						'Measure=Plugin\n',
						'Group=Audio\n',
						'Plugin=AudioLevel\n',
						'Parent=Audio\n',
						'Type=Band\n',
						'Channel=Avg\n',
						'BandIdx='..i..'\n',
						'UpdateDivider=#UpdateSpeed#\n',
						'DynamicVariables=1\n')
		else
			file:write('[MeasureAudio'..i..']\n',
						'Measure=Calc\n',
						'Formula='..math.random()..'\n')
		end
	end
	file:close()
end

function MeasureGeneratorWave(band,preview,wavetype)
	if string.lower(wavetype) ~= 'radical' then
		band = band*2
	end
	SKIN:Bang('!WriteKeyValue Audio Bands '..band+1)
	local file = io.open(SKIN:GetVariable('@')..'Visualizer\\MeasureAudio.inc','w')
	math.randomseed( os.time() )
	for i = 1,band do
		if preview == 0 then
			file:write('[MeasureAudio'..i..']\n',
						'Measure=Plugin\n',
						'Group=Audio\n',
						'Plugin=AudioLevel\n',
						'Parent=Audio\n',
						'Type=Band\n',
						'Channel=Avg\n',
						'BandIdx='..i..'\n',
						'UpdateDivider=#UpdateSpeed#\n',
						'DynamicVariables=1\n')
		else
			file:write('[MeasureAudio'..i..']\n',
						'Measure=Calc\n',
						'Formula='..math.random()..'\n')
		end
	end
	file:close()
end

function MeasureGeneratorPoly(w,preview,h)
	h = h or w
	if h > w then band = h else band = w end
	SKIN:Bang('!WriteKeyValue Audio Bands '..band+1)
	local file = io.open(SKIN:GetVariable('@')..'Visualizer\\MeasureAudio.inc','w')
	math.randomseed(1234)
	for i = 1,band do
		if preview == 0 then
			file:write('[MeasureAudio'..i..']\n',
						'Measure=Plugin\n',
						'Group=Audio\n',
						'Plugin=AudioLevel\n',
						'Parent=Audio\n',
						'Type=Band\n',
						'Channel=Avg\n',
						'BandIdx='..i..'\n',
						'UpdateDivider=#UpdateSpeed#\n',
						'DynamicVariables=1\n')
		else
			file:write('[MeasureAudio'..i..']\n',
						'Measure=Calc\n',
						'Formula='..math.random()..'\n')
		end
	end
	file:close()
end

function MeasureGeneratorBar(band,preview)
	SKIN:Bang('!WriteKeyValue Audio Bands '..band+1)
	local file = io.open(SKIN:GetVariable('@')..'Visualizer\\MeasureAudio.inc','w')
	math.randomseed(1234)
	for i = 1,band do
		if preview == 0 then
			file:write('[MeasureAudio'..i..']\n',
						'Measure=Plugin\n',
						'Group=Audio\n',
						'Plugin=AudioLevel\n',
						'Parent=Audio\n',
						'Type=Band\n',
						'Channel=Avg\n',
						'BandIdx='..i..'\n',
						'UpdateDivider=#UpdateSpeed#\n',
						'DynamicVariables=1\n')
		else
			file:write('[MeasureAudio'..i..']\n',
						'Measure=Calc\n',
						'Formula='..math.random()..'\n')
		end
	end
	file:close()
end

function MeasureGeneratorLine(band,preview)
	SKIN:Bang('!WriteKeyValue Audio Bands '..band+1)
	local file = io.open(SKIN:GetVariable('@')..'Visualizer\\MeasureAudio.inc','w')
	math.randomseed(1234)
	
	for i = 0,band do
		if preview == 0 then
			file:write('[MeasureAudio'..i..']\n',
						'Measure=Plugin\n',
						'Group=Audio\n',
						'Plugin=AudioLevel\n',
						'Parent=Audio\n',
						'Type=Band\n',
						'Channel=Sum\n',
						'BandIdx='..i..'\n',
						'AverageSize=#LineReactionAverage#\n',
						'UpdateDivider=#UpdateSpeed#\n',
						'DynamicVariables=1\n')
		else
			file:write('[MeasureAudio'..i..']\n',
						'Measure=Calc\n',
						'Formula='..math.random()..'\n')
		end
	end

	file:write('[MeterGradientBar]\n',
				'Meter=Shape\n',
				'X=5\n',
				'Y=(#LineHeight#/2)\n',
				'Shape=Path MyPath | StrokeWidth #LineThickness# | Stroke LinearGradient StrokeGradient\n',
				'Shape2=Path MyPath | StrokeWidth #LineThickness# | Stroke LinearGradient StrokeGradient\n',
				'StrokeGradient=#GradientOrientation# | #VisualizerColor1# ; 0.25 | #VisualizerColor2# ; 0.85\n',
				'DynamicVariables=1\n',
				'AntiAlias=1\n',
				'UpdateDivider=#UpdateSpeed#\n',
				'MyPath=0,0 | CurveTo #LineWidth#,0,(#LineWidth#/2),(#LineHeight#*[MeasureAudio1]),0')
	dir = -1
	for i = 2,band do
		file:write(' | CurveTo (#LineWidth#*'..i..'),0,((#LineWidth#*'..i..')-(#LineWidth#/2)),('..dir..'*#LineHeight#*[MeasureAudio'..i..']),0')
		dir=(dir*-1)
	end
	file:close()
end