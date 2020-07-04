[Variables]
;@include=#@#Variables.inc

[MeasureOnLoad]
Measure=Calc
Formula=Counter
IfCondition=MeasureOnLoad = 1
IfTrueAction=[!RainmeterWriteKeyValue Variables RefreshOverride 0 "#@#Variables.inc"][!UpdateMeasure StreakScript][!UpdateMeasure MeasureStreakActive]

[ResetRefreshOverride]
Measure=Calc
Formula=1
IfEqualValue=1
IfEqualAction=[!Delay 5000][!RainmeterWriteKeyValue Variables RefreshOverride 0 "#@#Variables.inc"]
UpdateDivider=-1

[StreakScript]
Measure=Script
ScriptFile=#@#Scripts\CalendarScripts.lua
UpdateDivider=60

[CurrentDayNum]
Measure=Time
Format="%#j"
UpdateDivider=60

[CurrentDayofMonthNum]
Measure=Time
Format="%e"
UpdateDivider=60

[CurrentMonth]
Measure=Time
Format="%#m"
UpdateDivider=-1

[CurrentYear]
Measure=Time
Format="%Y"
UpdateDivider=-1

[MeasureLeap]
Measure=Calc
IfCondition=([CurrentYear]%4 = 0) && (([CurrentYear]%100 <> 0) || ([CurrentYear]%400 = 0))
IfTrueAction=[!WriteKeyValue Variables LeapYearAdj 0 "#@#Variables.inc"]
IfFalseAction=[!WriteKeyValue Variables LeapYearAdj 1 "#@#Variables.inc"][!HideMeter M2Day60Num]
IfCondition2=([CurrentMonth] > 2)
IfTrueAction2=[!WriteKeyValue Variables CurrentDayMeter ([CurrentDayNum]+#LeapYearAdj#) "#@#Variables.inc"]
;Also need to ignore feb 29 on the streak checker if not a leap year... in the script file
IfFalseAction2=[!WriteKeyValue Variables CurrentDayMeter ([CurrentDayNum]) "#@#Variables.inc"]
UpdateDivider=-1

[CalculateDayCount]
Measure=Calc
Formula=((CurrentMonth = 4) || (CurrentMonth = 6) || (CurrentMonth = 9) || (CurrentMonth = 11)) ? 30 : ((CurrentMonth = 2) ? (CalculateLeapYear ? 29 : 28) : 31)

[CalculateLeapYear]
Measure=Calc
Formula=((CurrentYear%4 = 0) && (CurrentYear%100 <> 0) || (CurrentYear%400 = 0))

;===================================================================================================================================================================================================
;============================================================================ Language month translate measures ====================================================================================
;===================================================================================================================================================================================================
[CurrentMonthName]
Measure=Time
FormatLocale=#LanguageOverride#
Format=%B

[January]
Measure=Time
TimeStamp=January
TimeStampFormat=%B
TimeStampLocale=en-US
FormatLocale=#LanguageOverride#
Format=%B
UpdateDivider=-1

[February]
Measure=Time
TimeStamp=February
TimeStampFormat=%B
TimeStampLocale=en-US
FormatLocale=#LanguageOverride#
Format=%B
UpdateDivider=-1

[March]
Measure=Time
TimeStamp=March
TimeStampFormat=%B
TimeStampLocale=en-US
FormatLocale=#LanguageOverride#
Format=%B
UpdateDivider=-1

[April]
Measure=Time
TimeStamp=April
TimeStampFormat=%B
TimeStampLocale=en-US
FormatLocale=#LanguageOverride#
Format=%B
UpdateDivider=-1

[May]
Measure=Time
TimeStamp=May
TimeStampFormat=%B
TimeStampLocale=en-US
FormatLocale=#LanguageOverride#
Format=%B
UpdateDivider=-1

[June]
Measure=Time
TimeStamp=June
TimeStampFormat=%B
TimeStampLocale=en-US
FormatLocale=#LanguageOverride#
Format=%B
UpdateDivider=-1

[July]
Measure=Time
TimeStamp=July
TimeStampFormat=%B
TimeStampLocale=en-US
FormatLocale=#LanguageOverride#
Format=%B
UpdateDivider=-1

[August]
Measure=Time
TimeStamp=August
TimeStampFormat=%B
TimeStampLocale=en-US
FormatLocale=#LanguageOverride#
Format=%B
UpdateDivider=-1

[September]
Measure=Time
TimeStamp=September
TimeStampFormat=%B
TimeStampLocale=en-US
FormatLocale=#LanguageOverride#
Format=%B
UpdateDivider=-1

[October]
Measure=Time
TimeStamp=October
TimeStampFormat=%B
TimeStampLocale=en-US
FormatLocale=#LanguageOverride#
Format=%B
UpdateDivider=-1

[November]
Measure=Time
TimeStamp=November
TimeStampFormat=%B
TimeStampLocale=en-US
FormatLocale=#LanguageOverride#
Format=%B
UpdateDivider=-1

[December]
Measure=Time
TimeStamp=December
TimeStampFormat=%B
TimeStampLocale=en-US
FormatLocale=#LanguageOverride#
Format=%B
UpdateDivider=-1

;===================================================================================================================================================================================================
;============================================================================ Month, 1st day, and current day Location measures ====================================================================
;============================================================================         only done on first load of skin           ====================================================================
;===================================================================================================================================================================================================
;==================================================== For people wondering why its a lot of repeated formulas and not referencing each other =======================================================
;==================================================== It was like that, but if rainmeter runs it all at once, some references may be behind,  ======================================================
;======================================================================== and then it will take longer to update, dumb..  ==========================================================================
;===================================================================================================================================================================================================
;0=Horizontal  1= Vertical
[UpdateMonthDayspacings]
Measure=Calc
Formula=(#CalendarLayout#)
IfCondition=(#CalendarLayout# = 0) && ((MeasureOnLoad = 1) || (#RefreshOverride# = 1))
;[M1Day1Num:X] = X=#M1Day1X#+(#DayHeight#/2)r       replaced [M1Day1Num:X] with 145
IfTrueAction=[!Log "Running: UpdateMonthDayspacingsH"][!WriteKeyValue Variables MonthSpacings ((#WORKAREAHEIGHT#-62)/12) "#@#Variables.inc"][!WriteKeyValue Variables DayHeight ((#WORKAREAWIDTH#-145)/31) "#@#Variables.inc"][!UpdateMeterGroup Months]
IfCondition2=(#CalendarLayout# = 1) && ((MeasureOnLoad = 1) || (#RefreshOverride# = 1))
;replaced [M1Day1Num:Y] with 86
IfTrueAction2=[!Log "Running: UpdateMonthDayspacingsV"][!WriteKeyValue Variables MonthSpacings (#WORKAREAWIDTH#/12) "#@#Variables.inc"][!WriteKeyValue Variables DayHeight ((#WORKAREAHEIGHT#-86)/31) "#@#Variables.inc"][!UpdateMeterGroup Months]
UpdateDivider=-1
;DynamicVariables=1
[UpdateDayOneLocation]
Measure=Calc
Formula=(#CalendarLayout#)
IfCondition=(#CalendarLayout# = 0) && ((MeasureOnLoad = 1) || (#RefreshOverride# = 1))
IfTrueAction=[!Log "Running: DayOneLocationH"][!WriteKeyValue Variables DayLocationX "(((#WORKAREAWIDTH#-145)/31)/2)" "#@#Variables.inc"][!WriteKeyValue Variables DayLocationY "(((#WORKAREAWIDTH#-145)/31)/-2)" "#@#Variables.inc"]
IfCondition2=(#CalendarLayout# = 1) && ((MeasureOnLoad = 1) || (#RefreshOverride# = 1))
IfTrueAction2=[!Log "Running: DayOneLocationV"][!WriteKeyValue Variables DayLocationX "(((#WORKAREAHEIGHT#-86)/31)/-2)" "#@#Variables.inc"][!WriteKeyValue Variables DayLocationY "(((#WORKAREAHEIGHT#-86)/31)/2)" "#@#Variables.inc"]
UpdateDivider=-1
;DynamicVariables=1

[UpdateFirstDayLocations]
Measure=Calc
Formula=(#CalendarLayout#)
IfCondition=(#CalendarLayout# = 0) && ((MeasureOnLoad = 1) || (#RefreshOverride# = 1))
IfTrueAction=[!Log "Running: FirstDayLocationsH"][!WriteKeyValue Variables M1Day1X 145 "#@#Variables.inc"][!WriteKeyValue Variables M1Day1Y 82 "#@#Variables.inc"][!WriteKeyValue Variables M2Day1X 145 "#@#Variables.inc"][!WriteKeyValue Variables M2Day1Y (82+((#WORKAREAHEIGHT#-62)/12)) "#@#Variables.inc"][!WriteKeyValue Variables M3Day1X 145 "#@#Variables.inc"][!WriteKeyValue Variables M3Day1Y (82+((#WORKAREAHEIGHT#-62)/12)*2) "#@#Variables.inc"][!WriteKeyValue Variables M4Day1X 145 "#@#Variables.inc"][!WriteKeyValue Variables M4Day1Y (82+((#WORKAREAHEIGHT#-62)/12)*3) "#@#Variables.inc"][!WriteKeyValue Variables M5Day1X 145 "#@#Variables.inc"][!WriteKeyValue Variables M5Day1Y (82+((#WORKAREAHEIGHT#-62)/12)*4) "#@#Variables.inc"][!WriteKeyValue Variables M6Day1X 145 "#@#Variables.inc"][!WriteKeyValue Variables M6Day1Y (82+((#WORKAREAHEIGHT#-62)/12)*5) "#@#Variables.inc"][!WriteKeyValue Variables M7Day1X 145 "#@#Variables.inc"][!WriteKeyValue Variables M7Day1Y (82+((#WORKAREAHEIGHT#-62)/12)*6) "#@#Variables.inc"][!WriteKeyValue Variables M8Day1X 145 "#@#Variables.inc"][!WriteKeyValue Variables M8Day1Y (82+((#WORKAREAHEIGHT#-62)/12)*7) "#@#Variables.inc"][!WriteKeyValue Variables M9Day1X 145 "#@#Variables.inc"][!WriteKeyValue Variables M9Day1Y (82+((#WORKAREAHEIGHT#-62)/12)*8) "#@#Variables.inc"][!WriteKeyValue Variables M10Day1X 145 "#@#Variables.inc"][!WriteKeyValue Variables M10Day1Y (82+((#WORKAREAHEIGHT#-62)/12)*9) "#@#Variables.inc"][!WriteKeyValue Variables M11Day1X 145 "#@#Variables.inc"][!WriteKeyValue Variables M11Day1Y (82+((#WORKAREAHEIGHT#-62)/12)*10) "#@#Variables.inc"][!WriteKeyValue Variables M12Day1X 145 "#@#Variables.inc"][!WriteKeyValue Variables M12Day1Y (82+((#WORKAREAHEIGHT#-62)/12)*11) "#@#Variables.inc"]
; M1Day1X=145 - Hard coding to lock in x/y location for horizontal layout
; M1Day1Y=81.74194  = (([Month1:Y]+([Month1:H]*2))-#DayHeight#-8) - Hard coding to lock in x/y location for horizontal layout, cause above noted issues
IfCondition2=(#CalendarLayout# = 1) && ((MeasureOnLoad = 1) || (#RefreshOverride# = 1))
IfTrueAction2=[!Log "Running: FirstDayLocationsV"][!WriteKeyValue Variables M1Day1X (((#WORKAREAWIDTH#/12)/2)-((#WORKAREAHEIGHT#-86)/31)/2) "#@#Variables.inc"][!WriteKeyValue Variables M1Day1Y 113 "#@#Variables.inc"][!WriteKeyValue Variables M2Day1X ((((#WORKAREAWIDTH#/12)/2)-((#WORKAREAHEIGHT#-86)/31)/2)+(#WORKAREAWIDTH#/12)) "#@#Variables.inc"][!WriteKeyValue Variables M2Day1Y 113 "#@#Variables.inc"][!WriteKeyValue Variables M3Day1X ((((#WORKAREAWIDTH#/12)/2)-((#WORKAREAHEIGHT#-86)/31)/2)+(#WORKAREAWIDTH#/12)*2) "#@#Variables.inc"][!WriteKeyValue Variables M3Day1Y 113 "#@#Variables.inc"][!WriteKeyValue Variables M4Day1X ((((#WORKAREAWIDTH#/12)/2)-((#WORKAREAHEIGHT#-86)/31)/2)+(#WORKAREAWIDTH#/12)*3) "#@#Variables.inc"][!WriteKeyValue Variables M4Day1Y 113 "#@#Variables.inc"][!WriteKeyValue Variables M5Day1X ((((#WORKAREAWIDTH#/12)/2)-((#WORKAREAHEIGHT#-86)/31)/2)+(#WORKAREAWIDTH#/12)*4) "#@#Variables.inc"][!WriteKeyValue Variables M5Day1Y 113 "#@#Variables.inc"][!WriteKeyValue Variables M6Day1X ((((#WORKAREAWIDTH#/12)/2)-((#WORKAREAHEIGHT#-86)/31)/2)+(#WORKAREAWIDTH#/12)*5) "#@#Variables.inc"][!WriteKeyValue Variables M6Day1Y 113 "#@#Variables.inc"][!WriteKeyValue Variables M7Day1X ((((#WORKAREAWIDTH#/12)/2)-((#WORKAREAHEIGHT#-86)/31)/2)+(#WORKAREAWIDTH#/12)*6) "#@#Variables.inc"][!WriteKeyValue Variables M7Day1Y 113 "#@#Variables.inc"][!WriteKeyValue Variables M8Day1X ((((#WORKAREAWIDTH#/12)/2)-((#WORKAREAHEIGHT#-86)/31)/2)+(#WORKAREAWIDTH#/12)*7) "#@#Variables.inc"][!WriteKeyValue Variables M8Day1Y 113 "#@#Variables.inc"][!WriteKeyValue Variables M9Day1X ((((#WORKAREAWIDTH#/12)/2)-((#WORKAREAHEIGHT#-86)/31)/2)+(#WORKAREAWIDTH#/12)*8) "#@#Variables.inc"][!WriteKeyValue Variables M9Day1Y 113 "#@#Variables.inc"][!WriteKeyValue Variables M10Day1X ((((#WORKAREAWIDTH#/12)/2)-((#WORKAREAHEIGHT#-86)/31)/2)+(#WORKAREAWIDTH#/12)*9) "#@#Variables.inc"][!WriteKeyValue Variables M10Day1Y 113 "#@#Variables.inc"][!WriteKeyValue Variables M11Day1X ((((#WORKAREAWIDTH#/12)/2)-((#WORKAREAHEIGHT#-86)/31)/2)+(#WORKAREAWIDTH#/12)*10) "#@#Variables.inc"][!WriteKeyValue Variables M11Day1Y 113 "#@#Variables.inc"][!WriteKeyValue Variables M12Day1X ((((#WORKAREAWIDTH#/12)/2)-((#WORKAREAHEIGHT#-86)/31)/2)+(#WORKAREAWIDTH#/12)*11) "#@#Variables.inc"][!WriteKeyValue Variables M12Day1Y 113 "#@#Variables.inc"]
; M1Day1X=64.6129  =  ((#MonthSpacings#/2)-#DayHeight#/2)  -  KEEPING FORMULA BECAUSE SCREEN WIDTH SPACINGS
; M1Day1Y=112.6129  =  (([Month1:Y]+([Month1:H]*2))-#DayHeight#/2)
UpdateDivider=-1
;DynamicVariables=1

[UpdateCurrentDay]
Measure=Calc
Formula=(#CalendarLayout#)
IfCondition=(#CalendarLayout# = 0) && ((MeasureOnLoad = 1) || (#RefreshOverride# = 1))
IfTrueAction=[!DisableMeasure MeasureDayUnderline][!Delay 50][!EnableMeasure MeasureDayUnderline][!Refresh "#ROOTCONFIG#\EverydayHabitCalendar" "EverydayHabitCalendar.ini"]
IfCondition2=(#CalendarLayout# = 1) && ((MeasureOnLoad = 1) || (#RefreshOverride# = 1))
IfTrueAction2=[!DisableMeasure MeasureDayUnderline][!Delay 50][!EnableMeasure MeasureDayUnderline][!Refresh "#ROOTCONFIG#\EverydayHabitCalendar" "EverydayHabitCalendar.ini"]
UpdateDivider=-1
;DynamicVariables=1
;[!Log "Running: CurrentDayH"][!WriteKeyValue Variables CurrentDayX (145+(((#WORKAREAWIDTH#-145)/31)*0.3)+(((#WORKAREAWIDTH#-145)/31)*([CurrentDayofMonthNum]-1))) "#@#Variables.inc"][!WriteKeyValue Variables CurrentDayY (82+([CurrentMonth]-1)*((#WORKAREAHEIGHT#-62)/12)+(((#WORKAREAWIDTH#-145)/31)*0.1)) "#@#Variables.inc"]
;[!Log "Running: CurrentDayV..."][!WriteKeyValue Variables CurrentDayX ((#WORKAREAWIDTH#/12)/2)+(([CurrentMonth]-1)*(#WORKAREAWIDTH#/12)) "#@#Variables.inc"][!WriteKeyValue Variables CurrentDayY (113+(((#WORKAREAHEIGHT#-86)/31)*([CurrentDayofMonthNum]-1))-(((#WORKAREAHEIGHT#-86)/31)*0.2)) "#@#Variables.inc"]

[ResetOverride]
Measure=Calc
Formula=1
IfEqualValue=1
IfEqualAction=[!Delay 4000][!RainmeterWriteKeyValue Variables RefreshOverride 0 "#@#Variables.inc"]
UpdateDivider=-1
DynamicVariables=1

; [MonthandDaySpacingsMeasure]
; [Day1LocationMeasure]
; [CurrentDayMeasure]
; Measure=Calc
; Formula=(#CalendarLayout#)
; DynamicVariables=1
; UpdateDivider=-1
;Horiz (x is constant, y changes by month)
;Vertical (x changes by month, y is constant)

;===================================================================================================================================================================================================
;============================================================================ 366 Day measures =====================================================================================================
;===================================================================================================================================================================================================
[MeasureStreakNumUpdate]
Measure=Calc
Formula=1
DynamicVariables=1
UpdateDivider=-1
IfEqualValue=1
Ifequalaction=[!CommandMeasure StreakScript "Initialize()"]

[MeasureStreakActive]
Measure=Calc
Formula=#TodayComplete#
DynamicVariables=1
UpdateDivider=-1
IfCondition=(#TodayComplete# = 0)
IfTrueAction=[!SetOption StreakCircle imagetint #StreakTodayNotCompleteColor#][!UpdateMeter StreakCircle]
IfFalseAction=[!SetOption StreakCircle imagetint #DayActiveColor#][!UpdateMeter StreakCircle]
;Substitute="0":"#StreakTodayNotCompleteColor#","1":"#DayActiveColor#"

[MeasureDay1Active]
Measure=Calc
Formula=#Day1#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay2Active]
Measure=Calc
Formula=#Day2#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay3Active]
Measure=Calc
Formula=#Day3#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay4Active]
Measure=Calc
Formula=#Day4#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay5Active]
Measure=Calc
Formula=#Day5#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay6Active]
Measure=Calc
Formula=#Day6#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay7Active]
Measure=Calc
Formula=#Day7#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay8Active]
Measure=Calc
Formula=#Day8#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay9Active]
Measure=Calc
Formula=#Day9#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay10Active]
Measure=Calc
Formula=#Day10#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay11Active]
Measure=Calc
Formula=#Day11#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay12Active]
Measure=Calc
Formula=#Day12#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay13Active]
Measure=Calc
Formula=#Day13#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay14Active]
Measure=Calc
Formula=#Day14#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay15Active]
Measure=Calc
Formula=#Day15#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay16Active]
Measure=Calc
Formula=#Day16#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay17Active]
Measure=Calc
Formula=#Day17#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay18Active]
Measure=Calc
Formula=#Day18#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay19Active]
Measure=Calc
Formula=#Day19#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay20Active]
Measure=Calc
Formula=#Day20#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay21Active]
Measure=Calc
Formula=#Day21#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay22Active]
Measure=Calc
Formula=#Day22#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay23Active]
Measure=Calc
Formula=#Day23#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay24Active]
Measure=Calc
Formula=#Day24#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay25Active]
Measure=Calc
Formula=#Day25#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay26Active]
Measure=Calc
Formula=#Day26#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay27Active]
Measure=Calc
Formula=#Day27#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay28Active]
Measure=Calc
Formula=#Day28#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay29Active]
Measure=Calc
Formula=#Day29#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay30Active]
Measure=Calc
Formula=#Day30#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay31Active]
Measure=Calc
Formula=#Day31#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"
;Feb
[MeasureDay32Active]
Measure=Calc
Formula=#Day32#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay33Active]
Measure=Calc
Formula=#Day33#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay34Active]
Measure=Calc
Formula=#Day34#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay35Active]
Measure=Calc
Formula=#Day35#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay36Active]
Measure=Calc
Formula=#Day36#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay37Active]
Measure=Calc
Formula=#Day37#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay38Active]
Measure=Calc
Formula=#Day38#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay39Active]
Measure=Calc
Formula=#Day39#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay40Active]
Measure=Calc
Formula=#Day40#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay41Active]
Measure=Calc
Formula=#Day41#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay42Active]
Measure=Calc
Formula=#Day42#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay43Active]
Measure=Calc
Formula=#Day43#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay44Active]
Measure=Calc
Formula=#Day44#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay45Active]
Measure=Calc
Formula=#Day45#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay46Active]
Measure=Calc
Formula=#Day46#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay47Active]
Measure=Calc
Formula=#Day47#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay48Active]
Measure=Calc
Formula=#Day48#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay49Active]
Measure=Calc
Formula=#Day49#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay50Active]
Measure=Calc
Formula=#Day50#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay51Active]
Measure=Calc
Formula=#Day51#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay52Active]
Measure=Calc
Formula=#Day52#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay53Active]
Measure=Calc
Formula=#Day53#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay54Active]
Measure=Calc
Formula=#Day54#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay55Active]
Measure=Calc
Formula=#Day55#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay56Active]
Measure=Calc
Formula=#Day56#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay57Active]
Measure=Calc
Formula=#Day57#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay58Active]
Measure=Calc
Formula=#Day58#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay59Active]
Measure=Calc
Formula=#Day59#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"
;Feb 29 in leap year (must ignore in streak counter script if not leap year)
[MeasureDay60Active]
Measure=Calc
Formula=#Day60#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"
;March 1
[MeasureDay61Active]
Measure=Calc
Formula=#Day61#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay62Active]
Measure=Calc
Formula=#Day62#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay63Active]
Measure=Calc
Formula=#Day63#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay64Active]
Measure=Calc
Formula=#Day64#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay65Active]
Measure=Calc
Formula=#Day65#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay66Active]
Measure=Calc
Formula=#Day66#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay67Active]
Measure=Calc
Formula=#Day67#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay68Active]
Measure=Calc
Formula=#Day68#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay69Active]
Measure=Calc
Formula=#Day69#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay70Active]
Measure=Calc
Formula=#Day70#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay71Active]
Measure=Calc
Formula=#Day71#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay72Active]
Measure=Calc
Formula=#Day72#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay73Active]
Measure=Calc
Formula=#Day73#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay74Active]
Measure=Calc
Formula=#Day74#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay75Active]
Measure=Calc
Formula=#Day75#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay76Active]
Measure=Calc
Formula=#Day76#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay77Active]
Measure=Calc
Formula=#Day77#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay78Active]
Measure=Calc
Formula=#Day78#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay79Active]
Measure=Calc
Formula=#Day79#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay80Active]
Measure=Calc
Formula=#Day80#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay81Active]
Measure=Calc
Formula=#Day81#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay82Active]
Measure=Calc
Formula=#Day82#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay83Active]
Measure=Calc
Formula=#Day83#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay84Active]
Measure=Calc
Formula=#Day84#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay85Active]
Measure=Calc
Formula=#Day85#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay86Active]
Measure=Calc
Formula=#Day86#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay87Active]
Measure=Calc
Formula=#Day87#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay88Active]
Measure=Calc
Formula=#Day88#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay89Active]
Measure=Calc
Formula=#Day89#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay90Active]
Measure=Calc
Formula=#Day90#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay91Active]
Measure=Calc
Formula=#Day91#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay92Active]
Measure=Calc
Formula=#Day92#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay93Active]
Measure=Calc
Formula=#Day93#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay94Active]
Measure=Calc
Formula=#Day94#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay95Active]
Measure=Calc
Formula=#Day95#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay96Active]
Measure=Calc
Formula=#Day96#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay97Active]
Measure=Calc
Formula=#Day97#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay98Active]
Measure=Calc
Formula=#Day98#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay99Active]
Measure=Calc
Formula=#Day99#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay100Active]
Measure=Calc
Formula=#Day100#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay101Active]
Measure=Calc
Formula=#Day101#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay102Active]
Measure=Calc
Formula=#Day102#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay103Active]
Measure=Calc
Formula=#Day103#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay104Active]
Measure=Calc
Formula=#Day104#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay105Active]
Measure=Calc
Formula=#Day105#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay106Active]
Measure=Calc
Formula=#Day106#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay107Active]
Measure=Calc
Formula=#Day107#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay108Active]
Measure=Calc
Formula=#Day108#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay109Active]
Measure=Calc
Formula=#Day109#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay110Active]
Measure=Calc
Formula=#Day110#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay111Active]
Measure=Calc
Formula=#Day111#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay112Active]
Measure=Calc
Formula=#Day112#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay113Active]
Measure=Calc
Formula=#Day113#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay114Active]
Measure=Calc
Formula=#Day114#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay115Active]
Measure=Calc
Formula=#Day115#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay116Active]
Measure=Calc
Formula=#Day116#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay117Active]
Measure=Calc
Formula=#Day117#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay118Active]
Measure=Calc
Formula=#Day118#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay119Active]
Measure=Calc
Formula=#Day119#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay120Active]
Measure=Calc
Formula=#Day120#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay121Active]
Measure=Calc
Formula=#Day121#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay122Active]
Measure=Calc
Formula=#Day122#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay123Active]
Measure=Calc
Formula=#Day123#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay124Active]
Measure=Calc
Formula=#Day124#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay125Active]
Measure=Calc
Formula=#Day125#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay126Active]
Measure=Calc
Formula=#Day126#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay127Active]
Measure=Calc
Formula=#Day127#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay128Active]
Measure=Calc
Formula=#Day128#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay129Active]
Measure=Calc
Formula=#Day129#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay130Active]
Measure=Calc
Formula=#Day130#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay131Active]
Measure=Calc
Formula=#Day131#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay132Active]
Measure=Calc
Formula=#Day132#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay133Active]
Measure=Calc
Formula=#Day133#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay134Active]
Measure=Calc
Formula=#Day134#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay135Active]
Measure=Calc
Formula=#Day135#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay136Active]
Measure=Calc
Formula=#Day136#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay137Active]
Measure=Calc
Formula=#Day137#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay138Active]
Measure=Calc
Formula=#Day138#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay139Active]
Measure=Calc
Formula=#Day139#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay140Active]
Measure=Calc
Formula=#Day140#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay141Active]
Measure=Calc
Formula=#Day141#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay142Active]
Measure=Calc
Formula=#Day142#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay143Active]
Measure=Calc
Formula=#Day143#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay144Active]
Measure=Calc
Formula=#Day144#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay145Active]
Measure=Calc
Formula=#Day145#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay146Active]
Measure=Calc
Formula=#Day146#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay147Active]
Measure=Calc
Formula=#Day147#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay148Active]
Measure=Calc
Formula=#Day148#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay149Active]
Measure=Calc
Formula=#Day149#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay150Active]
Measure=Calc
Formula=#Day150#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay151Active]
Measure=Calc
Formula=#Day151#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay152Active]
Measure=Calc
Formula=#Day152#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay153Active]
Measure=Calc
Formula=#Day153#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay154Active]
Measure=Calc
Formula=#Day154#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay155Active]
Measure=Calc
Formula=#Day155#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay156Active]
Measure=Calc
Formula=#Day156#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay157Active]
Measure=Calc
Formula=#Day157#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay158Active]
Measure=Calc
Formula=#Day158#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay159Active]
Measure=Calc
Formula=#Day159#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay160Active]
Measure=Calc
Formula=#Day160#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay161Active]
Measure=Calc
Formula=#Day161#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay162Active]
Measure=Calc
Formula=#Day162#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay163Active]
Measure=Calc
Formula=#Day163#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay164Active]
Measure=Calc
Formula=#Day164#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay165Active]
Measure=Calc
Formula=#Day165#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay166Active]
Measure=Calc
Formula=#Day166#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay167Active]
Measure=Calc
Formula=#Day167#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay168Active]
Measure=Calc
Formula=#Day168#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay169Active]
Measure=Calc
Formula=#Day169#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay170Active]
Measure=Calc
Formula=#Day170#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay171Active]
Measure=Calc
Formula=#Day171#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay172Active]
Measure=Calc
Formula=#Day172#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay173Active]
Measure=Calc
Formula=#Day173#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay174Active]
Measure=Calc
Formula=#Day174#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay175Active]
Measure=Calc
Formula=#Day175#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay176Active]
Measure=Calc
Formula=#Day176#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay177Active]
Measure=Calc
Formula=#Day177#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay178Active]
Measure=Calc
Formula=#Day178#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay179Active]
Measure=Calc
Formula=#Day179#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay180Active]
Measure=Calc
Formula=#Day180#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay181Active]
Measure=Calc
Formula=#Day181#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay182Active]
Measure=Calc
Formula=#Day182#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay183Active]
Measure=Calc
Formula=#Day183#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay184Active]
Measure=Calc
Formula=#Day184#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay185Active]
Measure=Calc
Formula=#Day185#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay186Active]
Measure=Calc
Formula=#Day186#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay187Active]
Measure=Calc
Formula=#Day187#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay188Active]
Measure=Calc
Formula=#Day188#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay189Active]
Measure=Calc
Formula=#Day189#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay190Active]
Measure=Calc
Formula=#Day190#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay191Active]
Measure=Calc
Formula=#Day191#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay192Active]
Measure=Calc
Formula=#Day192#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay193Active]
Measure=Calc
Formula=#Day193#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay194Active]
Measure=Calc
Formula=#Day194#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay195Active]
Measure=Calc
Formula=#Day195#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay196Active]
Measure=Calc
Formula=#Day196#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay197Active]
Measure=Calc
Formula=#Day197#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay198Active]
Measure=Calc
Formula=#Day198#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay199Active]
Measure=Calc
Formula=#Day199#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay200Active]
Measure=Calc
Formula=#Day200#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay201Active]
Measure=Calc
Formula=#Day201#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay202Active]
Measure=Calc
Formula=#Day202#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay203Active]
Measure=Calc
Formula=#Day203#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay204Active]
Measure=Calc
Formula=#Day204#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay205Active]
Measure=Calc
Formula=#Day205#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay206Active]
Measure=Calc
Formula=#Day206#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay207Active]
Measure=Calc
Formula=#Day207#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay208Active]
Measure=Calc
Formula=#Day208#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay209Active]
Measure=Calc
Formula=#Day209#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay210Active]
Measure=Calc
Formula=#Day210#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay211Active]
Measure=Calc
Formula=#Day211#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay212Active]
Measure=Calc
Formula=#Day212#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay213Active]
Measure=Calc
Formula=#Day213#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay214Active]
Measure=Calc
Formula=#Day214#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay215Active]
Measure=Calc
Formula=#Day215#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay216Active]
Measure=Calc
Formula=#Day216#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay217Active]
Measure=Calc
Formula=#Day217#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay218Active]
Measure=Calc
Formula=#Day218#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay219Active]
Measure=Calc
Formula=#Day219#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay220Active]
Measure=Calc
Formula=#Day220#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay221Active]
Measure=Calc
Formula=#Day221#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay222Active]
Measure=Calc
Formula=#Day222#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay223Active]
Measure=Calc
Formula=#Day223#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay224Active]
Measure=Calc
Formula=#Day224#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay225Active]
Measure=Calc
Formula=#Day225#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay226Active]
Measure=Calc
Formula=#Day226#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay227Active]
Measure=Calc
Formula=#Day227#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay228Active]
Measure=Calc
Formula=#Day228#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay229Active]
Measure=Calc
Formula=#Day229#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay230Active]
Measure=Calc
Formula=#Day230#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay231Active]
Measure=Calc
Formula=#Day231#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay232Active]
Measure=Calc
Formula=#Day232#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay233Active]
Measure=Calc
Formula=#Day233#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay234Active]
Measure=Calc
Formula=#Day234#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay235Active]
Measure=Calc
Formula=#Day235#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay236Active]
Measure=Calc
Formula=#Day236#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay237Active]
Measure=Calc
Formula=#Day237#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay238Active]
Measure=Calc
Formula=#Day238#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay239Active]
Measure=Calc
Formula=#Day239#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay240Active]
Measure=Calc
Formula=#Day240#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay241Active]
Measure=Calc
Formula=#Day241#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay242Active]
Measure=Calc
Formula=#Day242#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay243Active]
Measure=Calc
Formula=#Day243#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay244Active]
Measure=Calc
Formula=#Day244#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay245Active]
Measure=Calc
Formula=#Day245#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay246Active]
Measure=Calc
Formula=#Day246#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay247Active]
Measure=Calc
Formula=#Day247#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay248Active]
Measure=Calc
Formula=#Day248#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay249Active]
Measure=Calc
Formula=#Day249#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay250Active]
Measure=Calc
Formula=#Day250#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay251Active]
Measure=Calc
Formula=#Day251#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay252Active]
Measure=Calc
Formula=#Day252#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay253Active]
Measure=Calc
Formula=#Day253#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay254Active]
Measure=Calc
Formula=#Day254#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay255Active]
Measure=Calc
Formula=#Day255#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay256Active]
Measure=Calc
Formula=#Day256#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay257Active]
Measure=Calc
Formula=#Day257#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay258Active]
Measure=Calc
Formula=#Day258#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay259Active]
Measure=Calc
Formula=#Day259#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay260Active]
Measure=Calc
Formula=#Day260#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay261Active]
Measure=Calc
Formula=#Day261#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay262Active]
Measure=Calc
Formula=#Day262#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay263Active]
Measure=Calc
Formula=#Day263#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay264Active]
Measure=Calc
Formula=#Day264#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay265Active]
Measure=Calc
Formula=#Day265#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay266Active]
Measure=Calc
Formula=#Day266#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay267Active]
Measure=Calc
Formula=#Day267#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay268Active]
Measure=Calc
Formula=#Day268#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay269Active]
Measure=Calc
Formula=#Day269#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay270Active]
Measure=Calc
Formula=#Day270#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay271Active]
Measure=Calc
Formula=#Day271#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay272Active]
Measure=Calc
Formula=#Day272#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay273Active]
Measure=Calc
Formula=#Day273#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay274Active]
Measure=Calc
Formula=#Day274#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay275Active]
Measure=Calc
Formula=#Day275#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay276Active]
Measure=Calc
Formula=#Day276#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay277Active]
Measure=Calc
Formula=#Day277#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay278Active]
Measure=Calc
Formula=#Day278#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay279Active]
Measure=Calc
Formula=#Day279#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay280Active]
Measure=Calc
Formula=#Day280#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay281Active]
Measure=Calc
Formula=#Day281#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay282Active]
Measure=Calc
Formula=#Day282#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay283Active]
Measure=Calc
Formula=#Day283#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay284Active]
Measure=Calc
Formula=#Day284#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay285Active]
Measure=Calc
Formula=#Day285#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay286Active]
Measure=Calc
Formula=#Day286#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay287Active]
Measure=Calc
Formula=#Day287#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay288Active]
Measure=Calc
Formula=#Day288#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay289Active]
Measure=Calc
Formula=#Day289#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay290Active]
Measure=Calc
Formula=#Day290#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay291Active]
Measure=Calc
Formula=#Day291#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay292Active]
Measure=Calc
Formula=#Day292#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay293Active]
Measure=Calc
Formula=#Day293#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay294Active]
Measure=Calc
Formula=#Day294#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay295Active]
Measure=Calc
Formula=#Day295#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay296Active]
Measure=Calc
Formula=#Day296#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay297Active]
Measure=Calc
Formula=#Day297#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay298Active]
Measure=Calc
Formula=#Day298#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay299Active]
Measure=Calc
Formula=#Day299#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay300Active]
Measure=Calc
Formula=#Day300#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay301Active]
Measure=Calc
Formula=#Day301#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay302Active]
Measure=Calc
Formula=#Day302#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay303Active]
Measure=Calc
Formula=#Day303#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay304Active]
Measure=Calc
Formula=#Day304#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay305Active]
Measure=Calc
Formula=#Day305#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay306Active]
Measure=Calc
Formula=#Day306#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay307Active]
Measure=Calc
Formula=#Day307#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay308Active]
Measure=Calc
Formula=#Day308#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay309Active]
Measure=Calc
Formula=#Day309#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay310Active]
Measure=Calc
Formula=#Day310#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay311Active]
Measure=Calc
Formula=#Day311#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay312Active]
Measure=Calc
Formula=#Day312#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay313Active]
Measure=Calc
Formula=#Day313#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay314Active]
Measure=Calc
Formula=#Day314#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay315Active]
Measure=Calc
Formula=#Day315#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay316Active]
Measure=Calc
Formula=#Day316#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay317Active]
Measure=Calc
Formula=#Day317#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay318Active]
Measure=Calc
Formula=#Day318#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay319Active]
Measure=Calc
Formula=#Day319#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay320Active]
Measure=Calc
Formula=#Day320#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay321Active]
Measure=Calc
Formula=#Day321#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay322Active]
Measure=Calc
Formula=#Day322#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay323Active]
Measure=Calc
Formula=#Day323#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay324Active]
Measure=Calc
Formula=#Day324#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay325Active]
Measure=Calc
Formula=#Day325#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay326Active]
Measure=Calc
Formula=#Day326#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay327Active]
Measure=Calc
Formula=#Day327#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay328Active]
Measure=Calc
Formula=#Day328#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay329Active]
Measure=Calc
Formula=#Day329#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay330Active]
Measure=Calc
Formula=#Day330#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay331Active]
Measure=Calc
Formula=#Day331#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay332Active]
Measure=Calc
Formula=#Day332#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay333Active]
Measure=Calc
Formula=#Day333#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay334Active]
Measure=Calc
Formula=#Day334#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay335Active]
Measure=Calc
Formula=#Day335#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay336Active]
Measure=Calc
Formula=#Day336#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay337Active]
Measure=Calc
Formula=#Day337#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay338Active]
Measure=Calc
Formula=#Day338#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay339Active]
Measure=Calc
Formula=#Day339#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay340Active]
Measure=Calc
Formula=#Day340#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay341Active]
Measure=Calc
Formula=#Day341#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay342Active]
Measure=Calc
Formula=#Day342#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay343Active]
Measure=Calc
Formula=#Day343#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay344Active]
Measure=Calc
Formula=#Day344#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay345Active]
Measure=Calc
Formula=#Day345#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay346Active]
Measure=Calc
Formula=#Day346#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay347Active]
Measure=Calc
Formula=#Day347#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay348Active]
Measure=Calc
Formula=#Day348#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay349Active]
Measure=Calc
Formula=#Day349#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay350Active]
Measure=Calc
Formula=#Day350#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay351Active]
Measure=Calc
Formula=#Day351#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay352Active]
Measure=Calc
Formula=#Day352#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay353Active]
Measure=Calc
Formula=#Day353#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay354Active]
Measure=Calc
Formula=#Day354#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay355Active]
Measure=Calc
Formula=#Day355#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay356Active]
Measure=Calc
Formula=#Day356#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay357Active]
Measure=Calc
Formula=#Day357#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay358Active]
Measure=Calc
Formula=#Day358#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay359Active]
Measure=Calc
Formula=#Day359#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay360Active]
Measure=Calc
Formula=#Day360#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay361Active]
Measure=Calc
Formula=#Day361#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay362Active]
Measure=Calc
Formula=#Day362#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay363Active]
Measure=Calc
Formula=#Day363#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay364Active]
Measure=Calc
Formula=#Day364#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay365Active]
Measure=Calc
Formula=#Day365#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"

[MeasureDay366Active]
Measure=Calc
Formula=#Day366#
UpdateDivider=-1
Substitute="0":"#FontColorOn#","1":"#CalendarFontColor#"