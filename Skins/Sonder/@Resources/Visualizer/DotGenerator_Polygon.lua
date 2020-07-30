floor = math.floor
ceil  = math.ceil
cos,sin = math.cos,math.sin
pi,pi2 = math.pi,2*math.pi

function Initialize()
	dofile(SKIN:GetVariable('@')..'Visualizer\\MeasureGenerator.lua')
	dis = tonumber(SKIN:GetVariable('Distance'))
	o   = tonumber(SKIN:GetVariable('Degree'))

	m = tonumber(SKIN:GetVariable('WidthPoly'))
	n = tonumber(SKIN:GetVariable('HeightPoly'))
	MeasureGeneratorPoly(m,tonumber(SKIN:GetVariable('Preview')),n)

	dotSize  = tonumber(SKIN:GetVariable('Dot_Max_Size'))
	W_Amount = tonumber(SKIN:GetVariable('Ellipse_W_Scale'))
	H_Amount = tonumber(SKIN:GetVariable('Ellipse_H_Scale'))

	DepthAmountX = tonumber(SKIN:GetVariable('DepthAmount_X'))
	DepthAmountY = tonumber(SKIN:GetVariable('DepthAmount_Y'))

	SKIN:Bang('!SetOption Shape X '..dis + math.abs(DepthAmountX) * dotSize)
	SKIN:Bang('!SetOption Shape Y '..dis + math.abs(DepthAmountY) * dotSize)

	if string.lower(SKIN:GetVariable('RadialGradOrientation')) == 'insideout' then
		VisualizerColor1,VisualizerColor2 = SKIN:GetVariable('VisualizerColor1'),SKIN:GetVariable('VisualizerColor2')
	else
		VisualizerColor1,VisualizerColor2 = SKIN:GetVariable('VisualizerColor2'),SKIN:GetVariable('VisualizerColor1')
	end
	grad1 = {separateRGB(VisualizerColor1)}
	grad2 = {separateRGB(VisualizerColor2)}
	if m > n then
		r,mAmount,nAmount = m,1,n/m
	else
		r,mAmount,nAmount = n,m/n,1
	end
	side = tonumber(SKIN:GetVariable('Side'))
	polyType = SKIN:GetVariable('Polygon_Type')
	polyType = polyType == "convex" and 1 or polyType == "star" and 2
	density = 1
	start = o / 360
	dotsLayer = {}
	for layer = 1, r do
		dotsLayer[layer]={}
		for i = 1, side do
			local x1 = (layer * dis * cos(pi2 * i / side + start * pi2) + r * dis) * mAmount
			local y1 = (layer * dis * sin(pi2 * i / side + start * pi2) + r * dis) * nAmount
			local x2 = (layer * dis * cos(pi2 * (i+polyType) / side + start * pi2) + r * dis) * mAmount
			local y2 = (layer * dis * sin(pi2 * (i+polyType) / side + start * pi2) + r * dis) * nAmount
			for j = 1, density do
				dotsLayer[layer][(i-1)*density+j] ={x = round(x1 + (x2 - x1) * j / density),
													y = round(y1 + (y2 - y1) * j / density),
													color = (grad1[1]+(grad2[1]-grad1[1])*(layer / r))..','..(grad1[2]+(grad2[2]-grad1[2])*(layer / r))..','..(grad1[3]+(grad2[3]-grad1[3])*(layer / r))}
			end
		end
		if layer%(4 - SKIN:GetVariable('Density')) == 0 then density = density+1 else density = density end
	end
end

init = true

function Update()
	if not init then clearMod() else init = false end
	shapeCount = 2
	for i = r, 1, -1 do
		local audio = SKIN:GetMeasure('MeasureAudio'..i):GetValue()
		drawLayer(i,dotSize*audio)
	end
end

function drawLayer(layer,scale)
	for i = 1, #dotsLayer[layer] do
		if scale == 0 then break end
		SKIN:Bang('!SetOption Shape Shape'..shapeCount..' "Ellipse '..(dotsLayer[layer][i].x+DepthAmountX*scale)..','..(dotsLayer[layer][i].y+DepthAmountY*scale)..','..(scale * W_Amount)..','..(scale * H_Amount)..' |StrokeWidth 0 | Fill Color '..dotsLayer[layer][i]['color']..'"')
		shapeCount = shapeCount + 1
	end
end

function round(num, numDecimalPlaces)
  local mult = 10^(numDecimalPlaces or 0)
  return math.floor(num * mult + 0.5) / mult
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