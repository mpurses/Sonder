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
						'BandIdx='..i..'\n')
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
						'BandIdx='..i..'\n')
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
						'BandIdx='..i..'\n')
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
						'BandIdx='..i..'\n')
		else
			file:write('[MeasureAudio'..i..']\n',
						'Measure=Calc\n',
						'Formula='..math.random()..'\n')
		end
	end
	file:close()
end