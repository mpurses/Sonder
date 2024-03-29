; How I get data on number of Daily Active Sonder users.
[MeasureRandomNumberScript]
Measure=Script
ScriptFile=#@#Scripts\RandomNumber.lua
[MeasureOnLoad]
Measure=Calc
Formula=Counter
IfCondition=MeasureOnLoad = 16
IfTrueAction=[!EnableMeasure MeasureSonderUsage][!CommandMeasure MeasureSonderUsage "Update"][!Delay 2000][!DisableMeasure MeasureSonderUsage]
[MeasureDayChange]
Measure=Time
Format=%#j
OnChangeAction=[!Delay 16000][!EnableMeasure MeasureSonderUsage][!CommandMeasure MeasureSonderUsage "Update"][!Delay 2000][!DisableMeasure MeasureSonderUsage]
[MeasureSonderUsage]
Measure=WebParser
Flags=ForceReload
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:80.0) Gecko/20100101 Firefox/80.0
URL=https://www.google-analytics.com/collect?tid=UA-172309273-1&v=1&cid=#RandomNumID#&dp=%2Fsonder-date&t=pageview&sr=#SCREENAREAWIDTH#x#SCREENAREAHEIGHT#&ul=#Language#
RegExp=(?siU)(.*)$
Disabled=1