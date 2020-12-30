function Initialize()

end

function EditItemA()
	SKIN:Bang('!SetVariable ItemOrig """'..SKIN:GetVariable('ToDoText'):gsub("\n", "\r\n")..'"""')
	SKIN:Bang('!CommandMeasure ToDoTextBoxInput "ExecuteBatch 1"')
end

function EditItemB()
	local input = SKIN:GetVariable('Input'):gsub("\r\n", "#*CRLF*#")
	if input ~= "" then
		SKIN:Bang('[!WriteKeyValue Variables ToDoText """'..input..'""" "#@#Variables.inc"]')
	else
		DeleteItem()
	end
end

function DeleteItem()
	SKIN:Bang('!WriteKeyValue Variables ToDoText """'..SKIN:GetVariable('ToDoText'):gsub("\n", "#*CRLF*#")..'""" "#@#Variables.inc"')
	SKIN:Bang('[!Refresh]')
end