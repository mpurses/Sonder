function Initialize()

end

function EditItemA()
	SKIN:Bang('!SetVariable ItemOrig """'..SKIN:GetVariable('ToDoText'):gsub("\n", "\r\n")..'"""')
	SKIN:Bang('!CommandMeasure ToDoTextBoxInput "ExecuteBatch 1"')
	--SKIN:Bang('[!CommandMeasure AddBullet Start]')
end

function EditItemB()
	local input = SKIN:GetVariable('Input'):gsub("\r\n", "#*CRLF*#")
	if input ~= "" then
		SKIN:Bang('[!WriteKeyValue Variables ToDoText """'..input..'""" "#@#Variables.inc"]')
		--SKIN:Bang('[!CommandMeasure AddBullet Stop]')
	else
		DeleteItem()
	end
end

function DeleteItem()
	SKIN:Bang('!WriteKeyValue Variables ToDoText """'..SKIN:GetVariable('ToDoText'):gsub("\n", "#*CRLF*#")..'""" "#@#Variables.inc"')
	SKIN:Bang('[!Refresh]')
end