[Rainmeter]
Group=AllNoWeather
;---------------------------------------------------------------------
; MEASURES

; Technically there is no max to the graph. The Histogram graph autoscales based on the current displayed history.  This way when there is just a little internet traffic(lets say 100 kb/s), you actually see it in the graph vs. it being so tiny it isn't displayed.
; You might see it autoscale when you have little network traffic, followed by a larger download. Those smaller bars will get scaled down to basically nothing.
; If you do want it to have a hard set Max: 
; First in "Styles-Network.inc" > go to [StyleSystemGraphGraph] > set AutoScale=0.
; In "Network.inc" > [MeasureNetInFloating] & [MeasureNetOutFloating] > change the max value to whatever your max is. Currently it's set to ~1 Mb/s (1000000  bytes)
 ; https://docs.rainmeter.net/tips/network-skin/ 
 ; https://docs.rainmeter.net/manual/measures/net/ 
; You may see other max values in places throughout the code, but they are not used. (For a single bar graph in percent that is not used right now. Which is what the max value would be better used for.)

; [Variables]
; maxBitsPerSec=0
; maxBytesPerSec=0
; textNetInOutPeakBits="0.0000 k"
; textNetInOutPeakBytes="0.0000 k"
; textNetInBits=""
; textNetInBytes=""
; textNetInSessionTotal=""
; textNetInTotal=""
; textNetOutBits=""
; textNetOutBytes=""
; textNetOutSessionTotal=""
; textNetOutTotal=""
; interfaceEthernet=""
; interfaceWireless=""
; interfaceOther=""

; [MeasureFixedPrecisionFormatScript]
; Measure=Script
; ScriptFile=#@#Scripts\FixedPrecisionFormat.lua

; ; ------------------------------
; ; NETWORK TRAFFIC
; [MeasureAdapterStatusEthernet]
; Measure=Plugin
; Plugin=ActiveNet
; Type=NetStatus
; Name=#interfaceEthernet#
; Group=ActiveNet
; UpdateDivider=-1

; [MeasureAdapterStatusWireless]
; Measure=Plugin
; Plugin=ActiveNet
; Type=NetStatus
; Name=#interfaceWireless#
; Group=ActiveNet
; UpdateDivider=-1

; [MeasureAdapterStatusOther]
; Measure=Plugin
; Plugin=ActiveNet
; Type=NetStatus
; Name=#interfaceOther#
; Group=ActiveNet
; UpdateDivider=-1

; @includeNetworkTraffic=#ROOTCONFIGPATH#Network\NetworkTraffic.inc
; ; Calculations
; [MeasureNetInBytes]
; Measure=Calc
; Formula=MeasureNetInEthernetBytes + MeasureNetInWirelessBytes + MeasureNetInOtherBytes + MeasureNetInBestBytes
; IfCondition=1
; IfTrueAction=[!SetVariable textNetInBytes [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetInBytes],3,'1k')]]
; OnChangeAction=[!SetVariable textNetInBytes [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetInBytes],3,'1k')]]
; DynamicVariables=1

; [MeasureNetInBitsCalc]
; Measure=Calc
; Formula=MeasureNetInBytes * 8
; IfCondition=1
; IfTrueAction=[!SetVariable textNetInBits [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetInBitsCalc],3,'1k')]]
; OnChangeAction=[!SetVariable textNetInBits [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetInBitsCalc],3,'1k')]]
; DynamicVariables=1

; [MeasureNetInBytesSessionTotal]
; Measure=Calc
; Formula=MeasureNetInEthernetBytesSessionTotal + MeasureNetInWirelessBytesSessionTotal + MeasureNetInOtherBytesSessionTotal + MeasureNetInBestBytesSessionTotal
; IfCondition=1
; IfTrueAction=[!SetVariable textNetInSessionTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetInBytesSessionTotal],4,'1k')]]
; OnChangeAction=[!SetVariable textNetInSessionTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetInBytesSessionTotal],4,'1k')]]
; DynamicVariables=1

; [MeasureNetInBytesTotal]
; Measure=Calc
; Formula=MeasureNetInEthernetBytesTotal + MeasureNetInWirelessBytesTotal + MeasureNetInOtherBytesTotal + MeasureNetInBestBytesTotal
; IfCondition=1
; IfTrueAction=[!SetVariable textNetInTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetInBytesTotal],4,'1k')]]
; OnChangeAction=[!SetVariable textNetInTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetInBytesTotal],4,'1k')]]
; DynamicVariables=1

; [MeasureNetOutBytes]
; Measure=Calc
; Formula=MeasureNetOutEthernetBytes + MeasureNetOutWirelessBytes + MeasureNetOutOtherBytes + MeasureNetOutBestBytes
; IfCondition=1
; IfTrueAction=[!SetVariable textNetOutBytes [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetOutBytes],3,'1k')]]
; OnChangeAction=[!SetVariable textNetOutBytes [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetOutBytes],3,'1k')]]
; DynamicVariables=1

; [MeasureNetOutBitsCalc]
; Measure=Calc
; Formula=MeasureNetOutBytes * 8
; IfCondition=1
; IfTrueAction=[!SetVariable textNetOutBits [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetOutBitsCalc],3,'1k')]]
; OnChangeAction=[!SetVariable textNetOutBits [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetOutBitsCalc],3,'1k')]]
; DynamicVariables=1

; [MeasureNetOutBytesSessionTotal]
; Measure=Calc
; Formula=MeasureNetOutEthernetBytesSessionTotal + MeasureNetOutWirelessBytesSessionTotal + MeasureNetOutOtherBytesSessionTotal + MeasureNetOutBestBytesSessionTotal
; IfCondition=1
; IfTrueAction=[!SetVariable textNetOutSessionTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetOutBytesSessionTotal],4,'1k')]]
; OnChangeAction=[!SetVariable textNetOutSessionTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetOutBytesSessionTotal],4,'1k')]]
; DynamicVariables=1

; [MeasureNetOutBytesTotal]
; Measure=Calc
; Formula=MeasureNetOutEthernetBytesTotal + MeasureNetOutWirelessBytesTotal + MeasureNetOutOtherBytesTotal + MeasureNetOutBestBytesTotal
; IfCondition=1
; IfTrueAction=[!SetVariable textNetOutTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetOutBytesTotal],4,'1k')]]
; OnChangeAction=[!SetVariable textNetOutTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetOutBytesTotal],4,'1k')]]
; DynamicVariables=1

; ; ------------------------------
; ; PING

; ; [MeasurePing]
; ; Measure=Plugin
; ; Plugin=PingPlugin
; ; DestAddress=#pingUrl#
; ; FinishAction=[!UpdateMeter PingString][!Redraw]

; ; ------------------------------
; ; MAX TRANSFER SPEED

; [MeasureNetInOutPeakBits]
; Measure=Calc
; Formula=Max(Max(MeasureNetInBitsCalc, MeasureNetOutBitsCalc), #maxBitsPerSec#)
; IfConditionMode=1
; IfCondition=(MeasureNetInOutPeakBits > #maxBitsPerSec#)
; IfTrueAction=[!SetVariable maxBitsPerSec [MeasureNetInOutPeakBits:]][!SetVariable textNetInOutPeakBits [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetInOutPeakBits],5,'1k')]]
; DynamicVariables=1
; Group=NetInOut

; [MeasureNetInOutPeakBytes]
; Measure=Calc
; Formula=Max(Max(MeasureNetInBytes, MeasureNetOutBytes), #maxBytesPerSec#)
; IfConditionMode=1
; IfCondition=(MeasureNetInOutPeakBytes > #maxBytesPerSec#)
; IfTrueAction=[!SetVariable maxBytesPerSec [MeasureNetInOutPeakBytes:]][!SetVariable textNetInOutPeakBytes [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureNetInOutPeakBytes],5,'1k')]]
; DynamicVariables=1
; Group=NetInOut




;==================================================
;Network Graph Measures

[MeasureNetInFloating]
Measure=NetIn
;1 MB/s
MaxValue=1000000
MinValue=0
;Interface=Best
;DynamicVariables=1
;OnUpdateAction=[!CommandMeasure ScriptGraph "Graph()"]

[MeasureNetInPercent]
Measure=Calc
Formula=MeasureNetInFloating / #NetworkMaxDownload#

[MeasureNetOutFloating]
Measure=NetOut
;1 MB/s
MaxValue=1000000
MinValue=0
;Interface=Best
;DynamicVariables=1

[MeasureNetOutPercent]
Measure=Calc
Formula=MeasureNetOutFloating / #NetworkMaxUpload#

[MeasureSSID]
Measure=Plugin
Plugin=WifiStatus
WifiInfoType=SSID
WifiIntfID=0
WifiListStyle=0

[MeasureWiFi]
Measure=Plugin
Plugin=WifiStatus
WifiInfoType=QUALITY
WifiIntfID=0
WifiListStyle=0

[MeasureLAN]
Measure=Plugin
Plugin=SysInfo
SysInfoType=IP_ADDRESS
SysInfoData=1

[MeasureWAN]
Measure=Plugin
Plugin=WebParser
UpdateRate=21600
Url=http://checkip.dyndns.org
RegExp="(?siU)Address: (.*)</body>"
StringIndex=1

;---------------------------------------------------------------------
; METERS

;-----------------------
; FRAME

[Background]
Meter=IMAGE
MeterStyle=StyleSidebarBackground | StyleSystem#Variant#Background

[Border1]
Meter=IMAGE
MeterStyle=StyleSystem#Variant#Border | StyleSystem#Variant#Border1
;Hidden=#GraphVariant#

[VerticalBorderA]
Meter=IMAGE
MeterStyle=StyleSystem#Variant#VerticalBorderA
;Hidden=#GraphVariant#

[VerticalBorderB]
Meter=IMAGE
MeterStyle=StyleSystem#Variant#VerticalBorderB
;Hidden=#GraphVariant#

[Border2]
Meter=IMAGE
MeterStyle=StyleSystem#Variant#Border | StyleSystem#Variant#Border2
;Hidden=#GraphVariant#

;-----------------------
; LABELS & TEXT

[LabelSSID]
Meter=STRING
MeterStyle=StyleSystem#Variant#Label | StyleSystem#Variant#Label1
Text="SSID"
Hidden=#GraphVariant#

[SSID]
Meter=STRING
MeterStyle=StyleSystem#Variant#Text | StyleSystem#Variant#Text1
MeasureName=MeasureSSID
Hidden=#GraphVariant#

[LabelWiFi]
Meter=STRING
MeterStyle=StyleSystem#Variant#Label | StyleSystem#Variant#Label2
Text="WiFi"
Hidden=#GraphVariant#

[WiFi]
Meter=STRING
MeterStyle=StyleSystem#Variant#Text | StyleSystem#Variant#Text2
MeasureName=MeasureWiFi
Postfix="%"
Hidden=#GraphVariant#


[LabelLAN]
Meter=STRING
MeterStyle=StyleSystem#Variant#Label | StyleSystem#Variant#Label3
Text="LAN"
Hidden=#GraphVariant#

[LAN]
Meter=STRING
MeterStyle=StyleSystem#Variant#Text | StyleSystem#Variant#Text3 | StyleSystem#Variant#TextDark
MeasureName=MeasureLAN
Hidden=#GraphVariant#

[LabelWAN]
Meter=STRING
MeterStyle=StyleSystem#Variant#Label | StyleSystem#Variant#Label4
Text="WAN"
Hidden=#GraphVariant#

[WAN]
Meter=STRING
MeterStyle=StyleSystem#Variant#Text | StyleSystem#Variant#Text4 | StyleSystem#Variant#TextDark
MeasureName=MeasureWAN
Hidden=#GraphVariant#
;Text="12.345.678.90"
;Uncomment this text when taking screenshots to protect your IP.

;-----------------------
; GRAPH FRAME

[Border3]
Meter=IMAGE
MeterStyle=StyleSystem#Variant#Border | StyleSystem#Variant#Border3

[VerticalBorderC]
Meter=IMAGE
MeterStyle=StyleSystem#Variant#VerticalBorderC

[Border4]
Meter=IMAGE
MeterStyle=StyleSystem#Variant#Border | StyleSystem#Variant#Border4

[Border5]
Meter=IMAGE
MeterStyle=StyleSystem#Variant#Border | StyleSystem#Variant#Border5

;-----------------------
; HISTOGRAMS

[NetOut]
Meter=Histogram
MeterStyle=StyleSystem#Variant#Graph | StyleSystem#Variant#Graph1
MeasureName=MeasureNetOut#SystemGraphType#
LeftMouseUpAction=["perfmon.exe" "/res"]
ToolTipText="Open Resource Monitor"

[NetIn]
Meter=Histogram
MeterStyle=StyleSystem#Variant#Graph | StyleSystem#Variant#Graph2
MeasureName=MeasureNetIn#SystemGraphType#
LeftMouseUpAction=["perfmon.exe" "/res"]
ToolTipText="Open Resource Monitor"

; ; Script for generating the line graph
; [ScriptGraph]
; Measure=Script
; ScriptFile=#@#scripts\GraphShape.lua
; ShapeWidth=(#SidebarWidthNetwork#*#ScaleValueNetwork#)
; ShapeHeight=(30*#ScaleValueNetwork#)
; InputMeasure=MeasureNetOutFloating
; OutputGraph=ShapeGraph
; AutoScale=1

; ; Measure to get CPU usage
; ;[MeasureCPU]
; ;Measure=CPU
; ;OnUpdateAction=[!CommandMeasure ScriptGraph "Graph()"]

; ; Shape graph
; [ShapeGraph]
; Meter=Shape
; X=(#Scale#*(10+(4*#HideBordersBottom#)))
; Y=(125*#ScaleValueNetwork#)
; H=(37*#ScaleValueNetwork#)
; Shape=Path Graph1 | StrokeWidth (3*#ScaleValueNetwork#) | Stroke Color #NetworkUpColor# | StrokeLineJoin Round
; Shape2=Path Graph2 | StrokeWidth 0 | Fill LinearGradient Grad | StrokeLineJoin Round
; Graph1=0,0|Lineto 0,0
; Graph2=0,0|Lineto 0,0
; Grad = 270 | #NetworkUpColor#,225 ; 0 | #NetworkUpColor#,0 ; 1
; Padding=0,0,0,(10*#ScaleValueNetwork#)

;-----------------------
; LOWER TEXT

[NetOutLabel]
Meter=STRING
MeterStyle=StyleSystem#Variant#GraphLabel | StyleSystem#Variant#GraphLabel1
; Prefix="· "
Text="UP"
; ToolTipText="                          Net Out:        Net In:#CRLF#Speed:              #textNetOutBits#b/s   #textNetInBits#b/s#CRLF#Amount:          #textNetOutBytes#B/s   #textNetInBytes#B/s#CRLF#Peak Speed:     #textNetInOutPeakBits#b/s#CRLF#Peak Amount: #textNetInOutPeakBytes#B/s#CRLF#Amount:          #textNetOutBytes#B/s   #textNetInBytes#B/s#CRLF#Session Total:   #textNetOutSessionTotal#B   #textNetInSessionTotal#B#CRLF#Total:                 #textNetOutTotal#B   #textNetInTotal#B"
; DynamicVariables=1

[NetOutNumber]
Meter=STRING
MeterStyle=StyleSystem#Variant#GraphText | StyleSystem#Variant#GraphText1
MeasureName=MeasureNetOutFloating
;Text="%1/s"
AutoScale=1
NumOfDecimals=0

[NetInLabel]
Meter=STRING
MeterStyle=StyleSystem#Variant#GraphLabel | StyleSystem#Variant#GraphLabel2
Text="DOWN"
; Postfix=" ·"

[NetInNumber]
Meter=STRING
MeterStyle=StyleSystem#Variant#GraphText | StyleSystem#Variant#GraphText2
MeasureName=MeasureNetInFloating
;Text="%1/s"
AutoScale=1
NumOfDecimals=0

; ; NET IN/OUT
; #textNetOutBits#b/s
; #textNetOutBytes#B/s
; #textNetInBits#b/s
; #textNetInBytes#B/s

; ; NETWORK PEAKS
; #textNetInOutPeakBits#b/s
; #textNetInOutPeakBytes#B/s

; ; ------------------------------
; ; NETWORK TOTALS

; #textNetOutSessionTotal#B
; #textNetOutTotal#B

; #textNetInSessionTotal#B
; #textNetInTotal#B