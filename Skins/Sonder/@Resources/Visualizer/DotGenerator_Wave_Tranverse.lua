floor = math.floor
ceil  = math.ceil

function Initialize()
	dofile(SKIN:GetVariable('@')..'Visualizer\\MeasureGenerator.lua')
	dis = tonumber(SKIN:GetVariable('Distance'))

	n = tonumber(SKIN:GetVariable('HeightWave'))
	peak = tonumber(SKIN:GetVariable('Peak'))
	totalMu = tonumber(SKIN:GetVariable('Wave_Density'))
	MeasureGeneratorWave(peak,tonumber(SKIN:GetVariable('Preview')),'tranverse')
	maxWave = tonumber(SKIN:GetVariable('Sub_Wave')) + 2

	dotSize  = tonumber(SKIN:GetVariable('Dot_Max_Size'))
	W_Amount = tonumber(SKIN:GetVariable('Ellipse_W_Scale'))
	H_Amount = tonumber(SKIN:GetVariable('Ellipse_H_Scale'))

	DepthAmountX = tonumber(SKIN:GetVariable('DepthAmount_X'))
	DepthAmountY = tonumber(SKIN:GetVariable('DepthAmount_Y'))
	
	SKIN:Bang('!SetOption Shape X '..dis - (DepthAmountX < 0 and peak*totalMu*dis*DepthAmountX/100 or 0))
	SKIN:Bang('!SetOption Shape Y '..n/2*dis - (DepthAmountY < 0 and  n/2*maxWave*dis*DepthAmountY/100 or 0))

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
	
	wave = {}
	for i = 1,maxWave do
		wave[i] = {}
		for j = 1, peak*totalMu do
			wave[i][j] = { 	x = j * dis+peak*totalMu*dis*(1-i/maxWave)*DepthAmountX/100,
							y = dis + n/2* dis + n/2 * dis * i *DepthAmountY/100,
							color = (grad1[1]+(grad2[1]-grad1[1])*((i-1)/(maxWave-1)*gradOrient + (j-1)/(peak*totalMu-1)*(1-gradOrient)))..','..(grad1[2]+(grad2[2]-grad1[2])*((i-1)/(maxWave-1)*gradOrient + (j-1)/(peak*totalMu-1)*(1-gradOrient)))..','..(grad1[3]+(grad2[3]-grad1[3])*((i-1)/(maxWave-1)*gradOrient + (j-1)/(peak*totalMu-1)*(1-gradOrient)))}
		end
	end
	audioMeasure = {}
	for i = 1, 2*peak do
		audioMeasure[i]=SKIN:GetMeasure('MeasureAudio'..i)
	end
end

init = true

function Update()
	if not init then clearMod() else init = false end
	shapeCount = 2
	for i = 1, peak-1 do
		drawWave(	audioMeasure[i==1 and peak or i-1]:GetValue(),audioMeasure[i]:GetValue(),
					audioMeasure[i+1]:GetValue(),audioMeasure[i+2]:GetValue(),
					audioMeasure[i+peak-1]:GetValue(),audioMeasure[i+peak]:GetValue(),
					audioMeasure[i+peak+1]:GetValue(),audioMeasure[i==peak-1 and 2*peak or i+peak+2]:GetValue(),
					i
				)
	end

end

function drawWave(audio1,audio2,audio3,audio4,audio5,audio6,audio7,audio8,peak)
	for i = 0,totalMu-1 do 
		local Y1 = CubicInterpolate(audio1,audio2,audio3,audio4,i/totalMu) 
		local Y2 = CubicInterpolate(audio5,audio6,audio7,audio8,i/totalMu)
		for j = 1, maxWave do
			if Y1== 0 and Y2==0 then break end
			SKIN:Bang('!SetOption Shape Shape'..shapeCount..' "Ellipse '..(wave[j][i+(peak-1)*totalMu+1].x)..','..(wave[j][i+(peak-1)*totalMu+1].y - n*dis*(Y1+(Y2-Y1)*(j-1)/(maxWave-1)))..','..(dotSize*W_Amount*(Y1+(Y2-Y1)*(j-1)/(maxWave-1)))..','..(dotSize*H_Amount*(Y1+(Y2-Y1)*(j-1)/(maxWave-1)))..'|StrokeWidth 0|Fill color '..wave[j][i+(peak-1)*totalMu+1].color..'"')
			shapeCount = shapeCount + 1
		end
	end
end

function CubicInterpolate(y0,y1,y2,y3,mu)
   local mu2,a0 = mu*mu, y3-y2-y0+y1
   return a0*mu*mu2+(y0-y1-a0)*mu2+(y2-y0)*mu+y1
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