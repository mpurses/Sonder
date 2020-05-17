; Draw lines from last to first, to improve aesthetics
[MeterLineGraph]
Meter=Line
MeterStyle=StyleLineGraph
X=r
Y=r
LineCount=72
MeasureName=MeasureCpuUsageCore64
MeasureName2=MeasureCpuUsageCore63
MeasureName3=MeasureCpuUsageCore62
MeasureName4=MeasureCpuUsageCore61
MeasureName5=MeasureCpuUsageCore60
MeasureName6=MeasureCpuUsageCore59
MeasureName7=MeasureCpuUsageCore58
MeasureName8=MeasureCpuUsageCore57
MeasureName9=MeasureCpuUsageCore56
MeasureName10=MeasureCpuUsageCore55
MeasureName11=MeasureCpuUsageCore54
MeasureName12=MeasureCpuUsageCore53
MeasureName13=MeasureCpuUsageCore52
MeasureName14=MeasureCpuUsageCore51
MeasureName15=MeasureCpuUsageCore50
MeasureName16=MeasureCpuUsageCore49
MeasureName17=MeasureCpuUsageCore48
MeasureName18=MeasureCpuUsageCore47
MeasureName19=MeasureCpuUsageCore46
MeasureName20=MeasureCpuUsageCore45
MeasureName21=MeasureCpuUsageCore44
MeasureName22=MeasureCpuUsageCore43
MeasureName23=MeasureCpuUsageCore42
MeasureName24=MeasureCpuUsageCore41
MeasureName25=MeasureCpuUsageCore40
MeasureName26=MeasureCpuUsageCore39
MeasureName27=MeasureCpuUsageCore38
MeasureName28=MeasureCpuUsageCore37
MeasureName29=MeasureCpuUsageCore36
MeasureName30=MeasureCpuUsageCore35
MeasureName31=MeasureCpuUsageCore34
MeasureName32=MeasureCpuUsageCore33
MeasureName33=MeasureCpuUsageCore32
MeasureName34=MeasureCpuUsageCore31
MeasureName35=MeasureCpuUsageCore30
MeasureName36=MeasureCpuUsageCore29
MeasureName37=MeasureCpuUsageCore28
MeasureName38=MeasureCpuUsageCore27
MeasureName39=MeasureCpuUsageCore26
MeasureName40=MeasureCpuUsageCore25
MeasureName41=MeasureCpuUsageCore24
MeasureName42=MeasureCpuUsageCore23
MeasureName43=MeasureCpuUsageCore22
MeasureName44=MeasureCpuUsageCore21
MeasureName45=MeasureCpuUsageCore20
MeasureName46=MeasureCpuUsageCore19
MeasureName47=MeasureCpuUsageCore18
MeasureName48=MeasureCpuUsageCore17
MeasureName49=MeasureCpuUsageCore16
MeasureName50=MeasureCpuUsageCore15
MeasureName51=MeasureCpuUsageCore14
MeasureName52=MeasureCpuUsageCore13
MeasureName53=MeasureCpuUsageCore12
MeasureName54=MeasureCpuUsageCore11
MeasureName55=MeasureCpuUsageCore10
MeasureName56=MeasureCpuUsageCore9
MeasureName57=MeasureCpuUsageCore8
MeasureName58=MeasureCpuUsageCore7
MeasureName59=MeasureCpuUsageCore6
MeasureName60=MeasureCpuUsageCore5
MeasureName61=MeasureCpuUsageCore4
MeasureName62=MeasureCpuUsageCore3
MeasureName63=MeasureCpuUsageCore2
MeasureName64=MeasureCpuUsageCore1
MeasureName65=MeasureCpuUsage
MeasureName66=MeasureCpuFanPercentCalc
MeasureName67=MeasureCpuFanPercentCalcSpeedFan
MeasureName68=MeasurePageUsage
MeasureName69=MeasureRamUsage
MeasureName70=MeasureCpuTempHwinfoPackage
MeasureName71=MeasureCpuTempCoreTempCore1
MeasureName72=MeasureCpuTempSpeedFanCore1
Scale70=(100 / max([#[#maxCpuTempMode]MaxCpuTemp],1))
Scale71=(100 / max([#[#maxCpuTempMode]MaxCpuTemp],1))
Scale72=(100 / max([#[#maxCpuTempMode]MaxCpuTemp],1))
LineColor=#colorCore64#,(255 * (#cpuCores# >= 64) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor2=#colorCore63#,(255 * (#cpuCores# >= 63) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor3=#colorCore62#,(255 * (#cpuCores# >= 62) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor4=#colorCore61#,(255 * (#cpuCores# >= 61) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor5=#colorCore60#,(255 * (#cpuCores# >= 60) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor6=#colorCore59#,(255 * (#cpuCores# >= 59) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor7=#colorCore58#,(255 * (#cpuCores# >= 58) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor8=#colorCore57#,(255 * (#cpuCores# >= 57) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor9=#colorCore56#,(255 * (#cpuCores# >= 56) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor10=#colorCore55#,(255 * (#cpuCores# >= 55) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor11=#colorCore54#,(255 * (#cpuCores# >= 54) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor12=#colorCore53#,(255 * (#cpuCores# >= 53) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor13=#colorCore52#,(255 * (#cpuCores# >= 52) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor14=#colorCore51#,(255 * (#cpuCores# >= 51) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor15=#colorCore50#,(255 * (#cpuCores# >= 50) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor16=#colorCore49#,(255 * (#cpuCores# >= 49) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor17=#colorCore48#,(255 * (#cpuCores# >= 48) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor18=#colorCore47#,(255 * (#cpuCores# >= 47) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor19=#colorCore46#,(255 * (#cpuCores# >= 46) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor20=#colorCore45#,(255 * (#cpuCores# >= 45) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor21=#colorCore44#,(255 * (#cpuCores# >= 44) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor22=#colorCore43#,(255 * (#cpuCores# >= 43) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor23=#colorCore42#,(255 * (#cpuCores# >= 42) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor24=#colorCore41#,(255 * (#cpuCores# >= 41) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor25=#colorCore40#,(255 * (#cpuCores# >= 40) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor26=#colorCore39#,(255 * (#cpuCores# >= 39) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor27=#colorCore38#,(255 * (#cpuCores# >= 38) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor28=#colorCore37#,(255 * (#cpuCores# >= 37) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor29=#colorCore36#,(255 * (#cpuCores# >= 36) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor30=#colorCore35#,(255 * (#cpuCores# >= 35) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor31=#colorCore34#,(255 * (#cpuCores# >= 34) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor32=#colorCore33#,(255 * (#cpuCores# >= 33) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor33=#colorCore32#,(255 * (#cpuCores# >= 32) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor34=#colorCore31#,(255 * (#cpuCores# >= 31) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor35=#colorCore30#,(255 * (#cpuCores# >= 30) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor36=#colorCore29#,(255 * (#cpuCores# >= 29) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor37=#colorCore28#,(255 * (#cpuCores# >= 28) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor38=#colorCore27#,(255 * (#cpuCores# >= 27) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor39=#colorCore26#,(255 * (#cpuCores# >= 26) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor40=#colorCore25#,(255 * (#cpuCores# >= 25) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor41=#colorCore24#,(255 * (#cpuCores# >= 24) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor42=#colorCore23#,(255 * (#cpuCores# >= 23) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor43=#colorCore22#,(255 * (#cpuCores# >= 22) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor44=#colorCore21#,(255 * (#cpuCores# >= 21) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor45=#colorCore20#,(255 * (#cpuCores# >= 20) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor46=#colorCore19#,(255 * (#cpuCores# >= 19) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor47=#colorCore18#,(255 * (#cpuCores# >= 18) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor48=#colorCore17#,(255 * (#cpuCores# >= 17) * (#showAvgCpu# = 0) * (#graphAllCoresMode# = 1))
LineColor49=#colorCore16#,(255 * (#cpuCores# >= 16) * (#showAvgCpu# = 0))
LineColor50=#colorCore15#,(255 * (#cpuCores# >= 15) * (#showAvgCpu# = 0))
LineColor51=#colorCore14#,(255 * (#cpuCores# >= 14) * (#showAvgCpu# = 0))
LineColor52=#colorCore13#,(255 * (#cpuCores# >= 13) * (#showAvgCpu# = 0))
LineColor53=#colorCore12#,(255 * (#cpuCores# >= 12) * (#showAvgCpu# = 0))
LineColor54=#colorCore11#,(255 * (#cpuCores# >= 11) * (#showAvgCpu# = 0))
LineColor55=#colorCore10#,(255 * (#cpuCores# >= 10) * (#showAvgCpu# = 0))
LineColor56=#colorCore9#,(255 * (#cpuCores# >= 9) * (#showAvgCpu# = 0))
LineColor57=#colorCore8#,(255 * (#cpuCores# >= 8) * (#showAvgCpu# = 0))
LineColor58=#colorCore7#,(255 * (#cpuCores# >= 7) * (#showAvgCpu# = 0))
LineColor59=#colorCore6#,(255 * (#cpuCores# >= 6) * (#showAvgCpu# = 0))
LineColor60=#colorCore5#,(255 * (#cpuCores# >= 5) * (#showAvgCpu# = 0))
LineColor61=#colorCore4#,(255 * (#cpuCores# >= 4) * (#showAvgCpu# = 0))
LineColor62=#colorCore3#,(255 * (#cpuCores# >= 3) * (#showAvgCpu# = 0))
LineColor63=#colorCore2#,(255 * (#cpuCores# >= 2) * (#showAvgCpu# = 0))
LineColor64=#colorCore1#,(255 * (#cpuCores# >= 1) * (#showAvgCpu# = 0))
LineColor65=#colorAvgCpu#,(#showAvgCpu# * 255)
LineColor66=#colorCpuFan#,(#showCpuFanGraph# * 255 * (#extProgram# = 1))
LineColor67=#colorCpuFan#,(#showCpuFanGraph# * 255 * (#extProgram# = 4))
LineColor68=#colorPage#,(#showPageFile# * 255)
LineColor69=#colorRam#
LineColor70=#colorCpuTemp#,(#showCpuTempGraph# * 255 * (#extProgram# = 1))
LineColor71=#colorCpuTemp#,(#showCpuTempGraph# * 255 * ((#extProgram# = 2) || (#extProgram# = 6)))
LineColor72=#colorCpuTemp#,(#showCpuTempGraph# * 255 * (#extProgram# = 4))