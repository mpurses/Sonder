[Variables]
textMemoryUsed=""
textMemoryTotal=""

; ==================================================
;  MEASURES

[MeasureFixedPrecisionFormatScript]
Measure=Script
ScriptFile=#scriptPath#FixedPrecisionFormat.lua

[MeasureSettingsScript]
Measure=Script
ScriptFile=#scriptPath#Settings.lua

[MeasureHwinfoDetect]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-Clock-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-Clock-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-Clock-EntryId]
HWiNFOType=CurrentValue
HWiNFOLogHandler=2
IfCondition=(MeasureHwinfoDetect = -9000)
IfTrueAction=[!ShowMeterGroup NoHwinfo][!Redraw]
IfCondition2=(MeasureHwinfoDetect <> -9000)
IfTrueAction2=[!HideMeterGroup NoHwinfo][!Redraw]

; ------------------------------
; GENERAL

[MeasureGpuName]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-Clock-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-Clock-SensorInstance]
HWiNFOType=SensorNameCustom
Substitute="GPU \[#\d\]: ":"",":":"","":"_____"
RegExpSubstitute=1
IfMatch=(?i)(.*Intel.*)
IfMatchAction=[!SetOption MeterGpuIcon Fill "Fill Color #colorIntel#"][!UpdateMeter MeterGpuIcon]
IfMatch2=(?i)(.*AMD.*)
IfMatchAction2=[!SetOption MeterGpuIcon Fill "Fill Color #colorAMD#"][!UpdateMeter MeterGpuIcon]
IfMatch3=(?i)(.*Snapdragon.*)
IfMatchAction3=[!SetOption MeterGpuIcon Fill "Fill Color #colorSnapdragon#"][!UpdateMeter MeterGpuIcon]
IfMatch4=(?i)(.*Nvidia.*)
IfMatchAction4=[!SetOption MeterGpuIcon Fill "Fill Color #colorNvidia#"][!UpdateMeter MeterGpuIcon]

[MeasureCustomGpuName]
Measure=String
String=#gpuName#
Substitute="^auto$":"[MeasureGpuName]"
RegExpSubstitute=1
DynamicVariables=1

[MeasureGpuClockSpeed]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-Clock-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-Clock-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-Clock-EntryId]
HWiNFOType=CurrentValue

[MeasureGpuTemperature]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-Temp-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-Temp-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-Temp-EntryId]
HWiNFOType=CurrentValue
MinValue=0
MaxValue=#maxGpuTemp#

[MeasureGpuUsage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-CoreLoad-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-CoreLoad-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-CoreLoad-EntryId]
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

; ------------------------------
; VRAM

[MeasureMemoryClockSpeed]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-MemoryClock-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-MemoryClock-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-MemoryClock-EntryId]
HWiNFOType=CurrentValue
Disabled=(#showMemoryClock# = 0)
Group=MemoryClock

[MeasureVramUsed]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-MemoryAlloc-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-MemoryAlloc-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-MemoryAlloc-EntryId]
HWiNFOType=CurrentValue
Group=Memory

[MeasureVramUsedCalc]
Measure=Calc
Formula=MeasureVramUsed * 1024 * 1024
IfCondition=1
IfTrueAction=[!SetVariable textMemoryUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureVramUsedCalc],3,'1k')]]
OnChangeAction=[!SetVariable textMemoryUsed [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureVramUsedCalc],3,'1k')]]
Group=Memory

[MeasureVramUsage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-MemoryUsage-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-MemoryUsage-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-MemoryUsage-EntryId]
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100
Group=Memory

[MeasureVramTotal]
Measure=Calc
Formula=MeasureVramUsedCalc * 100 / max(MeasureVramUsage,1)
IfCondition=(#useManualMaxVram# = 0)
IfTrueAction=[!SetVariable textMemoryTotal [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureVramTotal],1,'1k')]]
IfCondition2=(#useManualMaxVram# = 1)
IfTrueAction2=[!SetVariable textMemoryTotal [&MeasureFixedPrecisionFormatScript:FormatNumber('[#maxVram]000000',1,'2k')]]
IfConditionMode=1
DynamicVariables=1
Group=Memory

[MeasureVramUsageAlt]
Measure=Calc
Formula=MeasureVramUsedCalc / #maxVram#0000
Disabled=(#useManualMaxVram# = 0)
Group=Memory
DynamicVariables=1
IfCondition=1
IfTrueAction=[!SetOption MeterGpuMemoryUsage Text "%2%"]

[MeasureVramUsageAltBar]
Measure=Calc
Formula=MeasureVramUsedCalc / #maxVram#000000
Disabled=(#useManualMaxVram# = 0)
Group=Memory
DynamicVariables=1
IfCondition=1
IfTrueAction=[!SetOption MeterGpuMemoryUsageBar MeasureName "MeasureVramUsageAltBar"]

; ------------------------------
; FAN

[MeasureGpuFanSpeed]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-FanSpeed-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-FanSpeed-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-FanSpeed-EntryId]
HWiNFOType=CurrentValue
Disabled=#useMoboFanSensor#

[MeasureGpuFanUsage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-FanUsage-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-FanUsage-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-FanUsage-EntryId]
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100

; ------------------------------
; MISC

[MeasureVideoClock]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-VideoClock-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-VideoClock-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-VideoClock-EntryId]
HWiNFOType=CurrentValue
Disabled=(#showVideoClock# = 0)

[MeasureMemoryControllerLoad]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-MemController-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-MemController-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-MemController-EntryId]
HWiNFOType=CurrentValue
MinValue=0
MaxValue=100
Disabled=(#showMemoryController# = 0)

[MeasureCoreVoltage]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-GPU[#gpuIndex]-CoreVoltage-SensorId]
HWiNFOSensorInstance=[#HWiNFO-GPU[#gpuIndex]-CoreVoltage-SensorInstance]
HWiNFOEntryId=[#HWiNFO-GPU[#gpuIndex]-CoreVoltage-EntryId]
HWiNFOType=CurrentValue
Disabled=(#showCoreVoltage# = 0)

[MeasureCalcCompactVramLabel]
Measure=Calc
Formula=[MeterGpuMemoryUsageLabel:W] + [MeterGpuMemoryUsageFraction:W] + [MeterGpuMemoryUsage:W] + 10
IfCondition=#CURRENTSECTION# > #contentWidth#
IfTrueAction=[!SetOptionGroup MemoryUsageLabels FontFace "#*fontFaceCn*#"][!UpdateMeterGroup MemoryUsageLabels][!Redraw]
IfFalseAction=[!SetOptionGroup MemoryUsageLabels FontFace "#*fontFace*#"][!UpdateMeterGroup MemoryUsageLabels][!Redraw]
DynamicVariables=1

; ==================================================
;  METERS

[MeterBackground]
Meter=Shape
MeterStyle=StyleBackground

; ------------------------------
; GADGET HEADER

[MeterConfigButton_]
Meter=Shape
MeterStyle=StyleConfigButtonNew

[MeterGpuIcon]
Meter=Shape
X=#contentMargin#
Y=#contentMargin#
Shape = Path Path1 | StrokeWidth 0 | Extend Fill
Shape2 = Path Path2 | StrokeWidth 0
Shape3 = Path Path3 | StrokeWidth 0
Shape4 = Path Path4 | StrokeWidth 0
Shape5 = Path Path5 | StrokeWidth 0
Shape6 = Path Path6 | StrokeWidth 0
Shape7 = Path Path7 | StrokeWidth 0
Shape8 = Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | XOR Shape7 | Scale 0.08,0.08,0,0 | Offset 1,-2
Path1 = 9.5, 36 | CurveTo 17.1, 41, 8.4, 39.5, 10.7, 41 | LineTo 23, 41 | LineTo 23, 54 | CurveTo 21, 67, 23, 66.3, 22.9, 67 | CurveTo 19, 79.1, 19.1, 67, 19, 67.7 | CurveTo 21, 91.7, 19, 90.3, 19.1, 91.2 | CurveTo 23, 100.6, 22.8, 92.2, 23, 93.1 | CurveTo 21, 109, 23, 108.3, 22.8, 109 | CurveTo 19, 121, 19.1, 109, 19, 109.7 | CurveTo 21, 133, 19, 132.3, 19.1, 133 | CurveTo 23.2, 149.2, 22.8, 133, 23, 133.8 | LineTo 23.5, 165.5 | LineTo 29.5, 165.5 | LineTo 29.8, 158.2 | LineTo 30.1, 151 | LineTo 100.6, 151 | CurveTo 181.7, 145.4, 177.2, 151, 174.1, 151.2 | CurveTo 187.5, 138, 183.5, 144, 186.1, 140.7 | LineTo 190, 133.1 | LineTo 190, 102 | CurveTo 183.7, 60.2, 190, 67.7, 189.8, 66.5 | CurveTo 176.5, 54.7, 181.9, 58.3, 178.7, 55.9 | CurveTo 101.3, 52.2, 172.5, 52.5, 172.1, 52.5 | LineTo 30.1, 51.9 | LineTo 29.8, 43.2 | LineTo 29.5, 34.5 | LineTo 19.8, 34.2 | CurveTo 9.5, 36, 10.8, 33.9, 10.1, 34.1 | ClosePath 1
Path2 = 148.9, 75.6 | CurveTo 168, 102, 160, 78.9, 168, 89.9 | CurveTo 120.2, 119.5, 167.9, 127.4, 137.1, 138.7 | CurveTo 113, 102, 116, 114.7, 113, 107.4 | CurveTo 125.5, 79, 113, 93.9, 118.9, 83.1 | CurveTo 148.9, 75.6, 133.8, 73.9, 140.1, 72.9 | ClosePath 1
Path3 = 122.6, 83.6 | CurveTo 124.6, 93, 120.1, 86, 120.7, 88.7 | CurveTo 130.9, 97, 127.1, 95.8, 129.1, 97 | CurveTo 132.2, 85.7, 137.2, 97, 137.8, 91.2 | CurveTo 122.6, 83.6, 128.1, 81.7, 125.1, 81.1 | ClosePath 1
Path4 = 149.1, 86.4 | CurveTo 145.2, 92.8, 146, 89.5, 144.9, 91.4 | CurveTo 142, 94.3, 145.7, 94.6, 145.4, 94.7 | CurveTo 135.5, 96.5, 138.8, 93.8, 137.7, 94.2 | CurveTo 133.3, 103, 133.2, 98.7, 132.8, 99.8 | CurveTo 131.8, 106.2, 133.7, 106.4, 133.6, 106.7 | CurveTo 125.4, 110.1, 130.4, 105.9, 128.5, 107 | CurveTo 126.3, 121, 119.3, 116.1, 119.7, 121 | CurveTo 136, 111.1, 130.4, 121, 136, 115.3 | CurveTo 138, 109, 136, 108.3, 136.2, 108 | CurveTo 148.4, 100.9, 142.8, 111.6, 148.5, 107.1 | CurveTo 150.5, 97, 148.3, 97.5, 148.5, 97 | CurveTo 159.6, 89.8, 153.4, 97, 157.6, 93.7 | CurveTo 159.5, 84.4, 161, 87.1, 161, 86.6 | CurveTo 149.1, 86.4, 157.2, 80.8, 154, 81.4 | ClosePath 1
Path5 = 146.7, 107.8 | CurveTo 148.6, 117, 144.2, 110.6, 144.6, 112.6 | CurveTo 155.6, 121, 151.5, 120.2, 152.9, 121 | CurveTo 159.9, 118.8, 158.3, 121, 159.3, 120.5 | CurveTo 155.9, 109.5, 161.1, 115.5, 160.2, 113.4 | CurveTo 146.7, 107.8, 151.5, 105.6, 149.1, 105.1 | ClosePath 1
Path6 = 33.2, 153.9 | CurveTo 32.2, 157.6, 32.4, 154.3, 32, 156 | LineTo 32.5, 160.5 | LineTo 72.8, 160.8 | LineTo 113.1, 161 | LineTo 112.8, 157.3 | LineTo 112.5, 153.5 | LineTo 73.5, 153.3 | CurveTo 33.2, 153.9, 52.1, 153.1, 33.9, 153.4 | ClosePath 1
Path7 = 125.7, 153.6 | CurveTo 125, 157.7, 125.3, 154, 125, 155.8 | LineTo 125, 161 | LineTo 146.8, 160.8 | LineTo 168.5, 160.5 | LineTo 168.5, 153.5 | LineTo 147.4, 153.2 | CurveTo 125.7, 153.6, 135.9, 153.1, 126.1, 153.3 | ClosePath 1
Fill=Fill Color #colorAccent#
TransformationMatrix=#transformationMatrix#

[MeterGadgetTitle]
Meter=String
MeterStyle=StyleString | StyleStringGadgetLabel
X=4R
Y=200
Text=GPU Meter
DynamicVariables=1

; ------------------------------
; GENERAL INFO

[MeterGpuName]
Meter=String
MeterStyle=StyleString | StyleStringCenterAlign
MeasureName=MeasureCustomGpuName
Y=((#showGpuName# = 1) ? #rowSpacing# : 0)R
W=(#contentWidth# - 4)
ClipString=1
Text=%1
Hidden=(#showGpuName# = 0)

[MeterGpuClock]
Meter=String
MeterStyle=StyleString
MeasureName=MeasureGpuClockSpeed
Y=(#rowSpacing# + 1)R
Text=Clock: %1 MHz

[MeterGpuTemp]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureGpuTemperature
Text=%1#deg##tempUnits#

[MeterGpuCoreUsageLabel]
Meter=String
MeterStyle=StyleString
Text=Usage:
Group=GpuUsage

[MeterGpuCoreUsage]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureGpuUsage
Text=%1%
Group=GpuUsage

[MeterGpuCoreUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureGpuUsage
BarColor=#colorCoreUsage#
DynamicVariables=1
Group=GpuUsage

; ------------------------------
; MEMORY

[MeterGpuMemoryClockLabel]
Meter=String
MeterStyle=StyleString
Y=((#showMemoryClock# = 1) ? #rowSpacing# : 0)R
Text=Memory Clock:
Group=MemoryClock
Hidden=(#showMemoryClock# = 0)
DynamicVariables=1
Group=MemoryClock

[MeterGpuMemoryClock]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureMemoryClockSpeed
Text=%1 MHz
Group=MemoryClock
Hidden=(#showMemoryClock# = 0)

[MeterGpuMemoryUsageLabel]
Meter=String
MeterStyle=StyleString
Text=VRAM:
Group=GpuVram | MemoryUsageLabels

[MeterGpuMemoryUsageFraction]
Meter=String
MeterStyle=StyleString | StyleStringInfo
Text=#textMemoryUsed#B / #textMemoryTotal#B
DynamicVariables=1
Group=GpuVram | MemoryUsageLabels

[MeterGpuMemoryUsage]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureVramUsage
MeasureName2=MeasureVramUsageAlt
Text=%1%
Group=GpuVram | MemoryUsageLabels
DynamicVariables=1

[MeterGpuMemoryUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureVramUsage
BarColor=#colorMemoryUsage#
DynamicVariables=1
Group=GpuVram

; ------------------------------
; FAN

[MeterGpuFanUsageLabel]
Meter=String
MeterStyle=StyleString
Y=((#showFanInfo# = 1) ? #rowSpacing# : -#barTextOffset#)R
Text=Fan:
Group=GpuFan
Hidden=(#showFanInfo# = 0)

[MeterGpuFanUsageSpeed]
Meter=String
MeterStyle=StyleString | StyleStringInfo
MeasureName=MeasureGpuFanSpeed
Text=%1 RPM
Group=GpuFan
Hidden=(#showFanInfo# = 0)

[MeterGpuFanUsage]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureGpuFanUsage
Text=%1%
Group=GpuFan
Hidden=(#showFanInfo# = 0)

[MeterGpuFanUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureGpuFanUsage
BarColor=#colorFanUsage#
DynamicVariables=1
Group=GpuFan
Hidden=(#showFanInfo# = 0)

; ------------------------------
; MISC

[MeterGpuMemoryControllerLabel]
Meter=String
MeterStyle=StyleString
Y=((#showMemoryController# = 1) ? #rowSpacing# : -#barTextOffset#)R
Text=Memory Controller:
Group=MemoryController
Hidden=(#showMemoryController# = 0)
Group=MemoryController

[MeterGpuMemoryController]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureMemoryControllerLoad
Text=%1%
Group=MemoryController
Hidden=(#showMemoryController# = 0)

[MeterGpuMemoryControllerBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureMemoryControllerLoad
BarColor=#colorMemoryController#
DynamicVariables=1
Group=MemoryController
Hidden=(#showMemoryController# = 0)

[MeterGpuVideoClockLabel]
Meter=String
MeterStyle=StyleString
Y=((#showVideoClock# = 1) ? #rowSpacing# : 0)R
Text=Video Clock:
Group=VideoClock
Hidden=(#showVideoClock# = 0)

[MeterGpuVideoClock]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureVideoClock
Text=%1 MHz
Group=VideoClock
Hidden=(#showVideoClock# = 0)

[MeterGpuCoreVoltageLabel]
Meter=String
MeterStyle=StyleString
Y=((#showCoreVoltage# = 1) ? #rowSpacing# : 0)R
Text=Core Voltage:
Group=CoreVoltage
Hidden=(#showCoreVoltage# = 0)

[MeterGpuCoreVoltage]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCoreVoltage
NumOfDecimals=3
Text=%1 V
Group=CoreVoltage
Hidden=(#showCoreVoltage# = 0)

; ------------------------------
; Graph

[MeterLineGraphBackground]
Meter=Shape
MeterStyle=StyleLineGraphBackground
Y=((#showVideoClock# = 1 || #showCoreVoltage# = 1) ? ((#showLineGraph# = 1) ? (#barTextOffset#) : -1) : ((#showLineGraph# = 1) ? #contentMarginAbs# : 1))R

[MeterLineGraph]
Meter=Line
MeterStyle=StyleLineGraph
LineCount=5
MeasureName=MeasureMemoryControllerLoad
MeasureName2=MeasureGpuFanUsage
MeasureName3=MeasureVramUsage
MeasureName4=MeasureGpuUsage
MeasureName5=MeasureGpuTemperature
Scale5=(100 / #maxGpuTemp#)
LineColor=#colorMemoryController#,(#showMemoryController# * 255)
LineColor2=#colorFanUsage#
LineColor3=#colorMemoryUsage#
LineColor4=#colorCoreUsage#
LineColor5=#colorTempGraph#,(#showTempGraph# * 255)
DynamicVariables=1

[MeterLineGraphBackgroundOverlay]
Meter=Shape
MeterStyle=StyleLineGraphBackgroundOverlay
Shape3=Combine Shape | XOR Shape2
Y=-1r
DynamicVariables=1

[MeterBackgroundHeight]
Meter=Image
MeterStyle=StyleBackgroundHeight

; ------------------------------
; No HWiNFO Warning

[MeterNoHwinfoBackground]
Meter=Shape
MeterStyle=StyleBackground
Group=NoHwinfo
Hidden=1

[MeterNoHwinfoWarning]
Meter=String
MeterStyle=StyleString | StyleStringCenterAlign
FontColor=#colorError#
Y=10
Text=HWINFO NOT DETECTED
Group=NoHwinfo
Hidden=1

[MeterNoHwinfoInfo]
Meter=String
MeterStyle=StyleString | StyleStringParagraph
Text=GPU Meter relies on HWiNFO to function. Please make sure you have configured HWiNFO as per the setup tutorial. Once HWiNFO is running properly, this gadget will automatically refresh.
Group=NoHwinfo
Hidden=1

; ------------------------------
; Mouse Regions

[MeterConfigButton]
Meter=Image
MeterStyle=StyleMouseRegion | StyleMouseRegionShapeButtonHover
LeftMouseUpAction=[!SkinCustomMenu]
Group=ConfigButton
Hidden=1