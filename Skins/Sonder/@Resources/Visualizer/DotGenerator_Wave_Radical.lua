floor = math.floor
ceil  = math.ceil
cos = math.cos
sin = math.sin
tau = 2*math.pi

function Initialize()
	dofile(SKIN:GetVariable('@')..'Visualizer\\MeasureGenerator.lua')
	dis = tonumber(SKIN:GetVariable('Amplitude'))
	m = tonumber(SKIN:GetVariable('Radius'))

	peak = tonumber(SKIN:GetVariable('Peak'))
	totalMu = tonumber(SKIN:GetVariable('Wave_Density'))
	MeasureGeneratorWave(peak,tonumber(SKIN:GetVariable('Preview')),'radical')
	maxWave = tonumber(SKIN:GetVariable('Sub_Wave')) + 2

	dotSize  = tonumber(SKIN:GetVariable('Dot_Max_Size'))
	dotSize_Base  = tonumber(SKIN:GetVariable('Dot_Base_Size'))

	W_Amount = tonumber(SKIN:GetVariable('Ellipse_W_Scale'))
	H_Amount = tonumber(SKIN:GetVariable('Ellipse_H_Scale'))

	Twist = tonumber(SKIN:GetVariable('Twist'))

	SKIN:Bang('!SetOption Shape X '..dis + m)
	SKIN:Bang('!SetOption Shape Y '..dis + m)

	if string.lower(SKIN:GetVariable('RadialGradOrientation')) == 'insideout' then
		VisualizerColor1,VisualizerColor2 = SKIN:GetVariable('VisualizerColor1'),SKIN:GetVariable('VisualizerColor2')
	else
		VisualizerColor1,VisualizerColor2 = SKIN:GetVariable('VisualizerColor2'),SKIN:GetVariable('VisualizerColor1')
	end
	grad1 = {separateRGB(VisualizerColor1)}
	grad2 = {separateRGB(VisualizerColor2)}
	
	wave = {}
	for i = 1,maxWave do
		wave[i] = {}
		for j = 1, peak*totalMu do
			wave[i][j] = { 	x =  m * cos(tau * (j-1) /(peak*totalMu) + tau * Twist/100 * (i-1) /(maxWave-1)),
							y = -m * sin(tau * (j-1) /(peak*totalMu) + tau * Twist/100 * (i-1) /(maxWave-1)),
							color = (grad1[1]+(grad2[1]-grad1[1])*(i-1)/(maxWave-1))..','..(grad1[2]+(grad2[2]-grad1[2])*(i-1)/(maxWave-1))..','..(grad1[3]+(grad2[3]-grad1[3])*(i-1)/(maxWave-1))}
		end
	end
	audioMeasure = {}
	for i = 1, peak do
		audioMeasure[i]=SKIN:GetMeasure('MeasureAudio'..i)
	end
end

init = true
function Update()
	if not init then clearMod() else init = false end
	shapeCount = 2
	for i = 1, peak do
		drawWave(	audioMeasure[i==1 and peak or i-1]:GetValue(),
					audioMeasure[i]:GetValue(),
					audioMeasure[i<=peak-1 and i+1 or i==peak and 1]:GetValue(),
					audioMeasure[i==peak-1 and 1 or i==peak and 2 or i+2]:GetValue(),
					i
				)
	end
end

function drawWave(audio1,audio2,audio3,audio4,peakcalc)
	for i = 0,totalMu-1 do 
		local Y1 = CubicInterpolate(audio1,audio2,audio3,audio4,i/totalMu) 
		for j = 1, maxWave do
			local change = Y1-Y1*(j-1)/(maxWave-1)
			local pos = i+(peakcalc-1)*totalMu+1
			local radialpos = (pos-1) / (peak*totalMu)
			SKIN:Bang('!SetOption Shape Shape'..shapeCount..' "Ellipse '
				..(wave[j][pos].x - dis*change*cos(tau*radialpos))..','
				..(wave[j][pos].y + dis*change*sin(tau*radialpos))..','
				..(dotSize*W_Amount*change + dotSize_Base)..','
				..(dotSize*H_Amount*change + dotSize_Base)..'|StrokeWidth 0|Fill color '..wave[j][pos].color..'"')
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