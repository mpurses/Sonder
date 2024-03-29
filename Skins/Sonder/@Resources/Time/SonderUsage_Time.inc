; How I get data on number of Daily Active Sonder users (Loading a skin at least)
[MeasureRandomNumberScript]
Measure=Script
ScriptFile=#@#Scripts\RandomNumber.lua
[MeasureOnLoad]
Measure=Calc
Formula=Counter
IfCondition=MeasureOnLoad = 11
IfTrueAction=[!EnableMeasure MeasureSonderUsage][!CommandMeasure MeasureSonderUsage "Update"][!Delay 2000][!DisableMeasure MeasureSonderUsage]
[MeasureDayChange]
Measure=Time
Format=%#j
OnChangeAction=[!Delay 11000][!EnableMeasure MeasureSonderUsage][!CommandMeasure MeasureSonderUsage "Update"][!Delay 2000][!DisableMeasure MeasureSonderUsage]
[MeasureSonderUsage]
Measure=WebParser
Flags=ForceReload
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:80.0) Gecko/20100101 Firefox/80.0
URL=https://www.google-analytics.com/collect?tid=UA-172309273-1&v=1&cid=#RandomNumID#&dp=%2Fsonder-time&t=pageview&sr=#SCREENAREAWIDTH#x#SCREENAREAHEIGHT#&ul=#Language#
RegExp=(?siU)(.*)$
Disabled=1

; IF YOU WANT TO BE NOTIFIED OF UPDATES without opening the settings...
;[MeasureUpdateCheckerScript]
;Measure=Script
;ScriptFile=#@#Scripts\UpdateChecker.lua
;CheckForPrereleases=#CheckForPrereleases#
;UpdateAvailableAction=[!ActivateConfig "#ROOTCONFIG#\Settings" "! Settings-All.ini"]
;ParsingErrorAction=[!Log "Error parsing version numbers" "Error"]
;[MeasureUpdateCheck]
;Measure=WebParser
;URL=https://api.github.com/repos/mpurses/Sonder/releases
;RegExp=(?siU)^(.*)$
;StringIndex=1
;UpdateRate=86400
;OnConnectErrorAction=[!Log "Couldn't connect to update server" "Error"]
;FinishAction=[!CommandMeasure MeasureUpdateCheckerScript "CheckForUpdate('21.11.0', 'MeasureUpdateCheck')"]
;Disabled=(#notifyUpdates# = 0)
;DynamicVariables=1