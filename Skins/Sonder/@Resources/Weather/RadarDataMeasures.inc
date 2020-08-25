[Rainmeter]
Update=1000

[Variables]
@Include=#@#Variables.inc

[MeasureUnixTimeData]
Measure=WebParser
Flags=Resync | NoCookies
URL=https://api.rainviewer.com/public/maps.json
RegExp=(?siU).(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*)]
;11 min
UpdateRate = 660
FinishAction=[!EnableMeasureGroup UnixTimes][!EnableMeasureGroup WorldImages]
Disabled=#ShowRadar#
DynamicVariables=1

;UNIX TIME STRINGS over past 130 minutes

[MeasureUnixTimeData1]
Measure=WebParser
URL=[MeasureUnixTimeData]
StringIndex=1
Group=UnixTimes
OnChangeAction=[!CommandMeasure MeasureRadarImageWorld1 Update]
Disabled=1

[MeasureUnixTimeData2]
Measure=WebParser
URL=[MeasureUnixTimeData]
StringIndex=2
Group=UnixTimes
OnChangeAction=[!CommandMeasure MeasureRadarImageWorld2 Update]
Disabled=1

[MeasureUnixTimeData3]
Measure=WebParser
URL=[MeasureUnixTimeData]
StringIndex=3
Group=UnixTimes
OnChangeAction=[!CommandMeasure MeasureRadarImageWorld3 Update]
Disabled=1

[MeasureUnixTimeData4]
Measure=WebParser
URL=[MeasureUnixTimeData]
StringIndex=4
Group=UnixTimes
OnChangeAction=[!CommandMeasure MeasureRadarImageWorld4 Update]
Disabled=1

[MeasureUnixTimeData5]
Measure=WebParser
URL=[MeasureUnixTimeData]
StringIndex=5
Group=UnixTimes
OnChangeAction=[!CommandMeasure MeasureRadarImageWorld5 Update]
Disabled=1

[MeasureUnixTimeData6]
Measure=WebParser
URL=[MeasureUnixTimeData]
StringIndex=6
Group=UnixTimes
OnChangeAction=[!CommandMeasure MeasureRadarImageWorld6 Update]
Disabled=1

[MeasureUnixTimeData7]
Measure=WebParser
URL=[MeasureUnixTimeData]
StringIndex=7
Group=UnixTimes
OnChangeAction=[!CommandMeasure MeasureRadarImageWorld7 Update]
Disabled=1

[MeasureUnixTimeData8]
Measure=WebParser
URL=[MeasureUnixTimeData]
StringIndex=8
Group=UnixTimes
OnChangeAction=[!CommandMeasure MeasureRadarImageWorld8 Update]
Disabled=1

[MeasureUnixTimeData9]
Measure=WebParser
URL=[MeasureUnixTimeData]
StringIndex=9
Group=UnixTimes
OnChangeAction=[!CommandMeasure MeasureRadarImageWorld9 Update]
Disabled=1

[MeasureUnixTimeData10]
Measure=WebParser
URL=[MeasureUnixTimeData]
StringIndex=10
Group=UnixTimes
OnChangeAction=[!CommandMeasure MeasureRadarImageWorld10 Update]
Disabled=1

[MeasureUnixTimeData11]
Measure=WebParser
URL=[MeasureUnixTimeData]
StringIndex=11
Group=UnixTimes
OnChangeAction=[!CommandMeasure MeasureRadarImageWorld11 Update]
Disabled=1

[MeasureUnixTimeData12]
Measure=WebParser
URL=[MeasureUnixTimeData]
StringIndex=12
Group=UnixTimes
OnChangeAction=[!CommandMeasure MeasureRadarImageWorld12 Update]
Disabled=1

[MeasureUnixTimeData13]
Measure=WebParser
URL=[MeasureUnixTimeData]
StringIndex=13
Group=UnixTimes
OnChangeAction=[!CommandMeasure MeasureRadarImageWorld13 Update]
Disabled=1

;;===========================IMAGES==========================
[MeasureRadarImageWorld1]
Measure=WebParser
UpdateRate = 660
URL=https://tilecache.rainviewer.com/v2/composite/[&MeasureUnixTimeData1]/4000/#RadarColor#/0_1.png
Download=1
DynamicVariables=1
Group=WorldImages
Disabled=1

[MeasureRadarImageWorld2]
Measure=WebParser
UpdateRate = 660
URL=https://tilecache.rainviewer.com/v2/composite/[&MeasureUnixTimeData2]/4000/#RadarColor#/0_1.png
Download=1
DynamicVariables=1
Group=WorldImages
Disabled=1

[MeasureRadarImageWorld3]
Measure=WebParser
UpdateRate = 660
URL=https://tilecache.rainviewer.com/v2/composite/[&MeasureUnixTimeData3]/4000/#RadarColor#/0_1.png
Download=1
DynamicVariables=1
Group=WorldImages
Disabled=1

[MeasureRadarImageWorld4]
Measure=WebParser
UpdateRate = 660
URL=https://tilecache.rainviewer.com/v2/composite/[&MeasureUnixTimeData4]/4000/#RadarColor#/0_1.png
Download=1
DynamicVariables=1
Group=WorldImages
Disabled=1

[MeasureRadarImageWorld5]
Measure=WebParser
UpdateRate = 660
URL=https://tilecache.rainviewer.com/v2/composite/[&MeasureUnixTimeData5]/4000/#RadarColor#/0_1.png
Download=1
DynamicVariables=1
Group=WorldImages
Disabled=1

[MeasureRadarImageWorld6]
Measure=WebParser
UpdateRate = 660
URL=https://tilecache.rainviewer.com/v2/composite/[&MeasureUnixTimeData6]/4000/#RadarColor#/0_1.png
Download=1
DynamicVariables=1
Group=WorldImages
Disabled=1

[MeasureRadarImageWorld7]
Measure=WebParser
UpdateRate = 660
URL=https://tilecache.rainviewer.com/v2/composite/[&MeasureUnixTimeData7]/4000/#RadarColor#/0_1.png
Download=1
DynamicVariables=1
Group=WorldImages
Disabled=1

[MeasureRadarImageWorld8]
Measure=WebParser
UpdateRate = 660
URL=https://tilecache.rainviewer.com/v2/composite/[&MeasureUnixTimeData8]/4000/#RadarColor#/0_1.png
Download=1
DynamicVariables=1
Group=WorldImages
Disabled=1

[MeasureRadarImageWorld9]
Measure=WebParser
UpdateRate = 660
URL=https://tilecache.rainviewer.com/v2/composite/[&MeasureUnixTimeData9]/4000/#RadarColor#/0_1.png
Download=1
DynamicVariables=1
Group=WorldImages
Disabled=1

[MeasureRadarImageWorld10]
Measure=WebParser
UpdateRate = 660
URL=https://tilecache.rainviewer.com/v2/composite/[&MeasureUnixTimeData10]/4000/#RadarColor#/0_1.png
Download=1
DynamicVariables=1
Group=WorldImages
Disabled=1

[MeasureRadarImageWorld11]
Measure=WebParser
UpdateRate = 660
URL=https://tilecache.rainviewer.com/v2/composite/[&MeasureUnixTimeData11]/4000/#RadarColor#/0_1.png
Download=1
DynamicVariables=1
Group=WorldImages
Disabled=1

[MeasureRadarImageWorld12]
Measure=WebParser
UpdateRate = 660
URL=https://tilecache.rainviewer.com/v2/composite/[&MeasureUnixTimeData12]/4000/#RadarColor#/0_1.png
Download=1
DynamicVariables=1
Group=WorldImages
Disabled=1

[MeasureRadarImageWorld13]
Measure=WebParser
UpdateRate = 660
URL=https://tilecache.rainviewer.com/v2/composite/[&MeasureUnixTimeData13]/4000/#RadarColor#/0_1.png
Download=1
DynamicVariables=1
Group=WorldImages
Disabled=1

[MeasureRadarImageWorldLoopNumber]
Measure=Loop
StartValue=1
EndValue=13
Increment=1
LoopCount=0
Group=WorldImages
Disabled=1

[MeasureRadarImageWorldMeasureNameAll]
Measure=String
String=[*MeasureRadarImageWorld[&MeasureRadarImageWorldLoopNumber]*]
DynamicVariables=1
Group=WorldImages
Disabled=1

[MeasureRadarImageWorldAllGIF]
Measure=String
String=[&MeasureRadarImageWorld[&MeasureRadarImageWorldLoopNumber]]
DynamicVariables=1
Group=WorldImages
Disabled=1
