; Core 1
[MeterCore1Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 1) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 1:
Group=CpuCore1
Hidden=(#cpuCores# < 1) || (#showAvgCpuUsage# = 1)

[MeterCore1Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore1
MeasureName2=MeasureCpuTempCoreTempCore1
MeasureName3=MeasureCpuTempSpeedFanCore1
Text=%1#deg##tempUnits#
Group=CpuCore1 | CoreTemps
Hidden=(#cpuCores# < 1) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore1Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore1
Group=CpuCore1 | CoreVoltages
Hidden=(#cpuCores# < 1) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore1Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore1
Text=%1%
Group=CpuCore1
Hidden=(#cpuCores# < 1) || (#showAvgCpuUsage# = 1)

[MeterCore1Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore1
BarColor=#colorCore1#
Group=CpuCore1
Hidden=(#cpuCores# < 1) || (#showAvgCpuUsage# = 1)

; Core 2
[MeterCore2Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 2) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 2:
Group=CpuCore2
Hidden=(#cpuCores# < 2) || (#showAvgCpuUsage# = 1)

[MeterCore2Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore1
MeasureName2=MeasureCpuTempCoreTempCore1
MeasureName3=MeasureCpuTempSpeedFanCore1
Text=%1#deg##tempUnits#
Group=CpuCore2 | CoreTemps
Hidden=(#cpuCores# < 2) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore2Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore1
Group=CpuCore2 | CoreVoltages
Hidden=(#cpuCores# < 2) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore2Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore2
Text=%1%
Group=CpuCore2
Hidden=(#cpuCores# < 2) || (#showAvgCpuUsage# = 1)

[MeterCore2Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore2
BarColor=#colorCore2#
Group=CpuCore2
Hidden=(#cpuCores# < 2) || (#showAvgCpuUsage# = 1)

; Core 3
[MeterCore3Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 3) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 3:
Group=CpuCore3
Hidden=(#cpuCores# < 3) || (#showAvgCpuUsage# = 1)

[MeterCore3Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore2
MeasureName2=MeasureCpuTempCoreTempCore2
MeasureName3=MeasureCpuTempSpeedFanCore2
Text=%1#deg##tempUnits#
Group=CpuCore3 | CoreTemps
Hidden=(#cpuCores# < 3) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore3Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore2
Group=CpuCore3 | CoreVoltages
Hidden=(#cpuCores# < 3) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore3Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore3
Text=%1%
Group=CpuCore3
Hidden=(#cpuCores# < 3) || (#showAvgCpuUsage# = 1)

[MeterCore3Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore3
BarColor=#colorCore3#
Group=CpuCore3
Hidden=(#cpuCores# < 3) || (#showAvgCpuUsage# = 1)

; Core 4
[MeterCore4Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 4) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 4:
Group=CpuCore4
Hidden=(#cpuCores# < 4) || (#showAvgCpuUsage# = 1)

[MeterCore4Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore2
MeasureName2=MeasureCpuTempCoreTempCore2
MeasureName3=MeasureCpuTempSpeedFanCore2
Text=%1#deg##tempUnits#
Group=CpuCore4 | CoreTemps
Hidden=(#cpuCores# < 4) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore4Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore2
Group=CpuCore4 | CoreVoltages
Hidden=(#cpuCores# < 4) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore4Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore4
Text=%1%
Group=CpuCore4
Hidden=(#cpuCores# < 4) || (#showAvgCpuUsage# = 1)

[MeterCore4Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore4
BarColor=#colorCore4#
Group=CpuCore4
Hidden=(#cpuCores# < 4) || (#showAvgCpuUsage# = 1)

; Core 5
[MeterCore5Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 5) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 5:
Group=CpuCore5
Hidden=(#cpuCores# < 5) || (#showAvgCpuUsage# = 1)

[MeterCore5Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore3
MeasureName2=MeasureCpuTempCoreTempCore3
MeasureName3=MeasureCpuTempSpeedFanCore3
Text=%1#deg##tempUnits#
Group=CpuCore5 | CoreTemps
Hidden=(#cpuCores# < 5) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore5Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore3
Group=CpuCore5 | CoreVoltages
Hidden=(#cpuCores# < 5) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore5Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore5
Text=%1%
Group=CpuCore5
Hidden=(#cpuCores# < 5) || (#showAvgCpuUsage# = 1)

[MeterCore5Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore5
BarColor=#colorCore5#
Group=CpuCore5
Hidden=(#cpuCores# < 5) || (#showAvgCpuUsage# = 1)

; Core 6
[MeterCore6Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 6) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 6:
Group=CpuCore6
Hidden=(#cpuCores# < 6) || (#showAvgCpuUsage# = 1)

[MeterCore6Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore3
MeasureName2=MeasureCpuTempCoreTempCore3
MeasureName3=MeasureCpuTempSpeedFanCore3
Text=%1#deg##tempUnits#
Group=CpuCore6 | CoreTemps
Hidden=(#cpuCores# < 6) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore6Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore3
Group=CpuCore6 | CoreVoltages
Hidden=(#cpuCores# < 6) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore6Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore6
Text=%1%
Group=CpuCore6
Hidden=(#cpuCores# < 6) || (#showAvgCpuUsage# = 1)

[MeterCore6Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore6
BarColor=#colorCore6#
Group=CpuCore6
Hidden=(#cpuCores# < 6) || (#showAvgCpuUsage# = 1)

; Core 7
[MeterCore7Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 7) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 7:
Group=CpuCore7
Hidden=(#cpuCores# < 7) || (#showAvgCpuUsage# = 1)

[MeterCore7Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore4
MeasureName2=MeasureCpuTempCoreTempCore4
MeasureName3=MeasureCpuTempSpeedFanCore4
Text=%1#deg##tempUnits#
Group=CpuCore7 | CoreTemps
Hidden=(#cpuCores# < 7) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore7Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore4
Group=CpuCore7 | CoreVoltages
Hidden=(#cpuCores# < 7) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore7Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore7
Text=%1%
Group=CpuCore7
Hidden=(#cpuCores# < 7) || (#showAvgCpuUsage# = 1)

[MeterCore7Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore7
BarColor=#colorCore7#
Group=CpuCore7
Hidden=(#cpuCores# < 7) || (#showAvgCpuUsage# = 1)

; Core 8
[MeterCore8Label]
Meter=String
MeterStyle=StyleString
Y=(((#cpuCores# >= 8) && (#showAvgCpuUsage# = 0)) ? #rowSpacing# : -#barTextOffset#)R
Text=Core 8:
Group=CpuCore8
Hidden=(#cpuCores# < 8) || (#showAvgCpuUsage# = 1)

[MeterCore8Temp]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreTemps
MeasureName=MeasureCpuTempHwinfoCore4
MeasureName2=MeasureCpuTempCoreTempCore4
MeasureName3=MeasureCpuTempSpeedFanCore4
Text=%1#deg##tempUnits#
Group=CpuCore8 | CoreTemps
Hidden=(#cpuCores# < 8) || (#showAvgCpuUsage# = 1) || (#showCoreTemps# <> 1) || (#extProgram# = 0)

[MeterCore8Voltage]
Meter=String
MeterStyle=StyleString | StyleStringInfo | StyleStringCoreVoltages
MeasureName=MeasureCpuVoltageCore4
Group=CpuCore8 | CoreVoltages
Hidden=(#cpuCores# < 8) || (#showAvgCpuUsage# = 1) || (#showCoreVoltages# = 0) || (#extProgram# <> 1)

[MeterCore8Value]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign
MeasureName=MeasureCpuUsageCore8
Text=%1%
Group=CpuCore8
Hidden=(#cpuCores# < 8) || (#showAvgCpuUsage# = 1)

[MeterCore8Bar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureCpuUsageCore8
BarColor=#colorCore8#
Group=CpuCore8
Hidden=(#cpuCores# < 8) || (#showAvgCpuUsage# = 1)