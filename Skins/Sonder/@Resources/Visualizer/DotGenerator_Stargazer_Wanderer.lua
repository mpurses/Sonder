floor = math.floor
ceil  = math.ceil
sin = math.sin
cos = math.cos
pi = math.pi
tau = 2*pi

function Initialize()
	dofile(SKIN:GetVariable('@')..'Visualizer\\MeasureGenerator.lua')
	den = 200-tonumber(SKIN:GetVariable('Stargazer_Density'))
	if den == 0 then den = 1 end
	s = tonumber(SKIN:GetVariable('Stargazer_Speed'))
	dir = tonumber(SKIN:GetVariable('Stargazer_Direction'))

	w = tonumber(SKIN:GetVariable('Stargazer_Width'))
	h = tonumber(SKIN:GetVariable('Stargazer_Height'))
	m = math.floor(w/den)
	n = math.floor(h/den)
	MeasureGeneratorStargazer(m,tonumber(SKIN:GetVariable('Preview')))
	centerX = tonumber(SKIN:GetVariable('Wanderer_CenterX'))
	centerY = tonumber(SKIN:GetVariable('Wanderer_CenterY'))

	dotSize  = tonumber(SKIN:GetVariable('Dot_Max_Size'))
	W_Amount = tonumber(SKIN:GetVariable('Ellipse_W_Scale'))
	H_Amount = tonumber(SKIN:GetVariable('Ellipse_H_Scale'))

	if SKIN:GetVariable('Wanderer_AsterismReader') == '1' then
		AsterismReader = true
	else AsterismReader = false end

	gradOrient = tonumber(SKIN:GetVariable('GradientOrientation'))
	if gradOrient == 0 then
		VisualizerColor1,VisualizerColor2 = SKIN:GetVariable('VisualizerColor2'),SKIN:GetVariable('VisualizerColor1')
		gradOrient = 0
	elseif gradOrient == 90 then
		VisualizerColor1,VisualizerColor2 = SKIN:GetVariable('VisualizerColor2'),SKIN:GetVariable('VisualizerColor1')
		gradOrient = 1
	elseif gradOrient == 180 then
		VisualizerColor1,VisualizerColor2 = SKIN:GetVariable('VisualizerColor1'),SKIN:GetVariable('VisualizerColor2')
		gradOrient = 0
	else
		VisualizerColor1,VisualizerColor2 = SKIN:GetVariable('VisualizerColor1'),SKIN:GetVariable('VisualizerColor2')
		gradOrient = 1	
	end
	grad1 = {separateRGB(VisualizerColor1)}
	grad2 = {separateRGB(VisualizerColor2)}

	rL1 = math.rad(tonumber(SKIN:GetVariable('Wanderer_RotateLimit1')))
	rL2 = math.rad(tonumber(SKIN:GetVariable('Wanderer_RotateLimit2')))
	sL1 = tonumber(SKIN:GetVariable('Wanderer_Limit1'))
	sL2 = tonumber(SKIN:GetVariable('Wanderer_Limit2'))
	star = {}
	for i = 1, n do
		star[i] = {}
		for j = 1, m do
			star[i][j] ={x  = math.random(sL1,sL2), 
						phi = math.random()*(rL2-rL1)+rL1,
						color = (grad1[1]+(grad2[1]-grad1[1])*(i/n*gradOrient + j/m*(1-gradOrient)))..','..(grad1[2]+(grad2[2]-grad1[2])*(i/n*gradOrient + j/m*(1-gradOrient)))..','..(grad1[3]+(grad2[3]-grad1[3])*(i/n*gradOrient + j/m*(1-gradOrient)))}
		end
	end
	audioMeasure = {}
	for i = 1,m do
		audioMeasure[i] = SKIN:GetMeasure('MeasureAudio'..i)
	end
	readerZone = math.abs(sL2-sL1)/SKIN:GetVariable('Stargazer_Width')*100 + 20
end

init = true
function Update()
	if AsterismReader then
		mouseX = tonumber(SKIN:GetVariable('MouseX'))
		mouseY = tonumber(SKIN:GetVariable('MouseY'))
	end
	if not init then clearMod() else init = false end
	shapeCount = 2
	for i = 1, m do
		local audio = audioMeasure[i]:GetValue()
		drawUniverse(i, audio)
	end
end

speedLimiter = math.rad(0.25)
xPosOld=0
yPosOld =0

function drawUniverse(anchorX,scale)
	for i = 1, n do
		if scale == 0 then break end
		star[i][anchorX].phi = star[i][anchorX].phi +  speedLimiter * (anchorX/m/2+0.5) * s * audioMeasure[1]:GetValue()
		local xPos = centerX + star[i][anchorX].x * cos(dir * star[i][anchorX].phi)
		local yPos = centerY - star[i][anchorX].x * sin(dir * star[i][anchorX].phi)
		SKIN:Bang('!SetOption Shape Shape'..shapeCount..' "Ellipse '..xPos..','
				..yPos..','..(scale*dotSize*W_Amount)..','
				..(scale*dotSize*H_Amount)..' |StrokeWidth 0 | Fill Color '..star[i][anchorX].color..'"')
		shapeCount = shapeCount + 1
		if star[i][anchorX].phi > rL2 then
			star[i][anchorX].x  = math.random(sL1,sL2) 
			star[i][anchorX].phi = rL1
		end
		if AsterismReader then
			if mouseX-readerZone <= xPos and mouseX+readerZone >= xPos and mouseY-readerZone <= yPos and mouseY+readerZone >= yPos then
				SKIN:Bang('!SetOption Shape Shape'..shapeCount..' "Line '..xPosOld..','..yPosOld..','..xPos..','..yPos..'|Extend AsterismReaderColor"')
				shapeCount = shapeCount + 1
				xPosOld = xPos
				yPosOld = yPos
			end
		end	
	end
end

function separateRGB(color)
	local rgb = {}
	if color:match(',') then
		for piece in color:gmatch('%d+') do
			table.insert(rgb,tonumber(piece))
		end
	else
		color = color .. 'ffffff'
		for piece in color:gmatch('..') do
			table.insert(rgb,tonumber(piece,16))
		end
	end
	return rgb[1],rgb[2],rgb[3]
end

function clearMod()
	for i=2,shapeCount do
		SKIN:Bang('!SetOption Shape Shape'..i..' "Ellipse 0,0,0,0"')
	end
end