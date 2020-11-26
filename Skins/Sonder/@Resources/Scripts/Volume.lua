function Initialize()
	--local IconSize=(SKIN:GetVariable('IconSize'))
	--local RingSize=(SKIN:GetVariable('RingSize'))
	--local IconPadding=tonumber(SKIN:GetVariable('VolumeBGMargin'))

	--SKIN:Bang('!SetOption','MeterIcon','W',IconSize)
	--SKIN:Bang('!SetOption','MeterIcon','H',IconSize)
	--SKIN:Bang('!SetOption','MeterIcon','X',(RingSize/2)-(IconSize/2)-IconPadding)
	--SKIN:Bang('!SetOption','MeterIcon','Y',(RingSize/2)-(IconSize/2)-IconPadding)
	--SKIN:Bang('!SetOption','MeterIcon','Padding',IconPadding..','..IconPadding..','..IconPadding..','..IconPadding)
end

function execute(x,y)
	local angle = math.deg(math.atan2(y - 50, x - 50)) + 90
	if angle < 0 then angle = angle + 360 end
	SKIN:Bang('!CommandMeasure', 'MeasureWin7Audio', 'SetVolume '..(angle/3.6))
	SKIN:Bang('[!UpdateMeasure MeasureWin7Audio][!UpdateMeter MeterIcon][!UpdateMeter "Round"][!Redraw]')
end