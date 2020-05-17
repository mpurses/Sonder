[IncludeCoreMeters48]
@includeCoreMeters48=CoreMeters48.inc

; Core 49
[MeterCore49Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 49) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 49:
Group=CpuCore49
Hidden=(#cpuCores# < 49) || (#showAvgCpuUsage# = 1)

[MeterCore49Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore25
MeasureName2=MeasureCpuTempCoreTempCore25
MeasureName3=MeasureCpuTempSpeedFanCore25
Text=%1#deg##tempUnits#
Group=CpuCore49 | CoreTemps
Hidden=(#cpuCores# < 49) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore49Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore25
Group=CpuCore49 | CoreVoltages
Hidden=(#cpuCores# < 49) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore49Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore49
Text=%1%
Group=CpuCore49
Hidden=(#cpuCores# < 49) || (#showAvgCpuUsage# = 1)

[MeterCore49Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore49
BarColor=#colorCore49#
Group=CpuCore49
Hidden=(#cpuCores# < 49) || (#showAvgCpuUsage# = 1)

; Core 50
[MeterCore50Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 50) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 50:
Group=CpuCore50
Hidden=(#cpuCores# < 50) || (#showAvgCpuUsage# = 1)

[MeterCore50Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore25
MeasureName2=MeasureCpuTempCoreTempCore25
MeasureName3=MeasureCpuTempSpeedFanCore25
Text=%1#deg##tempUnits#
Group=CpuCore50 | CoreTemps
Hidden=(#cpuCores# < 50) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore50Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore25
Group=CpuCore50 | CoreVoltages
Hidden=(#cpuCores# < 50) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore50Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore50
Text=%1%
Group=CpuCore50
Hidden=(#cpuCores# < 50) || (#showAvgCpuUsage# = 1)

[MeterCore50Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore50
BarColor=#colorCore50#
Group=CpuCore50
Hidden=(#cpuCores# < 50) || (#showAvgCpuUsage# = 1)

; Core 51
[MeterCore51Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 51) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 51:
Group=CpuCore51
Hidden=(#cpuCores# < 51) || (#showAvgCpuUsage# = 1)

[MeterCore51Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore26
MeasureName2=MeasureCpuTempCoreTempCore26
MeasureName3=MeasureCpuTempSpeedFanCore26
Text=%1#deg##tempUnits#
Group=CpuCore51 | CoreTemps
Hidden=(#cpuCores# < 51) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore51Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore26
Group=CpuCore51 | CoreVoltages
Hidden=(#cpuCores# < 51) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore51Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore51
Text=%1%
Group=CpuCore51
Hidden=(#cpuCores# < 51) || (#showAvgCpuUsage# = 1)

[MeterCore51Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore51
BarColor=#colorCore51#
Group=CpuCore51
Hidden=(#cpuCores# < 51) || (#showAvgCpuUsage# = 1)

; Core 52
[MeterCore52Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 52) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 52:
Group=CpuCore52
Hidden=(#cpuCores# < 52) || (#showAvgCpuUsage# = 1)

[MeterCore52Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore26
MeasureName2=MeasureCpuTempCoreTempCore26
MeasureName3=MeasureCpuTempSpeedFanCore26
Text=%1#deg##tempUnits#
Group=CpuCore52 | CoreTemps
Hidden=(#cpuCores# < 52) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore52Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore26
Group=CpuCore52 | CoreVoltages
Hidden=(#cpuCores# < 52) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore52Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore52
Text=%1%
Group=CpuCore52
Hidden=(#cpuCores# < 52) || (#showAvgCpuUsage# = 1)

[MeterCore52Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore52
BarColor=#colorCore52#
Group=CpuCore52
Hidden=(#cpuCores# < 52) || (#showAvgCpuUsage# = 1)

; Core 53
[MeterCore53Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 53) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 53:
Group=CpuCore53
Hidden=(#cpuCores# < 53) || (#showAvgCpuUsage# = 1)

[MeterCore53Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore27
MeasureName2=MeasureCpuTempCoreTempCore27
MeasureName3=MeasureCpuTempSpeedFanCore27
Text=%1#deg##tempUnits#
Group=CpuCore53 | CoreTemps
Hidden=(#cpuCores# < 53) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore53Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore27
Group=CpuCore53 | CoreVoltages
Hidden=(#cpuCores# < 53) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore53Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore53
Text=%1%
Group=CpuCore53
Hidden=(#cpuCores# < 53) || (#showAvgCpuUsage# = 1)

[MeterCore53Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore53
BarColor=#colorCore53#
Group=CpuCore53
Hidden=(#cpuCores# < 53) || (#showAvgCpuUsage# = 1)

; Core 54
[MeterCore54Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 54) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 54:
Group=CpuCore54
Hidden=(#cpuCores# < 54) || (#showAvgCpuUsage# = 1)

[MeterCore54Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore27
MeasureName2=MeasureCpuTempCoreTempCore27
MeasureName3=MeasureCpuTempSpeedFanCore27
Text=%1#deg##tempUnits#
Group=CpuCore54 | CoreTemps
Hidden=(#cpuCores# < 54) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore54Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore27
Group=CpuCore54 | CoreVoltages
Hidden=(#cpuCores# < 54) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore54Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore54
Text=%1%
Group=CpuCore54
Hidden=(#cpuCores# < 54) || (#showAvgCpuUsage# = 1)

[MeterCore54Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore54
BarColor=#colorCore54#
Group=CpuCore54
Hidden=(#cpuCores# < 54) || (#showAvgCpuUsage# = 1)

; Core 55
[MeterCore55Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 55) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 55:
Group=CpuCore55
Hidden=(#cpuCores# < 55) || (#showAvgCpuUsage# = 1)

[MeterCore55Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore28
MeasureName2=MeasureCpuTempCoreTempCore28
MeasureName3=MeasureCpuTempSpeedFanCore28
Text=%1#deg##tempUnits#
Group=CpuCore55 | CoreTemps
Hidden=(#cpuCores# < 55) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore55Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore28
Group=CpuCore55 | CoreVoltages
Hidden=(#cpuCores# < 55) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore55Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore55
Text=%1%
Group=CpuCore55
Hidden=(#cpuCores# < 55) || (#showAvgCpuUsage# = 1)

[MeterCore55Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore55
BarColor=#colorCore55#
Group=CpuCore55
Hidden=(#cpuCores# < 55) || (#showAvgCpuUsage# = 1)

; Core 56
[MeterCore56Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 56) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 56:
Group=CpuCore56
Hidden=(#cpuCores# < 56) || (#showAvgCpuUsage# = 1)

[MeterCore56Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore28
MeasureName2=MeasureCpuTempCoreTempCore28
MeasureName3=MeasureCpuTempSpeedFanCore28
Text=%1#deg##tempUnits#
Group=CpuCore56 | CoreTemps
Hidden=(#cpuCores# < 56) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore56Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore28
Group=CpuCore56 | CoreVoltages
Hidden=(#cpuCores# < 56) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore56Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore56
Text=%1%
Group=CpuCore56
Hidden=(#cpuCores# < 56) || (#showAvgCpuUsage# = 1)

[MeterCore56Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore56
BarColor=#colorCore56#
Group=CpuCore56
Hidden=(#cpuCores# < 56) || (#showAvgCpuUsage# = 1)

; Core 57
[MeterCore57Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 57) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 57:
Group=CpuCore57
Hidden=(#cpuCores# < 57) || (#showAvgCpuUsage# = 1)

[MeterCore57Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore29
MeasureName2=MeasureCpuTempCoreTempCore29
MeasureName3=MeasureCpuTempSpeedFanCore29
Text=%1#deg##tempUnits#
Group=CpuCore57 | CoreTemps
Hidden=(#cpuCores# < 57) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore57Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore29
Group=CpuCore57 | CoreVoltages
Hidden=(#cpuCores# < 57) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore57Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore57
Text=%1%
Group=CpuCore57
Hidden=(#cpuCores# < 57) || (#showAvgCpuUsage# = 1)

[MeterCore57Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore57
BarColor=#colorCore57#
Group=CpuCore57
Hidden=(#cpuCores# < 57) || (#showAvgCpuUsage# = 1)

; Core 58
[MeterCore58Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 58) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 58:
Group=CpuCore58
Hidden=(#cpuCores# < 58) || (#showAvgCpuUsage# = 1)

[MeterCore58Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore29
MeasureName2=MeasureCpuTempCoreTempCore29
MeasureName3=MeasureCpuTempSpeedFanCore29
Text=%1#deg##tempUnits#
Group=CpuCore58 | CoreTemps
Hidden=(#cpuCores# < 58) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore58Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore29
Group=CpuCore58 | CoreVoltages
Hidden=(#cpuCores# < 58) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore58Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore58
Text=%1%
Group=CpuCore58
Hidden=(#cpuCores# < 58) || (#showAvgCpuUsage# = 1)

[MeterCore58Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore58
BarColor=#colorCore58#
Group=CpuCore58
Hidden=(#cpuCores# < 58) || (#showAvgCpuUsage# = 1)

; Core 59
[MeterCore59Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 59) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 59:
Group=CpuCore59
Hidden=(#cpuCores# < 59) || (#showAvgCpuUsage# = 1)

[MeterCore59Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore30
MeasureName2=MeasureCpuTempCoreTempCore30
MeasureName3=MeasureCpuTempSpeedFanCore30
Text=%1#deg##tempUnits#
Group=CpuCore59 | CoreTemps
Hidden=(#cpuCores# < 59) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore59Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore30
Group=CpuCore59 | CoreVoltages
Hidden=(#cpuCores# < 59) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore59Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore59
Text=%1%
Group=CpuCore59
Hidden=(#cpuCores# < 59) || (#showAvgCpuUsage# = 1)

[MeterCore59Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore59
BarColor=#colorCore59#
Group=CpuCore59
Hidden=(#cpuCores# < 59) || (#showAvgCpuUsage# = 1)

; Core 60
[MeterCore60Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 60) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 60:
Group=CpuCore60
Hidden=(#cpuCores# < 60) || (#showAvgCpuUsage# = 1)

[MeterCore60Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore30
MeasureName2=MeasureCpuTempCoreTempCore30
MeasureName3=MeasureCpuTempSpeedFanCore30
Text=%1#deg##tempUnits#
Group=CpuCore60 | CoreTemps
Hidden=(#cpuCores# < 60) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore60Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore30
Group=CpuCore60 | CoreVoltages
Hidden=(#cpuCores# < 60) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore60Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore60
Text=%1%
Group=CpuCore60
Hidden=(#cpuCores# < 60) || (#showAvgCpuUsage# = 1)

[MeterCore60Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore60
BarColor=#colorCore60#
Group=CpuCore60
Hidden=(#cpuCores# < 60) || (#showAvgCpuUsage# = 1)

; Core 61
[MeterCore61Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 61) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 61:
Group=CpuCore61
Hidden=(#cpuCores# < 61) || (#showAvgCpuUsage# = 1)

[MeterCore61Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore31
MeasureName2=MeasureCpuTempCoreTempCore31
MeasureName3=MeasureCpuTempSpeedFanCore31
Text=%1#deg##tempUnits#
Group=CpuCore61 | CoreTemps
Hidden=(#cpuCores# < 61) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore61Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore31
Group=CpuCore61 | CoreVoltages
Hidden=(#cpuCores# < 61) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore61Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore61
Text=%1%
Group=CpuCore61
Hidden=(#cpuCores# < 61) || (#showAvgCpuUsage# = 1)

[MeterCore61Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore61
BarColor=#colorCore61#
Group=CpuCore61
Hidden=(#cpuCores# < 61) || (#showAvgCpuUsage# = 1)

; Core 62
[MeterCore62Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 62) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 62:
Group=CpuCore62
Hidden=(#cpuCores# < 62) || (#showAvgCpuUsage# = 1)

[MeterCore62Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore31
MeasureName2=MeasureCpuTempCoreTempCore31
MeasureName3=MeasureCpuTempSpeedFanCore31
Text=%1#deg##tempUnits#
Group=CpuCore62 | CoreTemps
Hidden=(#cpuCores# < 62) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore62Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore31
Group=CpuCore62 | CoreVoltages
Hidden=(#cpuCores# < 62) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore62Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore62
Text=%1%
Group=CpuCore62
Hidden=(#cpuCores# < 62) || (#showAvgCpuUsage# = 1)

[MeterCore62Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore62
BarColor=#colorCore62#
Group=CpuCore62
Hidden=(#cpuCores# < 62) || (#showAvgCpuUsage# = 1)

; Core 63
[MeterCore63Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 63) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 63:
Group=CpuCore63
Hidden=(#cpuCores# < 63) || (#showAvgCpuUsage# = 1)

[MeterCore63Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore32
MeasureName2=MeasureCpuTempCoreTempCore32
MeasureName3=MeasureCpuTempSpeedFanCore32
Text=%1#deg##tempUnits#
Group=CpuCore63 | CoreTemps
Hidden=(#cpuCores# < 63) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore63Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore32
Group=CpuCore63 | CoreVoltages
Hidden=(#cpuCores# < 63) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore63Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore63
Text=%1%
Group=CpuCore63
Hidden=(#cpuCores# < 63) || (#showAvgCpuUsage# = 1)

[MeterCore63Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore63
BarColor=#colorCore63#
Group=CpuCore63
Hidden=(#cpuCores# < 63) || (#showAvgCpuUsage# = 1)

; Core 64
[MeterCore64Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 64) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 64:
Group=CpuCore64
Hidden=(#cpuCores# < 64) || (#showAvgCpuUsage# = 1)

[MeterCore64Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore32
MeasureName2=MeasureCpuTempCoreTempCore32
MeasureName3=MeasureCpuTempSpeedFanCore32
Text=%1#deg##tempUnits#
Group=CpuCore64 | CoreTemps
Hidden=(#cpuCores# < 64) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore64Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore32
Group=CpuCore64 | CoreVoltages
Hidden=(#cpuCores# < 64) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore64Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore64
Text=%1%
Group=CpuCore64
Hidden=(#cpuCores# < 64) || (#showAvgCpuUsage# = 1)

[MeterCore64Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore64
BarColor=#colorCore64#
Group=CpuCore64
Hidden=(#cpuCores# < 64) || (#showAvgCpuUsage# = 1)