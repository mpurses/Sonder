; Draw lines from last to first, to improve aesthetics
[MeterLineGraph]
Meter=Line
MeterStyle=StyleLineGraph
X=r
Y=r
LineCount=16
MeasureName=MeasureCpuUsageCore8
MeasureName2=MeasureCpuUsageCore7
MeasureName3=MeasureCpuUsageCore6
MeasureName4=MeasureCpuUsageCore5
MeasureName5=MeasureCpuUsageCore4
MeasureName6=MeasureCpuUsageCore3
MeasureName7=MeasureCpuUsageCore2
MeasureName8=MeasureCpuUsageCore1
MeasureName9=MeasureCpuUsage
MeasureName10=MeasureCpuFanPercentCalc
MeasureName11=MeasureCpuFanPercentCalcSpeedFan
MeasureName12=MeasurePageUsage
MeasureName13=MeasureRamUsage
MeasureName14=MeasureCpuTempHwinfoPackage
MeasureName15=MeasureCpuTempCoreTempCore1
MeasureName16=MeasureCpuTempSpeedFanCore1
Scale14=(100 / max([#[#maxCpuTempMode]MaxCpuTemp],1))
Scale15=(100 / max([#[#maxCpuTempMode]MaxCpuTemp],1))
Scale16=(100 / max([#[#maxCpuTempMode]MaxCpuTemp],1))
LineColor=#colorCore8#,(255 * (#cpuCores# >= 8) * (#showAvgCpu# = 0))
LineColor2=#colorCore7#,(255 * (#cpuCores# >= 7) * (#showAvgCpu# = 0))
LineColor3=#colorCore6#,(255 * (#cpuCores# >= 6) * (#showAvgCpu# = 0))
LineColor4=#colorCore5#,(255 * (#cpuCores# >= 5) * (#showAvgCpu# = 0))
LineColor5=#colorCore4#,(255 * (#cpuCores# >= 4) * (#showAvgCpu# = 0))
LineColor6=#colorCore3#,(255 * (#cpuCores# >= 3) * (#showAvgCpu# = 0))
LineColor7=#colorCore2#,(255 * (#cpuCores# >= 2) * (#showAvgCpu# = 0))
LineColor8=#colorCore1#,(255 * (#cpuCores# >= 1) * (#showAvgCpu# = 0))
LineColor9=#colorAvgCpu#,(#showAvgCpu# * 255)
LineColor10=#colorCpuFan#,(#showCpuFanGraph# * 255 * (#extProgram# = 1))
LineColor11=#colorCpuFan#,(#showCpuFanGraph# * 255 * (#extProgram# = 4))
LineColor12=#colorPage#,(#showPageFile# * 255)
LineColor13=#colorRam#
LineColor14=#colorCpuTemp#,(#showCpuTempGraph# * 255 * (#extProgram# = 1))
LineColor15=#colorCpuTemp#,(#showCpuTempGraph# * 255 * ((#extProgram# = 2) || (#extProgram# = 6)))
LineColor16=#colorCpuTemp#,(#showCpuTempGraph# * 255 * (#extProgram# = 4))