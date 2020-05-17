; Draw lines from last to first, to improve aesthetics
[MeterLineGraph]
Meter=Line
MeterStyle=StyleLineGraph
X=r
Y=r
LineCount=24
MeasureName=MeasureCpuUsageCore16
MeasureName2=MeasureCpuUsageCore15
MeasureName3=MeasureCpuUsageCore14
MeasureName4=MeasureCpuUsageCore13
MeasureName5=MeasureCpuUsageCore12
MeasureName6=MeasureCpuUsageCore11
MeasureName7=MeasureCpuUsageCore10
MeasureName8=MeasureCpuUsageCore9
MeasureName9=MeasureCpuUsageCore8
MeasureName10=MeasureCpuUsageCore7
MeasureName11=MeasureCpuUsageCore6
MeasureName12=MeasureCpuUsageCore5
MeasureName13=MeasureCpuUsageCore4
MeasureName14=MeasureCpuUsageCore3
MeasureName15=MeasureCpuUsageCore2
MeasureName16=MeasureCpuUsageCore1
MeasureName17=MeasureCpuUsage
MeasureName18=MeasureCpuFanPercentCalc
MeasureName19=MeasureCpuFanPercentCalcSpeedFan
MeasureName20=MeasurePageUsage
MeasureName21=MeasureRamUsage
MeasureName22=MeasureCpuTempHwinfoPackage
MeasureName23=MeasureCpuTempCoreTempCore1
MeasureName24=MeasureCpuTempSpeedFanCore1
Scale22=(100 / max([#[#maxCpuTempMode]MaxCpuTemp],1))
Scale23=(100 / max([#[#maxCpuTempMode]MaxCpuTemp],1))
Scale24=(100 / max([#[#maxCpuTempMode]MaxCpuTemp],1))
LineColor=#colorCore16#,(255 * (#cpuCores# >= 16) * (#showAvgCpu# = 0))
LineColor2=#colorCore15#,(255 * (#cpuCores# >= 15) * (#showAvgCpu# = 0))
LineColor3=#colorCore14#,(255 * (#cpuCores# >= 14) * (#showAvgCpu# = 0))
LineColor4=#colorCore13#,(255 * (#cpuCores# >= 13) * (#showAvgCpu# = 0))
LineColor5=#colorCore12#,(255 * (#cpuCores# >= 12) * (#showAvgCpu# = 0))
LineColor6=#colorCore11#,(255 * (#cpuCores# >= 11) * (#showAvgCpu# = 0))
LineColor7=#colorCore10#,(255 * (#cpuCores# >= 10) * (#showAvgCpu# = 0))
LineColor8=#colorCore9#,(255 * (#cpuCores# >= 9) * (#showAvgCpu# = 0))
LineColor9=#colorCore8#,(255 * (#cpuCores# >= 8) * (#showAvgCpu# = 0))
LineColor10=#colorCore7#,(255 * (#cpuCores# >= 7) * (#showAvgCpu# = 0))
LineColor11=#colorCore6#,(255 * (#cpuCores# >= 6) * (#showAvgCpu# = 0))
LineColor12=#colorCore5#,(255 * (#cpuCores# >= 5) * (#showAvgCpu# = 0))
LineColor13=#colorCore4#,(255 * (#cpuCores# >= 4) * (#showAvgCpu# = 0))
LineColor14=#colorCore3#,(255 * (#cpuCores# >= 3) * (#showAvgCpu# = 0))
LineColor15=#colorCore2#,(255 * (#cpuCores# >= 2) * (#showAvgCpu# = 0))
LineColor16=#colorCore1#,(255 * (#cpuCores# >= 1) * (#showAvgCpu# = 0))
LineColor17=#colorAvgCpu#,(#showAvgCpu# * 255)
LineColor18=#colorCpuFan#,(#showCpuFanGraph# * 255 * (#extProgram# = 1))
LineColor19=#colorCpuFan#,(#showCpuFanGraph# * 255 * (#extProgram# = 4))
LineColor20=#colorPage#,(#showPageFile# * 255)
LineColor21=#colorRam#
LineColor22=#colorCpuTemp#,(#showCpuTempGraph# * 255 * (#extProgram# = 1))
LineColor23=#colorCpuTemp#,(#showCpuTempGraph# * 255 * ((#extProgram# = 2) || (#extProgram# = 6)))
LineColor24=#colorCpuTemp#,(#showCpuTempGraph# * 255 * (#extProgram# = 4))