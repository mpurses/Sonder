; Draw lines from last to first, to improve aesthetics
[MeterLineGraph]
Meter=Line
MeterStyle=StyleLineGraph
X=r
Y=r
LineCount=56
MeasureName=MeasureCpuUsageCore48
MeasureName2=MeasureCpuUsageCore47
MeasureName3=MeasureCpuUsageCore46
MeasureName4=MeasureCpuUsageCore45
MeasureName5=MeasureCpuUsageCore44
MeasureName6=MeasureCpuUsageCore43
MeasureName7=MeasureCpuUsageCore42
MeasureName8=MeasureCpuUsageCore41
MeasureName9=MeasureCpuUsageCore40
MeasureName10=MeasureCpuUsageCore39
MeasureName11=MeasureCpuUsageCore38
MeasureName12=MeasureCpuUsageCore37
MeasureName13=MeasureCpuUsageCore36
MeasureName14=MeasureCpuUsageCore35
MeasureName15=MeasureCpuUsageCore34
MeasureName16=MeasureCpuUsageCore33
MeasureName17=MeasureCpuUsageCore32
MeasureName18=MeasureCpuUsageCore31
MeasureName19=MeasureCpuUsageCore30
MeasureName20=MeasureCpuUsageCore29
MeasureName21=MeasureCpuUsageCore28
MeasureName22=MeasureCpuUsageCore27
MeasureName23=MeasureCpuUsageCore26
MeasureName24=MeasureCpuUsageCore25
MeasureName25=MeasureCpuUsageCore24
MeasureName26=MeasureCpuUsageCore23
MeasureName27=MeasureCpuUsageCore22
MeasureName28=MeasureCpuUsageCore21
MeasureName29=MeasureCpuUsageCore20
MeasureName30=MeasureCpuUsageCore19
MeasureName31=MeasureCpuUsageCore18
MeasureName32=MeasureCpuUsageCore17
MeasureName33=MeasureCpuUsageCore16
MeasureName34=MeasureCpuUsageCore15
MeasureName35=MeasureCpuUsageCore14
MeasureName36=MeasureCpuUsageCore13
MeasureName37=MeasureCpuUsageCore12
MeasureName38=MeasureCpuUsageCore11
MeasureName39=MeasureCpuUsageCore10
MeasureName40=MeasureCpuUsageCore9
MeasureName41=MeasureCpuUsageCore8
MeasureName42=MeasureCpuUsageCore7
MeasureName43=MeasureCpuUsageCore6
MeasureName44=MeasureCpuUsageCore5
MeasureName45=MeasureCpuUsageCore4
MeasureName46=MeasureCpuUsageCore3
MeasureName47=MeasureCpuUsageCore2
MeasureName48=MeasureCpuUsageCore1
MeasureName49=MeasureCpuUsage
MeasureName59=MeasureCpuFanPercentCalc
MeasureName51=MeasureCpuFanPercentCalcSpeedFan
MeasureName52=MeasurePageUsage
MeasureName53=MeasureRamUsage
MeasureName54=MeasureCpuTempHwinfoPackage
MeasureName55=MeasureCpuTempCoreTempCore1
MeasureName56=MeasureCpuTempSpeedFanCore1
Scale54=(100 / max([#[#maxCpuTempMode]MaxCpuTemp],1))
Scale55=(100 / max([#[#maxCpuTempMode]MaxCpuTemp],1))
Scale56=(100 / max([#[#maxCpuTempMode]MaxCpuTemp],1))
LineColor=#colorCore48#,(255 * (#cpuCores# >= 48) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor2=#colorCore47#,(255 * (#cpuCores# >= 47) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor3=#colorCore46#,(255 * (#cpuCores# >= 46) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor4=#colorCore45#,(255 * (#cpuCores# >= 45) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor5=#colorCore44#,(255 * (#cpuCores# >= 44) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor6=#colorCore43#,(255 * (#cpuCores# >= 43) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor7=#colorCore42#,(255 * (#cpuCores# >= 42) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor8=#colorCore41#,(255 * (#cpuCores# >= 41) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor9=#colorCore40#,(255 * (#cpuCores# >= 40) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor10=#colorCore39#,(255 * (#cpuCores# >= 39) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor11=#colorCore38#,(255 * (#cpuCores# >= 38) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor12=#colorCore37#,(255 * (#cpuCores# >= 37) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor13=#colorCore36#,(255 * (#cpuCores# >= 36) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor14=#colorCore35#,(255 * (#cpuCores# >= 35) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor15=#colorCore34#,(255 * (#cpuCores# >= 34) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor16=#colorCore33#,(255 * (#cpuCores# >= 33) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor17=#colorCore32#,(255 * (#cpuCores# >= 32) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor18=#colorCore31#,(255 * (#cpuCores# >= 31) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor19=#colorCore30#,(255 * (#cpuCores# >= 30) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor20=#colorCore29#,(255 * (#cpuCores# >= 29) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor21=#colorCore28#,(255 * (#cpuCores# >= 28) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor22=#colorCore27#,(255 * (#cpuCores# >= 27) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor23=#colorCore26#,(255 * (#cpuCores# >= 26) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor24=#colorCore25#,(255 * (#cpuCores# >= 25) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor25=#colorCore24#,(255 * (#cpuCores# >= 24) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor26=#colorCore23#,(255 * (#cpuCores# >= 23) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor27=#colorCore22#,(255 * (#cpuCores# >= 22) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor28=#colorCore21#,(255 * (#cpuCores# >= 21) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor29=#colorCore20#,(255 * (#cpuCores# >= 20) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor30=#colorCore19#,(255 * (#cpuCores# >= 19) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor31=#colorCore18#,(255 * (#cpuCores# >= 18) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor32=#colorCore17#,(255 * (#cpuCores# >= 17) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor33=#colorCore16#,(255 * (#cpuCores# >= 16) * (#showAvgCpu# = 0))
LineColor34=#colorCore15#,(255 * (#cpuCores# >= 15) * (#showAvgCpu# = 0))
LineColor35=#colorCore14#,(255 * (#cpuCores# >= 14) * (#showAvgCpu# = 0))
LineColor36=#colorCore13#,(255 * (#cpuCores# >= 13) * (#showAvgCpu# = 0))
LineColor37=#colorCore12#,(255 * (#cpuCores# >= 12) * (#showAvgCpu# = 0))
LineColor38=#colorCore11#,(255 * (#cpuCores# >= 11) * (#showAvgCpu# = 0))
LineColor39=#colorCore10#,(255 * (#cpuCores# >= 10) * (#showAvgCpu# = 0))
LineColor40=#colorCore9#,(255 * (#cpuCores# >= 9) * (#showAvgCpu# = 0))
LineColor41=#colorCore8#,(255 * (#cpuCores# >= 8) * (#showAvgCpu# = 0))
LineColor42=#colorCore7#,(255 * (#cpuCores# >= 7) * (#showAvgCpu# = 0))
LineColor43=#colorCore6#,(255 * (#cpuCores# >= 6) * (#showAvgCpu# = 0))
LineColor44=#colorCore5#,(255 * (#cpuCores# >= 5) * (#showAvgCpu# = 0))
LineColor45=#colorCore4#,(255 * (#cpuCores# >= 4) * (#showAvgCpu# = 0))
LineColor46=#colorCore3#,(255 * (#cpuCores# >= 3) * (#showAvgCpu# = 0))
LineColor47=#colorCore2#,(255 * (#cpuCores# >= 2) * (#showAvgCpu# = 0))
LineColor48=#colorCore1#,(255 * (#cpuCores# >= 1) * (#showAvgCpu# = 0))
LineColor49=#colorAvgCpu#,(#showAvgCpu# * 255)
LineColor50=#colorCpuFan#,(#showCpuFanGraph# * 255 * (#extProgram# = 1))
LineColor51=#colorCpuFan#,(#showCpuFanGraph# * 255 * (#extProgram# = 4))
LineColor52=#colorPage#,(#showPageFile# * 255)
LineColor53=#colorRam#
LineColor54=#colorCpuTemp#,(#showCpuTempGraph# * 255 * (#extProgram# = 1))
LineColor55=#colorCpuTemp#,(#showCpuTempGraph# * 255 * ((#extProgram# = 2) || (#extProgram# = 6)))
LineColor56=#colorCpuTemp#,(#showCpuTempGraph# * 255 * (#extProgram# = 4))