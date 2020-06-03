function Initilize()
	y = SKIN:GetVariable("YCoord")
	x = SKIN:GetVariable("XCoord")
	scale = SKIN:GetVariable("ISSMapScale")
	--mapwidth1 = SKIN:GetVariable("MapWidth")
	--mapheight1 = SKIN:GetVariable("MapHeight")
	width = scale*3000
	height = scale*1500
	iYSize = tonumber(SELF:GetOption('ySize'))
	iXSize = tonumber(SELF:GetOption('xSize'))
	lat = SKIN:GetMeasure("Latitude")
	long = SKIN:GetMeasure("Longitude")
end -- function Initilize
function Update()
	lat = SKIN:GetMeasure("Latitude")
	long = SKIN:GetMeasure("Longitude")
	scale = SKIN:GetVariable("ISSMapScale")
	width = scale*3000
	height = scale*1500
	ilat = tonumber(lat:GetStringValue())
	ilong = tonumber(long:GetStringValue())
	y = (height*((90-(ilat))/180))
	x = (width*((ilong+180)/360))
	SKIN:Bang("!SetVariable YCoord "..y)
	SKIN:Bang("!SetVariable XCoord "..x)
end -- function Update
	