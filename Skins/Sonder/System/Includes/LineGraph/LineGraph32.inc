; Draw lines from last to first, to improve aesthetics
[MeterLineGraph]
Meter=Line
MeterStyle=StyleLineGraph
X=r
Y=r
LineCount=40
MeasureName=MeasureCpuUsageCore32
MeasureName2=MeasureCpuUsageCore31
MeasureName3=MeasureCpuUsageCore30
MeasureName4=MeasureCpuUsageCore29
MeasureName5=MeasureCpuUsageCore28
MeasureName6=MeasureCpuUsageCore27
MeasureName7=MeasureCpuUsageCore26
MeasureName8=MeasureCpuUsageCore25
MeasureName9=MeasureCpuUsageCore24
MeasureName10=MeasureCpuUsageCore23
MeasureName11=MeasureCpuUsageCore22
MeasureName12=MeasureCpuUsageCore21
MeasureName13=MeasureCpuUsageCore20
MeasureName14=MeasureCpuUsageCore19
MeasureName15=MeasureCpuUsageCore18
MeasureName16=MeasureCpuUsageCore17
MeasureName17=MeasureCpuUsageCore16
MeasureName18=MeasureCpuUsageCore15
MeasureName19=MeasureCpuUsageCore14
MeasureName20=MeasureCpuUsageCore13
MeasureName21=MeasureCpuUsageCore12
MeasureName22=MeasureCpuUsageCore11
MeasureName23=MeasureCpuUsageCore10
MeasureName24=MeasureCpuUsageCore9
MeasureName25=MeasureCpuUsageCore8
MeasureName26=MeasureCpuUsageCore7
MeasureName27=MeasureCpuUsageCore6
MeasureName28=MeasureCpuUsageCore5
MeasureName29=MeasureCpuUsageCore4
MeasureName30=MeasureCpuUsageCore3
MeasureName31=MeasureCpuUsageCore2
MeasureName32=MeasureCpuUsageCore1
MeasureName33=MeasureCpuUsage
MeasureName34=MeasureCpuFanPercentCalc
MeasureName35=MeasureCpuFanPercentCalcSpeedFan
MeasureName36=MeasurePageUsage
MeasureName37=MeasureRamUsage
MeasureName38=MeasureCpuTempHwinfoPackage
MeasureName39=MeasureCpuTempCoreTempCore1
MeasureName40=MeasureCpuTempSpeedFanCore1
Scale38=(100 / max([#[#maxCpuTempMode]MaxCpuTemp],1))
Scale39=(100 / max([#[#maxCpuTempMode]MaxCpuTemp],1))
Scale40=(100 / max([#[#maxCpuTempMode]MaxCpuTemp],1))
LineColor=#colorCore32#,(255 * (#cpuCores# >= 32) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor2=#colorCore31#,(255 * (#cpuCores# >= 31) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor3=#colorCore30#,(255 * (#cpuCores# >= 30) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor4=#colorCore29#,(255 * (#cpuCores# >= 29) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor5=#colorCore28#,(255 * (#cpuCores# >= 28) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor6=#colorCore27#,(255 * (#cpuCores# >= 27) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor7=#colorCore26#,(255 * (#cpuCores# >= 26) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor8=#colorCore25#,(255 * (#cpuCores# >= 25) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor9=#colorCore24#,(255 * (#cpuCores# >= 24) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor10=#colorCore23#,(255 * (#cpuCores# >= 23) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor11=#colorCore22#,(255 * (#cpuCores# >= 22) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor12=#colorCore21#,(255 * (#cpuCores# >= 21) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor13=#colorCore20#,(255 * (#cpuCores# >= 20) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor14=#colorCore19#,(255 * (#cpuCores# >= 19) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor15=#colorCore18#,(255 * (#cpuCores# >= 18) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor16=#colorCore17#,(255 * (#cpuCores# >= 17) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor17=#colorCore16#,(255 * (#cpuCores# >= 16) * (#showAvgCpu# = 0))
LineColor18=#colorCore15#,(255 * (#cpuCores# >= 15) * (#showAvgCpu# = 0))
LineColor19=#colorCore14#,(255 * (#cpuCores# >= 14) * (#showAvgCpu# = 0))
LineColor20=#colorCore13#,(255 * (#cpuCores# >= 13) * (#showAvgCpu# = 0))
LineColor21=#colorCore12#,(255 * (#cpuCores# >= 12) * (#showAvgCpu# = 0))
LineColor22=#colorCore11#,(255 * (#cpuCores# >= 11) * (#showAvgCpu# = 0))
LineColor23=#colorCore10#,(255 * (#cpuCores# >= 10) * (#showAvgCpu# = 0))
LineColor24=#colorCore9#,(255 * (#cpuCores# >= 9) * (#showAvgCpu# = 0))
LineColor25=#colorCore8#,(255 * (#cpuCores# >= 8) * (#showAvgCpu# = 0))
LineColor26=#colorCore7#,(255 * (#cpuCores# >= 7) * (#showAvgCpu# = 0))
LineColor27=#colorCore6#,(255 * (#cpuCores# >= 6) * (#showAvgCpu# = 0))
LineColor28=#colorCore5#,(255 * (#cpuCores# >= 5) * (#showAvgCpu# = 0))
LineColor29=#colorCore4#,(255 * (#cpuCores# >= 4) * (#showAvgCpu# = 0))
LineColor30=#colorCore3#,(255 * (#cpuCores# >= 3) * (#showAvgCpu# = 0))
LineColor31=#colorCore2#,(255 * (#cpuCores# >= 2) * (#showAvgCpu# = 0))
LineColor32=#colorCore1#,(255 * (#cpuCores# >= 1) * (#showAvgCpu# = 0))
LineColor33=#colorAvgCpu#,(#showAvgCpu# * 255)
LineColor34=#colorCpuFan#,(#showCpuFanGraph# * 255 * (#extProgram# = 1))
LineColor35=#colorCpuFan#,(#showCpuFanGraph# * 255 * (#extProgram# = 4))
LineColor36=#colorPage#,(#showPageFile# * 255)
LineColor37=#colorRam#
LineColor38=#colorCpuTemp#,(#showCpuTempGraph# * 255 * (#extProgram# = 1))
LineColor39=#colorCpuTemp#,(#showCpuTempGraph# * 255 * ((#extProgram# = 2) || (#extProgram# = 6)))
LineColor40=#colorCpuTemp#,(#showCpuTempGraph# * 255 * (#extProgram# = 4))