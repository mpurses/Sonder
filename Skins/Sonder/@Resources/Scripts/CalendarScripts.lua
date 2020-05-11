function Initialize()
print('Script Running...')
	local CurrentDayNumber = SKIN:GetVariable('CurrentDayMeter')
	local CurrentStreakTemp = 0
	local DayComplete = 1
	for i = CurrentDayNumber, 1, -1 do
		DayComplete = SKIN:GetVariable('Day'..i)
		if DayComplete == '0' then
			CurrentStreakTemp = CurrentStreakTemp + 1
		else
			SKIN:Bang('!WriteKeyValue', 'Variables', 'CurrentStreak', CurrentStreakTemp, '#@#Variables.inc')
			return CurrentStreakTemp
		end
	end

end
	
function Update()

	return CurrentStreakTemp

end

function ResetDaystoZero()
		
	for i = 1, 366 do
		SKIN:Bang('!WriteKeyValue', 'Variables', 'Day'..i, '1', '#@#Calendar-Day-Variables.inc')
	end
	
end