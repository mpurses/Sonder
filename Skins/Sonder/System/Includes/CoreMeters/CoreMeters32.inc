[IncludeCoreMeters24]
@includeCoreMeters24=CoreMeters24.inc

; Core 25
[MeterCore25Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 25) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 25:
Group=CpuCore25
Hidden=(#cpuCores# < 25) || (#showAvgCpuUsage# = 1)

[MeterCore25Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore13
MeasureName2=MeasureCpuTempCoreTempCore13
MeasureName3=MeasureCpuTempSpeedFanCore13
Text=%1#deg##tempUnits#
Group=CpuCore25 | CoreTemps
Hidden=(#cpuCores# < 25) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore25Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore13
Group=CpuCore25 | CoreVoltages
Hidden=(#cpuCores# < 25) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore25Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore25
Text=%1%
Group=CpuCore25
Hidden=(#cpuCores# < 25) || (#showAvgCpuUsage# = 1)

[MeterCore25Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore25
BarColor=#colorCore25#
Group=CpuCore25
Hidden=(#cpuCores# < 25) || (#showAvgCpuUsage# = 1)

; Core 26
[MeterCore26Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 26) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 26:
Group=CpuCore26
Hidden=(#cpuCores# < 26) || (#showAvgCpuUsage# = 1)

[MeterCore26Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore13
MeasureName2=MeasureCpuTempCoreTempCore13
MeasureName3=MeasureCpuTempSpeedFanCore13
Text=%1#deg##tempUnits#
Group=CpuCore26 | CoreTemps
Hidden=(#cpuCores# < 26) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore26Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore13
Group=CpuCore26 | CoreVoltages
Hidden=(#cpuCores# < 26) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore26Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore26
Text=%1%
Group=CpuCore26
Hidden=(#cpuCores# < 26) || (#showAvgCpuUsage# = 1)

[MeterCore26Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore26
BarColor=#colorCore26#
Group=CpuCore26
Hidden=(#cpuCores# < 26) || (#showAvgCpuUsage# = 1)

; Core 27
[MeterCore27Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 27) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 27:
Group=CpuCore27
Hidden=(#cpuCores# < 27) || (#showAvgCpuUsage# = 1)

[MeterCore27Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore14
MeasureName2=MeasureCpuTempCoreTempCore14
MeasureName3=MeasureCpuTempSpeedFanCore14
Text=%1#deg##tempUnits#
Group=CpuCore27 | CoreTemps
Hidden=(#cpuCores# < 27) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore27Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore14
Group=CpuCore27 | CoreVoltages
Hidden=(#cpuCores# < 27) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore27Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore27
Text=%1%
Group=CpuCore27
Hidden=(#cpuCores# < 27) || (#showAvgCpuUsage# = 1)

[MeterCore27Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore27
BarColor=#colorCore27#
Group=CpuCore27
Hidden=(#cpuCores# < 27) || (#showAvgCpuUsage# = 1)

; Core 28
[MeterCore28Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 28) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 28:
Group=CpuCore28
Hidden=(#cpuCores# < 28) || (#showAvgCpuUsage# = 1)

[MeterCore28Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore14
MeasureName2=MeasureCpuTempCoreTempCore14
MeasureName3=MeasureCpuTempSpeedFanCore14
Text=%1#deg##tempUnits#
Group=CpuCore28 | CoreTemps
Hidden=(#cpuCores# < 28) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore28Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore14
Group=CpuCore28 | CoreVoltages
Hidden=(#cpuCores# < 28) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore28Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore28
Text=%1%
Group=CpuCore28
Hidden=(#cpuCores# < 28) || (#showAvgCpuUsage# = 1)

[MeterCore28Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore28
BarColor=#colorCore28#
Group=CpuCore28
Hidden=(#cpuCores# < 28) || (#showAvgCpuUsage# = 1)

; Core 29
[MeterCore29Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 29) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 29:
Group=CpuCore29
Hidden=(#cpuCores# < 29) || (#showAvgCpuUsage# = 1)

[MeterCore29Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore15
MeasureName2=MeasureCpuTempCoreTempCore15
MeasureName3=MeasureCpuTempSpeedFanCore15
Text=%1#deg##tempUnits#
Group=CpuCore29 | CoreTemps
Hidden=(#cpuCores# < 29) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore29Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore15
Group=CpuCore29 | CoreVoltages
Hidden=(#cpuCores# < 29) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore29Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore29
Text=%1%
Group=CpuCore29
Hidden=(#cpuCores# < 29) || (#showAvgCpuUsage# = 1)

[MeterCore29Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore29
BarColor=#colorCore29#
Group=CpuCore29
Hidden=(#cpuCores# < 29) || (#showAvgCpuUsage# = 1)

; Core 30
[MeterCore30Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 30) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 30:
Group=CpuCore30
Hidden=(#cpuCores# < 30) || (#showAvgCpuUsage# = 1)

[MeterCore30Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore15
MeasureName2=MeasureCpuTempCoreTempCore15
MeasureName3=MeasureCpuTempSpeedFanCore15
Text=%1#deg##tempUnits#
Group=CpuCore30 | CoreTemps
Hidden=(#cpuCores# < 30) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore30Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore15
Group=CpuCore30 | CoreVoltages
Hidden=(#cpuCores# < 30) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore30Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore30
Text=%1%
Group=CpuCore30
Hidden=(#cpuCores# < 30) || (#showAvgCpuUsage# = 1)

[MeterCore30Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore30
BarColor=#colorCore30#
Group=CpuCore30
Hidden=(#cpuCores# < 30) || (#showAvgCpuUsage# = 1)

; Core 31
[MeterCore31Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 31) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 31:
Group=CpuCore31
Hidden=(#cpuCores# < 31) || (#showAvgCpuUsage# = 1)

[MeterCore31Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore16
MeasureName2=MeasureCpuTempCoreTempCore16
MeasureName3=MeasureCpuTempSpeedFanCore16
Text=%1#deg##tempUnits#
Group=CpuCore31 | CoreTemps
Hidden=(#cpuCores# < 31) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore31Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore16
Group=CpuCore31 | CoreVoltages
Hidden=(#cpuCores# < 31) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore31Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore31
Text=%1%
Group=CpuCore31
Hidden=(#cpuCores# < 31) || (#showAvgCpuUsage# = 1)

[MeterCore31Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore31
BarColor=#colorCore31#
Group=CpuCore31
Hidden=(#cpuCores# < 31) || (#showAvgCpuUsage# = 1)

; Core 32
[MeterCore32Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 32) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 32:
Group=CpuCore32
Hidden=(#cpuCores# < 32) || (#showAvgCpuUsage# = 1)

[MeterCore32Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore16
MeasureName2=MeasureCpuTempCoreTempCore16
MeasureName3=MeasureCpuTempSpeedFanCore16
Text=%1#deg##tempUnits#
Group=CpuCore32 | CoreTemps
Hidden=(#cpuCores# < 32) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore32Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore16
Group=CpuCore32 | CoreVoltages
Hidden=(#cpuCores# < 32) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore32Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore32
Text=%1%
Group=CpuCore32
Hidden=(#cpuCores# < 32) || (#showAvgCpuUsage# = 1)

[MeterCore32Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore32
BarColor=#colorCore32#
Group=CpuCore32
Hidden=(#cpuCores# < 32) || (#showAvgCpuUsage# = 1)