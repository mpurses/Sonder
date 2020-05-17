; Core Usages
[MeasureCpuUsageCore1]
Measure=CPU
Processor=1
Disabled=(#cpuCores# < 1)

[MeasureCpuUsageCore2]
Measure=CPU
Processor=2
Disabled=(#cpuCores# < 2)

[MeasureCpuUsageCore3]
Measure=CPU
Processor=3
Disabled=(#cpuCores# < 3)

[MeasureCpuUsageCore4]
Measure=CPU
Processor=4
Disabled=(#cpuCores# < 4)

[MeasureCpuUsageCore5]
Measure=CPU
Processor=5
Disabled=(#cpuCores# < 5)

[MeasureCpuUsageCore6]
Measure=CPU
Processor=6
Disabled=(#cpuCores# < 6)

[MeasureCpuUsageCore7]
Measure=CPU
Processor=7
Disabled=(#cpuCores# < 7)

[MeasureCpuUsageCore8]
Measure=CPU
Processor=8
Disabled=(#cpuCores# < 8)

; Core Temperatures
; __ HWiNFO
[MeasureCpuTempHwinfoCore1]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core0Temp-EntryId#
HWiNFOType=CurrentValue
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore1Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore1Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching | CpuTempHwinfo
Disabled=(((#showCoreTemps# = 0) && (#showCpuTempGraph# = 0)) || (#cpuCores# / #threadsPerCore# < 1)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore2]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-Core1Temp-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Core1Temp-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core1Temp-EntryId#
HWiNFOType=CurrentValue
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore2Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore2Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 2)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore3]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-Core2Temp-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Core2Temp-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core2Temp-EntryId#
HWiNFOType=CurrentValue
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore3Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore3Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 3)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore4]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-Core3Temp-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Core3Temp-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core3Temp-EntryId#
HWiNFOType=CurrentValue
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore4Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore4Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 4)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore5]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-Core4Temp-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Core4Temp-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core4Temp-EntryId#
HWiNFOType=CurrentValue
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore5Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore5Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 5)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore6]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-Core5Temp-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Core5Temp-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core5Temp-EntryId#
HWiNFOType=CurrentValue
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore6Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore6Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 6)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore7]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-Core6Temp-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Core6Temp-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core6Temp-EntryId#
HWiNFOType=CurrentValue
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore7Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore7Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 7)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuTempHwinfoCore8]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-Core7Temp-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Core7Temp-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core7Temp-EntryId#
HWiNFOType=CurrentValue
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore8Temp MeasureName "#CURRENTSECTION#"][!UpdateMeter MeterCore8Temp]
Group=CoreTemps | HWiNFO | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 8)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

; __ CoreTemp
[MeasureCpuTempCoreTempCore1]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=0
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore1Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore1Temp]
MinValue=0
MaxValue=[#[#maxCpuTempMode]MaxCpuTemp]
DynamicVariables=1
Group=CoreTemps | ProgramSwitching | CpuTempCoreTemp
Disabled=(((#showCoreTemps# = 0) && (#showCpuTempGraph# = 0)) || (#cpuCores# / #threadsPerCore# < 1)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore2]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=1
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore2Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore2Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 2)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore3]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=2
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore3Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore3Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 3)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore4]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=3
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore4Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore4Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 4)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore5]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=4
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore5Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore5Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 5)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore6]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=5
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore6Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore6Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 6)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore7]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=6
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore7Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore7Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 7)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

[MeasureCpuTempCoreTempCore8]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=7
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore8Temp MeasureName2 "#CURRENTSECTION#"][!UpdateMeter MeterCore8Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 8)) || ((#extProgram# <> 2) && (#extProgram# <> 6))

; __ SpeedFan
[MeasureCpuTempSpeedFanCore1]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 0)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore1Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore1Temp]
IfCondition2=MeasureCpuTempSpeedFanCore1 > #autoMaxCpuTemp#
IfTrueAction2=[!SetVariable autoMaxCpuTemp "(max([MeasureCpuTempSpeedFanCore1:], 1))"][!WriteKeyValue Variables autoMaxCpuTemp "(max([MeasureCpuTempSpeedFanCore1:], 1))" "#dynamicVarsPath#"][!UpdateMeasure MeasureCpuTempSpeedFanCore1]
MinValue=0
MaxValue=[#[#maxCpuTempMode]MaxCpuTemp]
DynamicVariables=1
Group=CoreTemps | ProgramSwitching | CpuTempSpeedFan
Disabled=(((#showCoreTemps# = 0) && (#showCpuTempGraph# = 0)) || (#cpuCores# / #threadsPerCore# < 1)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore2]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 1)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore2Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore2Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 2)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore3]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 2)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore3Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore3Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 3)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore4]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 3)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore4Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore4Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 4)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore5]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 4)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore5Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore5Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 5)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore6]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 5)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore6Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore6Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 6)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore7]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 6)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore7Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore7Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 7)) || (#extProgram# <> 4)

[MeasureCpuTempSpeedFanCore8]
Measure=Plugin
Plugin=SpeedFanPlugin
SpeedFanType=Temperature
SpeedFanNumber=(#sfCoreTemp# + 7)
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore8Temp MeasureName3 "#CURRENTSECTION#"][!UpdateMeter MeterCore8Temp]
Group=CoreTemps | ProgramSwitching
Disabled=((#showCoreTemps# <> 1) || (#cpuCores# / #threadsPerCore# < 8)) || (#extProgram# <> 4)

; Core Voltages
[MeasureCpuVoltageCore1]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core0Vid-EntryId#
HWiNFOType=CurrentValue
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore1Voltage MeasureName "MeasureCpuVoltageCore1"][!UpdateMeter MeterCore1Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 1)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore2]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-Core1Vid-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Core1Vid-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core1Vid-EntryId#
HWiNFOType=CurrentValue
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore2Voltage MeasureName "MeasureCpuVoltageCore2"][!UpdateMeter MeterCore2Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 2)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore3]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-Core2Vid-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Core2Vid-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core2Vid-EntryId#
HWiNFOType=CurrentValue
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore3Voltage MeasureName "MeasureCpuVoltageCore3"][!UpdateMeter MeterCore3Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 3)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore4]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-Core3Vid-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Core3Vid-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core3Vid-EntryId#
HWiNFOType=CurrentValue
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore4Voltage MeasureName "MeasureCpuVoltageCore4"][!UpdateMeter MeterCore4Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 4)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore5]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-Core4Vid-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Core4Vid-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core4Vid-EntryId#
HWiNFOType=CurrentValue
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore5Voltage MeasureName "MeasureCpuVoltageCore5"][!UpdateMeter MeterCore5Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 5)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore6]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-Core5Vid-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Core5Vid-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core5Vid-EntryId#
HWiNFOType=CurrentValue
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore6Voltage MeasureName "MeasureCpuVoltageCore6"][!UpdateMeter MeterCore6Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 6)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore7]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-Core6Vid-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Core6Vid-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core6Vid-EntryId#
HWiNFOType=CurrentValue
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore7Voltage MeasureName "MeasureCpuVoltageCore7"][!UpdateMeter MeterCore7Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 7)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)

[MeasureCpuVoltageCore8]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-Core7Vid-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-Core7Vid-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-Core7Vid-EntryId#
HWiNFOType=CurrentValue
IfCondition=MeasureCpuThreadsPerCore = 1
IfTrueAction=[!SetOption MeterCore8Voltage MeasureName "MeasureCpuVoltageCore8"][!UpdateMeter MeterCore8Voltage]
Group=CoreVoltages | ProgramSwitching
Disabled=((#showCoreVoltages# = 0) || (#cpuCores# / #threadsPerCore# < 8)) || (#extProgram# = 0) || (#extProgram# = 2) || (#extProgram# = 4) || (#extProgram# = 6)