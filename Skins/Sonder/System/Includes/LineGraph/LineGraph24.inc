; Draw lines from last to first, to improve aesthetics
[MeterLineGraph]
Meter=Line
MeterStyle=StyleLineGraph
X=r
Y=r
LineCount=32
MeasureName=MeasureCpuUsageCore24
MeasureName2=MeasureCpuUsageCore23
MeasureName3=MeasureCpuUsageCore22
MeasureName4=MeasureCpuUsageCore21
MeasureName5=MeasureCpuUsageCore20
MeasureName6=MeasureCpuUsageCore19
MeasureName7=MeasureCpuUsageCore18
MeasureName8=MeasureCpuUsageCore17
MeasureName9=MeasureCpuUsageCore16
MeasureName10=MeasureCpuUsageCore15
MeasureName11=MeasureCpuUsageCore14
MeasureName12=MeasureCpuUsageCore13
MeasureName13=MeasureCpuUsageCore12
MeasureName14=MeasureCpuUsageCore11
MeasureName15=MeasureCpuUsageCore10
MeasureName16=MeasureCpuUsageCore9
MeasureName17=MeasureCpuUsageCore8
MeasureName18=MeasureCpuUsageCore7
MeasureName19=MeasureCpuUsageCore6
MeasureName20=MeasureCpuUsageCore5
MeasureName21=MeasureCpuUsageCore4
MeasureName22=MeasureCpuUsageCore3
MeasureName23=MeasureCpuUsageCore2
MeasureName24=MeasureCpuUsageCore1
MeasureName25=MeasureCpuUsage
MeasureName26=MeasureCpuFanPercentCalc
MeasureName27=MeasureCpuFanPercentCalcSpeedFan
MeasureName28=MeasurePageUsage
MeasureName29=MeasureRamUsage
MeasureName30=MeasureCpuTempHwinfoPackage
MeasureName31=MeasureCpuTempCoreTempCore1
MeasureName32=MeasureCpuTempSpeedFanCore1
Scale33=(100 / max([#[#maxCpuTempMode]MaxCpuTemp],1))
Scale34=(100 / max([#[#maxCpuTempMode]MaxCpuTemp],1))
Scale35=(100 / max([#[#maxCpuTempMode]MaxCpuTemp],1))
LineColor=#colorCore24#,(255 * (#cpuCores# >= 24) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor2=#colorCore23#,(255 * (#cpuCores# >= 23) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor3=#colorCore22#,(255 * (#cpuCores# >= 22) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor4=#colorCore21#,(255 * (#cpuCores# >= 21) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor5=#colorCore20#,(255 * (#cpuCores# >= 20) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor6=#colorCore19#,(255 * (#cpuCores# >= 19) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor7=#colorCore18#,(255 * (#cpuCores# >= 18) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor8=#colorCore17#,(255 * (#cpuCores# >= 17) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor9=#colorCore16#,(255 * (#cpuCores# >= 16) * (#showAvgCpu# = 0))
LineColor10=#colorCore15#,(255 * (#cpuCores# >= 15) * (#showAvgCpu# = 0))
LineColor11=#colorCore14#,(255 * (#cpuCores# >= 14) * (#showAvgCpu# = 0))
LineColor12=#colorCore13#,(255 * (#cpuCores# >= 13) * (#showAvgCpu# = 0))
LineColor13=#colorCore12#,(255 * (#cpuCores# >= 12) * (#showAvgCpu# = 0))
LineColor14=#colorCore11#,(255 * (#cpuCores# >= 11) * (#showAvgCpu# = 0))
LineColor15=#colorCore10#,(255 * (#cpuCores# >= 10) * (#showAvgCpu# = 0))
LineColor16=#colorCore9#,(255 * (#cpuCores# >= 9) * (#showAvgCpu# = 0))
LineColor17=#colorCore8#,(255 * (#cpuCores# >= 8) * (#showAvgCpu# = 0))
LineColor18=#colorCore7#,(255 * (#cpuCores# >= 7) * (#showAvgCpu# = 0))
LineColor19=#colorCore6#,(255 * (#cpuCores# >= 6) * (#showAvgCpu# = 0))
LineColor20=#colorCore5#,(255 * (#cpuCores# >= 5) * (#showAvgCpu# = 0))
LineColor21=#colorCore4#,(255 * (#cpuCores# >= 4) * (#showAvgCpu# = 0))
LineColor22=#colorCore3#,(255 * (#cpuCores# >= 3) * (#showAvgCpu# = 0))
LineColor23=#colorCore2#,(255 * (#cpuCores# >= 2) * (#showAvgCpu# = 0))
LineColor24=#colorCore1#,(255 * (#cpuCores# >= 1) * (#showAvgCpu# = 0))
LineColor25=#colorAvgCpu#,(#showAvgCpu# * 255)
LineColor26=#colorCpuFan#,(#showCpuFanGraph# * 255 * (#extProgram# = 1))
LineColor27=#colorCpuFan#,(#showCpuFanGraph# * 255 * (#extProgram# = 4))
LineColor28=#colorPage#,(#showPageFile# * 255)
LineColor29=#colorRam#
LineColor30=#colorCpuTemp#,(#showCpuTempGraph# * 255 * (#extProgram# = 1))
LineColor31=#colorCpuTemp#,(#showCpuTempGraph# * 255 * ((#extProgram# = 2) || (#extProgram# = 6)))
LineColor32=#colorCpuTemp#,(#showCpuTempGraph# * 255 * (#extProgram# = 4))