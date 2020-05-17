[Variables]
ttSoundPath=#@#Assets\Sounds\alarmalerteffect.wav
threadCount=8

; Fixed precision format
fpfRamDepth=4
fpfPageDepth=4

; SpeedFan Configuration
sfCoreTemp=10
sfCpuFan=1

; Settings
showCpuName=1
showPageFile=0
showCoreTemps=1
showCoreVoltages=1
showCpuTempGraph=1
showTopProcess=0
showCpuFan=1
showCpuFanGraph=0
showCpuClock=1
showLineGraph=1
; -----
; Naming mixup - first is line graph, second is the main display
showAvgCpu=0
showAvgCpuUsage=0
; -----
showTt=0
playTtSound=0
graphAllCoresMode=0

cpuName=auto

maxCpuTempMode=auto
maxCpuFanMode=auto
customMaxCpuTemp=85
customMaxCpuFan=1600

; Colors
colorRam=107,198,250
colorPage=255,204,0
colorAvgCpu=107,238,98
colorCpuTemp=200,0,0
colorCpuFan=150,150,150
ttHistogramAlpha=70
colorTt=255,100,100
colorCore1=107,238,98
colorCore2=255,246,42
colorCore3=250,158,0
colorCore4=236,28,70
colorCore5=199,36,199
colorCore6=145,70,232
colorCore7=42,112,250
colorCore8=43,224,224
colorCore9=121,182,62
colorCore10=204,255,0
colorCore11=250,205,22
colorCore12=191,100,55
colorCore13=201,41,56
colorCore14=179,0,91
colorCore15=153,84,166
colorCore16=99,125,217
colorCore17=#colorCore1#
colorCore18=#colorCore2#
colorCore19=#colorCore3#
colorCore20=#colorCore4#
colorCore21=#colorCore5#
colorCore22=#colorCore6#
colorCore23=#colorCore7#
colorCore24=#colorCore8#
colorCore25=#colorCore9#
colorCore26=#colorCore10#
colorCore27=#colorCore11#
colorCore28=#colorCore12#
colorCore29=#colorCore13#
colorCore30=#colorCore14#
colorCore31=#colorCore15#
colorCore32=#colorCore16#
colorCore33=#colorCore1#
colorCore34=#colorCore2#
colorCore35=#colorCore3#
colorCore36=#colorCore4#
colorCore37=#colorCore5#
colorCore38=#colorCore6#
colorCore39=#colorCore7#
colorCore40=#colorCore8#
colorCore41=#colorCore9#
colorCore42=#colorCore10#
colorCore43=#colorCore11#
colorCore44=#colorCore12#
colorCore45=#colorCore13#
colorCore46=#colorCore14#
colorCore47=#colorCore15#
colorCore48=#colorCore16#
colorCore49=#colorCore1#
colorCore50=#colorCore2#
colorCore51=#colorCore3#
colorCore52=#colorCore4#
colorCore53=#colorCore5#
colorCore54=#colorCore6#
colorCore55=#colorCore7#
colorCore56=#colorCore8#
colorCore57=#colorCore9#
colorCore58=#colorCore10#
colorCore59=#colorCore11#
colorCore60=#colorCore12#
colorCore61=#colorCore13#
colorCore62=#colorCore14#
colorCore63=#colorCore15#
colorCore64=#colorCore16#

; ====== DEFAULTS ======

dColorRam=107,198,250
dColorPage=255,204,0
dColorCpuFan=150,150,150
dColorAvgCpu=237,28,32
dColorCore1=107,238,98
dColorCore2=255,246,42
dColorCore3=250,158,0
dColorCore4=236,28,70
dColorCore5=199,36,199
dColorCore6=145,70,232
dColorCore7=42,112,250
dColorCore8=43,224,224
dColorCore9=121,182,62
dColorCore10=204,255,0
dColorCore11=250,205,22
dColorCore12=191,100,55
dColorCore13=201,41,56
dColorCore14=179,0,91
dColorCore15=153,84,166
dColorCore16=99,125,217
dColorTt=255,120,147
dColorTempGraph=200,0,0
dTtHistogramAlpha=50

; ===== HWiNFO =====

; 
; CPU 0
; 
; Core 0 Temperature [HWiNFO-CPU0-Core0Temp]
HWiNFO-CPU0-Core0Temp-SensorId=0xf0000400
HWiNFO-CPU0-Core0Temp-SensorInstance=0x0
HWiNFO-CPU0-Core0Temp-EntryId=0x1000000
; Core 1 Temperature [HWiNFO-CPU0-Core1Temp]
HWiNFO-CPU0-Core1Temp-SensorId=0xf0000400
HWiNFO-CPU0-Core1Temp-SensorInstance=0x0
HWiNFO-CPU0-Core1Temp-EntryId=0x1000001
; Core 2 Temperature [HWiNFO-CPU0-Core2Temp]
HWiNFO-CPU0-Core2Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core2Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core2Temp-EntryId=0x1000002
; Core 3 Temperature [HWiNFO-CPU0-Core3Temp]
HWiNFO-CPU0-Core3Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core3Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core3Temp-EntryId=0x1000003
; Core 4 Temperature [HWiNFO-CPU0-Core4Temp]
HWiNFO-CPU0-Core4Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core4Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core4Temp-EntryId=0x1000004
; Core 5 Temperature [HWiNFO-CPU0-Core5Temp]
HWiNFO-CPU0-Core5Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core5Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core5Temp-EntryId=0x1000005
; Core 6 Temperature [HWiNFO-CPU0-Core6Temp]
HWiNFO-CPU0-Core6Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core6Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core6Temp-EntryId=0x1000006
; Core 7 Temperature [HWiNFO-CPU0-Core7Temp]
HWiNFO-CPU0-Core7Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core7Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core7Temp-EntryId=0x1000007
; Core 8 Temperature [HWiNFO-CPU0-Core8Temp]
HWiNFO-CPU0-Core8Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core8Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core8Temp-EntryId=0x1000008
; Core 9 Temperature [HWiNFO-CPU0-Core9Temp]
HWiNFO-CPU0-Core9Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core9Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core9Temp-EntryId=0x1000009
; Core 10 Temperature [HWiNFO-CPU0-Core10Temp]
HWiNFO-CPU0-Core10Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core10Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core10Temp-EntryId=0x100000a
; Core 11 Temperature [HWiNFO-CPU0-Core11Temp]
HWiNFO-CPU0-Core11Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core11Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core11Temp-EntryId=0x100000b
; Core 12 Temperature [HWiNFO-CPU0-Core12Temp]
HWiNFO-CPU0-Core12Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core12Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core12Temp-EntryId=0x100000c
; Core 13 Temperature [HWiNFO-CPU0-Core13Temp]
HWiNFO-CPU0-Core13Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core13Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core13Temp-EntryId=0x100000d
; Core 14 Temperature [HWiNFO-CPU0-Core14Temp]
HWiNFO-CPU0-Core14Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core14Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core14Temp-EntryId=0x100000e
; Core 15 Temperature [HWiNFO-CPU0-Core15Temp]
HWiNFO-CPU0-Core15Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core15Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core15Temp-EntryId=0x100000f
; Core 16 Temperature [HWiNFO-CPU0-Core16Temp]
HWiNFO-CPU0-Core16Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core16Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core16Temp-EntryId=0x1000010
; Core 17 Temperature [HWiNFO-CPU0-Core17Temp]
HWiNFO-CPU0-Core17Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core17Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core17Temp-EntryId=0x1000011
; Core 18 Temperature [HWiNFO-CPU0-Core18Temp]
HWiNFO-CPU0-Core18Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core18Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core18Temp-EntryId=0x1000012
; Core 19 Temperature [HWiNFO-CPU0-Core19Temp]
HWiNFO-CPU0-Core19Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core19Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core19Temp-EntryId=0x1000013
; Core 20 Temperature [HWiNFO-CPU0-Core20Temp]
HWiNFO-CPU0-Core20Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core20Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core20Temp-EntryId=0x1000014
; Core 21 Temperature [HWiNFO-CPU0-Core21Temp]
HWiNFO-CPU0-Core21Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core21Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core21Temp-EntryId=0x1000015
; Core 22 Temperature [HWiNFO-CPU0-Core22Temp]
HWiNFO-CPU0-Core22Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core22Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core22Temp-EntryId=0x1000016
; Core 23 Temperature [HWiNFO-CPU0-Core23Temp]
HWiNFO-CPU0-Core23Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core23Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core23Temp-EntryId=0x1000017
; Core 24 Temperature [HWiNFO-CPU0-Core24Temp]
HWiNFO-CPU0-Core24Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core24Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core24Temp-EntryId=0x1000018
; Core 25 Temperature [HWiNFO-CPU0-Core25Temp]
HWiNFO-CPU0-Core25Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core25Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core25Temp-EntryId=0x1000019
; Core 26 Temperature [HWiNFO-CPU0-Core26Temp]
HWiNFO-CPU0-Core26Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core26Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core26Temp-EntryId=0x100001a
; Core 27 Temperature [HWiNFO-CPU0-Core27Temp]
HWiNFO-CPU0-Core27Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core27Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core27Temp-EntryId=0x100001b
; Core 28 Temperature [HWiNFO-CPU0-Core28Temp]
HWiNFO-CPU0-Core28Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core28Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core28Temp-EntryId=0x100001c
; Core 29 Temperature [HWiNFO-CPU0-Core29Temp]
HWiNFO-CPU0-Core29Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core29Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core29Temp-EntryId=0x100001d
; Core 30 Temperature [HWiNFO-CPU0-Core30Temp]
HWiNFO-CPU0-Core30Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core30Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core30Temp-EntryId=0x100001e
; Core 31 Temperature [HWiNFO-CPU0-Core31Temp]
HWiNFO-CPU0-Core31Temp-SensorId=#HWiNFO-CPU0-Core0Temp-SensorId#
HWiNFO-CPU0-Core31Temp-SensorInstance=#HWiNFO-CPU0-Core0Temp-SensorInstance#
HWiNFO-CPU0-Core31Temp-EntryId=0x100001f

; CPU Package Temperature [HWiNFO-CPU0-PackageTemp]
HWiNFO-CPU0-PackageTemp-SensorId=0xf0000400
HWiNFO-CPU0-PackageTemp-SensorInstance=0x0
HWiNFO-CPU0-PackageTemp-EntryId=0x10000fe
; CPU Core 0 Distance to TjMax [HWiNFO-CPU0-Core0TjMax]
HWiNFO-CPU0-Core0TjMax-SensorId=0xf0000400
HWiNFO-CPU0-Core0TjMax-SensorInstance=0x0
HWiNFO-CPU0-Core0TjMax-EntryId=0x1000004
; CPU Package Thermal Throttling [HWiNFO-CPU0-PackageTt]
HWiNFO-CPU0-PackageTt-SensorId=0xf0000400
HWiNFO-CPU0-PackageTt-SensorInstance=0x0
HWiNFO-CPU0-PackageTt-EntryId=0x800000c

; Core 0 Voltage [HWiNFO-CPU0-Core0Vid]
HWiNFO-CPU0-Core0Vid-SensorId=0xf0000300
HWiNFO-CPU0-Core0Vid-SensorInstance=0x0
HWiNFO-CPU0-Core0Vid-EntryId=0x2000000
; Core 1 Voltage [HWiNFO-CPU0-Core1Vid]
HWiNFO-CPU0-Core1Vid-SensorId=0xf0000300
HWiNFO-CPU0-Core1Vid-SensorInstance=0x0
HWiNFO-CPU0-Core1Vid-EntryId=0x2000001
; Core 2 Voltage [HWiNFO-CPU0-Core2Vid]
HWiNFO-CPU0-Core2Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core2Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core2Vid-EntryId=0x2000002
; Core 3 Voltage [HWiNFO-CPU0-Core3Vid]
HWiNFO-CPU0-Core3Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core3Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core3Vid-EntryId=0x2000003
; Core 4 Voltage [HWiNFO-CPU0-Core4Vid]
HWiNFO-CPU0-Core4Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core4Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core4Vid-EntryId=0x2000004
; Core 5 Voltage [HWiNFO-CPU0-Core5Vid]
HWiNFO-CPU0-Core5Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core5Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core5Vid-EntryId=0x2000005
; Core 6 Voltage [HWiNFO-CPU0-Core6Vid]
HWiNFO-CPU0-Core6Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core6Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core6Vid-EntryId=0x2000006
; Core 7 Voltage [HWiNFO-CPU0-Core7Vid]
HWiNFO-CPU0-Core7Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core7Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core7Vid-EntryId=0x2000007
; Core 8 Voltage [HWiNFO-CPU0-Core8Vid]
HWiNFO-CPU0-Core8Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core8Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core8Vid-EntryId=0x2000008
; Core 9 Voltage [HWiNFO-CPU0-Core9Vid]
HWiNFO-CPU0-Core9Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core9Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core9Vid-EntryId=0x2000009
; Core 10 Voltage [HWiNFO-CPU0-Core10Vid]
HWiNFO-CPU0-Core10Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core10Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core10Vid-EntryId=0x200000a
; Core 11 Voltage [HWiNFO-CPU0-Core11Vid]
HWiNFO-CPU0-Core11Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core11Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core11Vid-EntryId=0x200000b
; Core 12 Voltage [HWiNFO-CPU0-Core12Vid]
HWiNFO-CPU0-Core12Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core12Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core12Vid-EntryId=0x200000c
; Core 13 Voltage [HWiNFO-CPU0-Core13Vid]
HWiNFO-CPU0-Core13Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core13Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core13Vid-EntryId=0x200000d
; Core 14 Voltage [HWiNFO-CPU0-Core14Vid]
HWiNFO-CPU0-Core14Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core14Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core14Vid-EntryId=0x200000e
; Core 15 Voltage [HWiNFO-CPU0-Core15Vid]
HWiNFO-CPU0-Core15Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core15Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core15Vid-EntryId=0x200000f
; Core 16 Voltage [HWiNFO-CPU0-Core16Vid]
HWiNFO-CPU0-Core16Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core16Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core16Vid-EntryId=0x2000010
; Core 17 Voltage [HWiNFO-CPU0-Core17Vid]
HWiNFO-CPU0-Core17Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core17Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core17Vid-EntryId=0x2000011
; Core 18 Voltage [HWiNFO-CPU0-Core18Vid]
HWiNFO-CPU0-Core18Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core18Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core18Vid-EntryId=0x2000012
; Core 19 Voltage [HWiNFO-CPU0-Core19Vid]
HWiNFO-CPU0-Core19Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core19Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core19Vid-EntryId=0x2000013
; Core 20 Voltage [HWiNFO-CPU0-Core20Vid]
HWiNFO-CPU0-Core20Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core20Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core20Vid-EntryId=0x2000014
; Core 21 Voltage [HWiNFO-CPU0-Core21Vid]
HWiNFO-CPU0-Core21Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core21Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core21Vid-EntryId=0x2000015
; Core 22 Voltage [HWiNFO-CPU0-Core22Vid]
HWiNFO-CPU0-Core22Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core22Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core22Vid-EntryId=0x2000016
; Core 23 Voltage [HWiNFO-CPU0-Core23Vid]
HWiNFO-CPU0-Core23Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core23Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core23Vid-EntryId=0x2000017
; Core 24 Voltage [HWiNFO-CPU0-Core24Vid]
HWiNFO-CPU0-Core24Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core24Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core24Vid-EntryId=0x2000018
; Core 25 Voltage [HWiNFO-CPU0-Core25Vid]
HWiNFO-CPU0-Core25Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core25Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core25Vid-EntryId=0x2000019
; Core 26 Voltage [HWiNFO-CPU0-Core26Vid]
HWiNFO-CPU0-Core26Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core26Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core26Vid-EntryId=0x200001a
; Core 27 Voltage [HWiNFO-CPU0-Core27Vid]
HWiNFO-CPU0-Core27Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core27Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core27Vid-EntryId=0x200001b
; Core 28 Voltage [HWiNFO-CPU0-Core28Vid]
HWiNFO-CPU0-Core28Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core28Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core28Vid-EntryId=0x200001c
; Core 29 Voltage [HWiNFO-CPU0-Core29Vid]
HWiNFO-CPU0-Core29Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core29Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core29Vid-EntryId=0x200001d
; Core 30 Voltage [HWiNFO-CPU0-Core30Vid]
HWiNFO-CPU0-Core30Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core30Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core30Vid-EntryId=0x200001e
; Core 31 Voltage [HWiNFO-CPU0-Core31Vid]
HWiNFO-CPU0-Core31Vid-SensorId=#HWiNFO-CPU0-Core0Vid-SensorId#
HWiNFO-CPU0-Core31Vid-SensorInstance=#HWiNFO-CPU0-Core0Vid-SensorInstance#
HWiNFO-CPU0-Core31Vid-EntryId=0x200001f

; CPU Ring Clock [HWiNFO-CPU0-RingClock]
HWiNFO-CPU0-RingClock-SensorId=0xf0000300
HWiNFO-CPU0-RingClock-SensorInstance=0x0
HWiNFO-CPU0-RingClock-EntryId=0x6000000

;
; MOBO
;
; CPU Fan [HWiNFO-MOBO-CPUFan]
HWiNFO-MOBO-CPUFan-SensorId=0xf7067910
HWiNFO-MOBO-CPUFan-SensorInstance=0x0
HWiNFO-MOBO-CPUFan-EntryId=0x3000001

[HWiNFO-Config-General]
HWiNFO-CPU0-RingClock=Ring/LLC Clock (MHz)
HWiNFO-CPU0-PackageTemp=CPU Package Temperature (degrees)
HWINFO-CPU0-PackageTt=CPU Package Thermal Throttling (yes/no)
HWiNFO-CPU0-Core0TjMax=Core 0 Distance to TjMax (degrees)
HWiNFO-MOBO-CPUFan=CPU Fan (Motherboard Sensor) (RPM)

[HWiNFO-Config-Core Temperatures]
HWiNFO-CPU0-Core0Temp=Core 0 Temperature (degrees)
HWiNFO-CPU0-Core1Temp=Core 1 Temperature (degrees)
HWiNFO-CPU0-Core2Temp=Core 2 Temperature (degrees)
HWiNFO-CPU0-Core3Temp=Core 3 Temperature (degrees)
HWiNFO-CPU0-Core4Temp=Core 4 Temperature (degrees)
HWiNFO-CPU0-Core5Temp=Core 5 Temperature (degrees)
HWiNFO-CPU0-Core6Temp=Core 6 Temperature (degrees)
HWiNFO-CPU0-Core7Temp=Core 7 Temperature (degrees)
HWiNFO-CPU0-Core8Temp=Core 8 Temperature (degrees)
HWiNFO-CPU0-Core9Temp=Core 9 Temperature (degrees)
HWiNFO-CPU0-Core10Temp=Core 10 Temperature (degrees)
HWiNFO-CPU0-Core11Temp=Core 11 Temperature (degrees)
HWiNFO-CPU0-Core12Temp=Core 12 Temperature (degrees)
HWiNFO-CPU0-Core13Temp=Core 13 Temperature (degrees)
HWiNFO-CPU0-Core14Temp=Core 14 Temperature (degrees)
HWiNFO-CPU0-Core15Temp=Core 15 Temperature (degrees)
HWiNFO-CPU0-Core16Temp=Core 16 Temperature (degrees)
HWiNFO-CPU0-Core17Temp=Core 17 Temperature (degrees)
HWiNFO-CPU0-Core18Temp=Core 18 Temperature (degrees)
HWiNFO-CPU0-Core19Temp=Core 19 Temperature (degrees)
HWiNFO-CPU0-Core20Temp=Core 20 Temperature (degrees)
HWiNFO-CPU0-Core21Temp=Core 21 Temperature (degrees)
HWiNFO-CPU0-Core22Temp=Core 22 Temperature (degrees)
HWiNFO-CPU0-Core23Temp=Core 23 Temperature (degrees)
HWiNFO-CPU0-Core24Temp=Core 24 Temperature (degrees)
HWiNFO-CPU0-Core25Temp=Core 25 Temperature (degrees)
HWiNFO-CPU0-Core26Temp=Core 26 Temperature (degrees)
HWiNFO-CPU0-Core27Temp=Core 27 Temperature (degrees)
HWiNFO-CPU0-Core28Temp=Core 28 Temperature (degrees)
HWiNFO-CPU0-Core29Temp=Core 29 Temperature (degrees)
HWiNFO-CPU0-Core30Temp=Core 30 Temperature (degrees)
HWiNFO-CPU0-Core31Temp=Core 31 Temperature (degrees)

[HWiNFO-Config-Core Voltages]
HWiNFO-CPU0-Core0Vid=Core 0 VID (volts)
HWiNFO-CPU0-Core1Vid=Core 1 VID (volts)
HWiNFO-CPU0-Core2Vid=Core 2 VID (volts)
HWiNFO-CPU0-Core3Vid=Core 3 VID (volts)
HWiNFO-CPU0-Core4Vid=Core 4 VID (volts)
HWiNFO-CPU0-Core5Vid=Core 5 VID (volts)
HWiNFO-CPU0-Core6Vid=Core 6 VID (volts)
HWiNFO-CPU0-Core7Vid=Core 7 VID (volts)
HWiNFO-CPU0-Core8Vid=Core 8 VID (volts)
HWiNFO-CPU0-Core9Vid=Core 9 VID (volts)
HWiNFO-CPU0-Core10Vid=Core 10 VID (volts)
HWiNFO-CPU0-Core11Vid=Core 11 VID (volts)
HWiNFO-CPU0-Core12Vid=Core 12 VID (volts)
HWiNFO-CPU0-Core13Vid=Core 13 VID (volts)
HWiNFO-CPU0-Core14Vid=Core 14 VID (volts)
HWiNFO-CPU0-Core15Vid=Core 15 VID (volts)
HWiNFO-CPU0-Core16Vid=Core 16 VID (volts)
HWiNFO-CPU0-Core17Vid=Core 17 VID (volts)
HWiNFO-CPU0-Core18Vid=Core 18 VID (volts)
HWiNFO-CPU0-Core19Vid=Core 19 VID (volts)
HWiNFO-CPU0-Core20Vid=Core 20 VID (volts)
HWiNFO-CPU0-Core21Vid=Core 21 VID (volts)
HWiNFO-CPU0-Core22Vid=Core 22 VID (volts)
HWiNFO-CPU0-Core23Vid=Core 23 VID (volts)
HWiNFO-CPU0-Core24Vid=Core 24 VID (volts)
HWiNFO-CPU0-Core25Vid=Core 25 VID (volts)
HWiNFO-CPU0-Core26Vid=Core 26 VID (volts)
HWiNFO-CPU0-Core27Vid=Core 27 VID (volts)
HWiNFO-CPU0-Core28Vid=Core 28 VID (volts)
HWiNFO-CPU0-Core29Vid=Core 29 VID (volts)
HWiNFO-CPU0-Core30Vid=Core 30 VID (volts)
HWiNFO-CPU0-Core31Vid=Core 31 VID (volts)
