floor = math.floor
ceil  = math.ceil

function Initialize()
	dofile(SKIN:GetVariable('@')..'Visualizer\\MeasureGenerator.lua')
	den = 200-tonumber(SKIN:GetVariable('Stargazer_Density'))
	if den == 0 then den = 1 end
	s = tonumber(SKIN:GetVariable('Stargazer_Speed'))
	dir = tonumber(SKIN:GetVariable('Stargazer_Direction'))
	FloatAmount = tonumber(SKIN:GetVariable('Ash_FloatAmount'))
	BounceFactor = tonumber(SKIN:GetVariable('Stargazer_BounceFactor'))
	w = tonumber(SKIN:GetVariable('Stargazer_Width'))
	h = tonumber(SKIN:GetVariable('Stargazer_Height'))
	m = math.floor(w/den)
	n = math.floor(h/den)
	MeasureGeneratorStargazer(m,tonumber(SKIN:GetVariable('Preview')))

	start = dir == 1 and 0 or w

	dotSize  = tonumber(SKIN:GetVariable('Dot_Max_Size'))
	W_Amount = tonumber(SKIN:GetVariable('Ellipse_W_Scale'))
	H_Amount = tonumber(SKIN:GetVariable('Ellipse_H_Scale'))

	DepthAmountX = tonumber(SKIN:GetVariable('DepthAmount_X'))
	DepthAmountY = tonumber(SKIN:GetVariable('DepthAmount_Y'))

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

	dot = {}
	for i = 1, n do
		dot[i] = {}
		for j = 1, m do
			dot[i][j] ={x = math.random(0,w),
						y = math.random(0,h), 
						color = (grad1[1]+(grad2[1]-grad1[1])*(i/n*gradOrient + j/m*(1-gradOrient)))..','..(grad1[2]+(grad2[2]-grad1[2])*(i/n*gradOrient + j/m*(1-gradOrient)))..','..(grad1[3]+(grad2[3]-grad1[3])*(i/n*gradOrient + j/m*(1-gradOrient)))}
		end
	end
	audioMeasure = {}
	for i = 1,m do
		audioMeasure[i] = SKIN:GetMeasure('MeasureAudio'..i)
	end
end

init = true
function Update()
	if not init then clearMod() else init = false end
	shapeCount = 2
	for i = 1, m do
		local audio = audioMeasure[i]:GetValue()
		drawAsh(i, dotSize*audio)
	end
end
speedScaler = 5
function drawAsh(anchorY,scale)
	for i = 1, n do
		dot[i][anchorY].y = dot[i][anchorY].y + 1*s*speedScaler*anchorY/n*audioMeasure[1]:GetValue() + 1*0.2
		-- Shape=Ellipse 0,0,#Dot_Max_Size# | StrokeWidth 0 | Scale #Ellipse_W_Scale#,#Ellipse_H_Scale# | Fill LinearGradient MyFillGradient
		SKIN:Bang('!SetOption Shape Shape'..shapeCount..' "Ellipse '..(dot[i][anchorY].x+outSine(dot[i][anchorY].y,0,-FloatAmount,h,anchorY))..','
				..(dot[i][anchorY].y+outSine(dot[i][anchorY].y,0,-BounceFactor,h,anchorY))..','
				..(scale * anchorY/n * W_Amount)..','..(scale * anchorY/n * H_Amount)..' |StrokeWidth 0 | Fill Color '..dot[i][anchorY].color..'"')
		shapeCount = shapeCount + 1
		if dot[i][anchorY].y > h or dot[i][anchorY].y < 0 then 
			dot[i][anchorY].y = start
			dot[i][anchorY].x = math.random(0,w)
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

function outSine(t, b, c, d,omega)
  return c * math.sin(t / d * (math.pi * omega/m*8)) + b
end