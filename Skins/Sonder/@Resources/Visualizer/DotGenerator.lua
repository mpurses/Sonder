floor = math.floor
ceil  = math.ceil

function Initialize()
	dofile(SKIN:GetVariable('@')..'Visualizer\\MeasureGenerator.lua')
	dis = tonumber(SKIN:GetVariable('Distance'))
	o   = tonumber(SKIN:GetVariable('Degree'))

	m = tonumber(SKIN:GetVariable('VisualizerBarWidth'))
	n = tonumber(SKIN:GetVariable('VisualizerBarHeight'))
	MeasureGeneratorBar(m,tonumber(SKIN:GetVariable('Preview')))


	local a = string.lower(SKIN:GetVariable('Anchor'))

	if a == 'middle' then
		AnchorY, maxH = n/2, n/2
		lowH,highH = 1,1
	elseif a == 'top' then
		AnchorY, maxH = 1, n
		lowH,highH = 0,1
	else
		AnchorY, maxH = n, n
		lowH,highH = 1,0
	end

	dotSize  = tonumber(SKIN:GetVariable('Dot_Max_Size'))
	W_Amount = tonumber(SKIN:GetVariable('Ellipse_W_Scale'))
	H_Amount = tonumber(SKIN:GetVariable('Ellipse_H_Scale'))

	DepthAmountX = tonumber(SKIN:GetVariable('DepthAmount_X'))
	DepthAmountY = tonumber(SKIN:GetVariable('DepthAmount_Y'))
	
	SKIN:Bang('!SetOption Shape X '..(o > 90 and m * dis * math.cos(math.rad(o-180)) or 0) + n * dis * math.sin(math.rad(o)) + dis + math.abs(DepthAmountX) * dotSize)
	SKIN:Bang('!SetOption Shape Y '..(o > 90 and n * dis * math.cos(math.rad(o-180)) + dis or 0) + math.abs(DepthAmountY) * dotSize)

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
			dot[i][j] ={x = j * dis * math.cos(math.rad(o)) - i * dis * math.sin(math.rad(o)),
						y = j * dis * math.sin(math.rad(o)) + i * dis * math.cos(math.rad(o)) , 
						color = (grad1[1]+(grad2[1]-grad1[1])*(i/n*gradOrient + j/m*(1-gradOrient)))..','..(grad1[2]+(grad2[2]-grad1[2])*(i/n*gradOrient + j/m*(1-gradOrient)))..','..(grad1[3]+(grad2[3]-grad1[3])*(i/n*gradOrient + j/m*(1-gradOrient)))}
		end
	end
end

init = true

function Update()
	if not init then clearMod() else init = false end
	shapeCount = 2
	for i = 1, m do
		local audio = SKIN:GetMeasure('MeasureAudio'..i):GetValue()
		drawLine(i, dotSize*audio, maxH*audio)
	end
end

function drawLine(anchorX,scale,h)
	for i = floor(AnchorY - h*lowH), ceil(AnchorY + h*highH) do
		if scale == 0 then break end
		if i > 0 and i <= n then
			SKIN:Bang('!SetOption Shape Shape'..shapeCount..' "Ellipse '..(dot[i][anchorX].x + DepthAmountX*scale)..','..(dot[i][anchorX].y + DepthAmountY*scale)..','..(scale * W_Amount)..','..(scale * H_Amount)..' |StrokeWidth 0 | Fill Color '..dot[i][anchorX].color..'"')
			shapeCount = shapeCount + 1
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