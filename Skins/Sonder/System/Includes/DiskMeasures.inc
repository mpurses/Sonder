
; Disk 1
[MeasureDisk1Type]
Measure=FreeDiskSpace
Drive=#d1#:
Type=1
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1

[MeasureDisk1Eject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e #d1#:
Group=Disk1 | EjectButtons
DynamicVariables=1
Disabled=(#hideDisk1# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDisk1Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-SMART-Disk[#d1]Temp-SensorId]
HWiNFOSensorInstance=[#HWiNFO-SMART-Disk[#d1]Temp-SensorInstance]
HWiNFOEntryId=[#HWiNFO-SMART-Disk[#d1]Temp-EntryId]
HWiNFOType=CurrentValue
DynamicVariables=1
Group=Disk1 | DiskTemps
Disabled=(#hideDisk1# = 1) || (#showDiskTemps# = 0)

[MeasureDisk1IdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=#d1#:
DynamicVariables=1
Group=Disk1
Disabled=#hideDisk1#

[MeasureDisk1RWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDisk1IdleTime,0,100)
MinValue=0
MaxValue=100
DynamicVariables=1
Group=Disk1
Disabled=#hideDisk1#

[MeasureDisk1Activity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=#d1#:
DynamicVariables=1
Group=Disk1
Disabled=#hideDisk1#

[MeasureDisk1Write]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
Name=#d1#:
DynamicVariables=1
Group=Disk1 | Disk1ReadWrite
Disabled=#hideDisk1#

[MeasureDisk1Read]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
Name=#d1#:
DynamicVariables=1
Group=Disk1 | Disk1ReadWrite
Disabled=#hideDisk1#

[MeasureDisk1SpaceUsed]
Measure=FreeDiskSpace
Drive=#d1#:
InvertMeasure=#invertDiskSpace#
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1
Group=Disk1
Disabled=#hideDisk1#

[MeasureDisk1SpaceTotal]
Measure=FreeDiskSpace
Drive=#d1#:
Total=1
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1
Disabled=#hideDisk1#

[MeasureDisk1SpaceUsage]
Measure=Calc
Formula=(MeasureDisk1SpaceUsed / max(1, MeasureDisk1SpaceTotal))
DynamicVariables=1
Group=Disk1
Disabled=#hideDisk1#

[MeasureDisk1Name]
Measure=FreeDiskSpace
Drive=#d1#:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
DynamicVariables=1
Group=Disk1
Disabled=#hideDisk1#


; Disk 2
[MeasureDisk2Type]
Measure=FreeDiskSpace
Drive=#d2#:
Type=1
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1

[MeasureDisk2Eject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e #d2#:
Group=Disk2 | EjectButtons
DynamicVariables=1
Disabled=(#hideDisk2# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDisk2Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-SMART-Disk[#d2]Temp-SensorId]
HWiNFOSensorInstance=[#HWiNFO-SMART-Disk[#d2]Temp-SensorInstance]
HWiNFOEntryId=[#HWiNFO-SMART-Disk[#d2]Temp-EntryId]
HWiNFOType=CurrentValue
DynamicVariables=1
Group=Disk2 | DiskTemps
Disabled=(#hideDisk2# = 1) || (#showDiskTemps# = 0)

[MeasureDisk2IdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=#d2#:
DynamicVariables=1
Group=Disk2
Disabled=#hideDisk2#

[MeasureDisk2RWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDisk2IdleTime,0,100)
MinValue=0
MaxValue=100
DynamicVariables=1
Group=Disk2
Disabled=#hideDisk2#

[MeasureDisk2Activity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=#d2#:
DynamicVariables=1
Group=Disk2
Disabled=#hideDisk2#

[MeasureDisk2Write]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
Name=#d2#:
DynamicVariables=1
Group=Disk2 | Disk2ReadWrite
Disabled=#hideDisk2#

[MeasureDisk2Read]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
Name=#d2#:
DynamicVariables=1
Group=Disk2 | Disk2ReadWrite
Disabled=#hideDisk2#

[MeasureDisk2SpaceUsed]
Measure=FreeDiskSpace
Drive=#d2#:
InvertMeasure=#invertDiskSpace#
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1
Group=Disk2
Disabled=#hideDisk2#

[MeasureDisk2SpaceTotal]
Measure=FreeDiskSpace
Drive=#d2#:
Total=1
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1
Disabled=#hideDisk2#

[MeasureDisk2SpaceUsage]
Measure=Calc
Formula=(MeasureDisk2SpaceUsed / max(1, MeasureDisk2SpaceTotal))
DynamicVariables=1
Group=Disk2
Disabled=#hideDisk2#

[MeasureDisk2Name]
Measure=FreeDiskSpace
Drive=#d2#:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
DynamicVariables=1
Group=Disk2
Disabled=#hideDisk2#

; Disk 3
[MeasureDisk3Type]
Measure=FreeDiskSpace
Drive=#d3#:
Type=1
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1

[MeasureDisk3Eject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e #d3#:
Group=Disk3 | EjectButtons
DynamicVariables=1
Disabled=(#hideDisk3# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDisk3Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-SMART-Disk[#d3]Temp-SensorId]
HWiNFOSensorInstance=[#HWiNFO-SMART-Disk[#d3]Temp-SensorInstance]
HWiNFOEntryId=[#HWiNFO-SMART-Disk[#d3]Temp-EntryId]
HWiNFOType=CurrentValue
DynamicVariables=1
Group=Disk3 | DiskTemps
Disabled=(#hideDisk3# = 1) || (#showDiskTemps# = 0)

[MeasureDisk3IdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=#d3#:
DynamicVariables=1
Group=Disk3
Disabled=#hideDisk3#

[MeasureDisk3RWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDisk3IdleTime,0,100)
MinValue=0
MaxValue=100
DynamicVariables=1
Group=Disk3
Disabled=#hideDisk3#

[MeasureDisk3Activity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=#d3#:
DynamicVariables=1
Group=Disk3
Disabled=#hideDisk3#

[MeasureDisk3Write]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
Name=#d3#:
DynamicVariables=1
Group=Disk3 | Disk3ReadWrite
Disabled=#hideDisk3#

[MeasureDisk3Read]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
Name=#d3#:
DynamicVariables=1
Group=Disk3 | Disk3ReadWrite
Disabled=#hideDisk3#

[MeasureDisk3SpaceUsed]
Measure=FreeDiskSpace
Drive=#d3#:
InvertMeasure=#invertDiskSpace#
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1
Group=Disk3
Disabled=#hideDisk3#

[MeasureDisk3SpaceTotal]
Measure=FreeDiskSpace
Drive=#d3#:
Total=1
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1
Disabled=#hideDisk3#

[MeasureDisk3SpaceUsage]
Measure=Calc
Formula=(MeasureDisk3SpaceUsed / max(1, MeasureDisk3SpaceTotal))
DynamicVariables=1
Group=Disk3
Disabled=#hideDisk3#

[MeasureDisk3Name]
Measure=FreeDiskSpace
Drive=#d3#:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
DynamicVariables=1
Group=Disk3
Disabled=#hideDisk3#

; Disk 4
[MeasureDisk4Type]
Measure=FreeDiskSpace
Drive=#d4#:
Type=1
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1

[MeasureDisk4Eject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e #d4#:
Group=Disk4 | EjectButtons
DynamicVariables=1
Disabled=(#hideDisk4# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDisk4Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-SMART-Disk[#d4]Temp-SensorId]
HWiNFOSensorInstance=[#HWiNFO-SMART-Disk[#d4]Temp-SensorInstance]
HWiNFOEntryId=[#HWiNFO-SMART-Disk[#d4]Temp-EntryId]
HWiNFOType=CurrentValue
DynamicVariables=1
Group=Disk4 | DiskTemps
Disabled=(#hideDisk4# = 1) || (#showDiskTemps# = 0)

[MeasureDisk4IdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=#d4#:
DynamicVariables=1
Group=Disk4
Disabled=#hideDisk4#

[MeasureDisk4RWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDisk4IdleTime,0,100)
MinValue=0
MaxValue=100
DynamicVariables=1
Group=Disk4
Disabled=#hideDisk4#

[MeasureDisk4Activity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=#d4#:
DynamicVariables=1
Group=Disk4
Disabled=#hideDisk4#

[MeasureDisk4Write]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
Name=#d4#:
DynamicVariables=1
Group=Disk4 | Disk4ReadWrite
Disabled=#hideDisk4#

[MeasureDisk4Read]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
Name=#d4#:
DynamicVariables=1
Group=Disk4 | Disk4ReadWrite
Disabled=#hideDisk4#

[MeasureDisk4SpaceUsed]
Measure=FreeDiskSpace
Drive=#d4#:
InvertMeasure=#invertDiskSpace#
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1
Group=Disk4
Disabled=#hideDisk4#

[MeasureDisk4SpaceTotal]
Measure=FreeDiskSpace
Drive=#d4#:
Total=1
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1
Disabled=#hideDisk4#

[MeasureDisk4SpaceUsage]
Measure=Calc
Formula=(MeasureDisk4SpaceUsed / max(1, MeasureDisk4SpaceTotal))
DynamicVariables=1
Group=Disk4
Disabled=#hideDisk4#

[MeasureDisk4Name]
Measure=FreeDiskSpace
Drive=#d4#:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
DynamicVariables=1
Group=Disk4
Disabled=#hideDisk4#

; Disk 5
[MeasureDisk5Type]
Measure=FreeDiskSpace
Drive=#d5#:
Type=1
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1

[MeasureDisk5Eject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e #d5#:
Group=Disk5 | EjectButtons
DynamicVariables=1
Disabled=(#hideDisk5# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDisk5Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-SMART-Disk[#d5]Temp-SensorId]
HWiNFOSensorInstance=[#HWiNFO-SMART-Disk[#d5]Temp-SensorInstance]
HWiNFOEntryId=[#HWiNFO-SMART-Disk[#d5]Temp-EntryId]
HWiNFOType=CurrentValue
DynamicVariables=1
Group=Disk5 | DiskTemps
Disabled=(#hideDisk5# = 1) || (#showDiskTemps# = 0)

[MeasureDisk5IdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=#d5#:
DynamicVariables=1
Group=Disk5
Disabled=#hideDisk5#

[MeasureDisk5RWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDisk5IdleTime,0,100)
MinValue=0
MaxValue=100
DynamicVariables=1
Group=Disk5
Disabled=#hideDisk5#

[MeasureDisk5Activity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=#d5#:
DynamicVariables=1
Group=Disk5
Disabled=#hideDisk5#

[MeasureDisk5Write]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
Name=#d5#:
DynamicVariables=1
Group=Disk5 | Disk5ReadWrite
Disabled=#hideDisk5#

[MeasureDisk5Read]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
Name=#d5#:
DynamicVariables=1
Group=Disk5 | Disk5ReadWrite
Disabled=#hideDisk5#

[MeasureDisk5SpaceUsed]
Measure=FreeDiskSpace
Drive=#d5#:
InvertMeasure=#invertDiskSpace#
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1
Group=Disk5
Disabled=#hideDisk5#

[MeasureDisk5SpaceTotal]
Measure=FreeDiskSpace
Drive=#d5#:
Total=1
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1
Disabled=#hideDisk5#

[MeasureDisk5SpaceUsage]
Measure=Calc
Formula=(MeasureDisk5SpaceUsed / max(1, MeasureDisk5SpaceTotal))
DynamicVariables=1
Group=Disk5
Disabled=#hideDisk5#

[MeasureDisk5Name]
Measure=FreeDiskSpace
Drive=#d5#:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
DynamicVariables=1
Group=Disk5
Disabled=#hideDisk5#

; Disk 6
[MeasureDisk6Type]
Measure=FreeDiskSpace
Drive=#d6#:
Type=1
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1

[MeasureDisk6Eject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e #d6#:
Group=Disk6 | EjectButtons
DynamicVariables=1
Disabled=(#hideDisk6# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDisk6Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-SMART-Disk[#d6]Temp-SensorId]
HWiNFOSensorInstance=[#HWiNFO-SMART-Disk[#d6]Temp-SensorInstance]
HWiNFOEntryId=[#HWiNFO-SMART-Disk[#d6]Temp-EntryId]
HWiNFOType=CurrentValue
DynamicVariables=1
Group=Disk6 | DiskTemps
Disabled=(#hideDisk6# = 1) || (#showDiskTemps# = 0)

[MeasureDisk6IdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=#d6#:
DynamicVariables=1
Group=Disk6
Disabled=#hideDisk6#

[MeasureDisk6RWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDisk6IdleTime,0,100)
MinValue=0
MaxValue=100
DynamicVariables=1
Group=Disk6
Disabled=#hideDisk6#

[MeasureDisk6Activity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=#d6#:
DynamicVariables=1
Group=Disk6
Disabled=#hideDisk6#

[MeasureDisk6Write]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
Name=#d6#:
DynamicVariables=1
Group=Disk6 | Disk6ReadWrite
Disabled=#hideDisk6#

[MeasureDisk6Read]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
Name=#d6#:
DynamicVariables=1
Group=Disk6 | Disk6ReadWrite
Disabled=#hideDisk6#

[MeasureDisk6SpaceUsed]
Measure=FreeDiskSpace
Drive=#d6#:
InvertMeasure=#invertDiskSpace#
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1
Group=Disk6
Disabled=#hideDisk6#

[MeasureDisk6SpaceTotal]
Measure=FreeDiskSpace
Drive=#d6#:
Total=1
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1
Disabled=#hideDisk6#

[MeasureDisk6SpaceUsage]
Measure=Calc
Formula=(MeasureDisk6SpaceUsed / max(1, MeasureDisk6SpaceTotal))
DynamicVariables=1
Group=Disk6
Disabled=#hideDisk6#

[MeasureDisk6Name]
Measure=FreeDiskSpace
Drive=#d6#:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
DynamicVariables=1
Group=Disk6
Disabled=#hideDisk6#

; Disk 7
[MeasureDisk7Type]
Measure=FreeDiskSpace
Drive=#d7#:
Type=1
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1

[MeasureDisk7Eject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e #d7#:
Group=Disk7 | EjectButtons
DynamicVariables=1
Disabled=(#hideDisk7# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDisk7Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-SMART-Disk[#d7]Temp-SensorId]
HWiNFOSensorInstance=[#HWiNFO-SMART-Disk[#d7]Temp-SensorInstance]
HWiNFOEntryId=[#HWiNFO-SMART-Disk[#d7]Temp-EntryId]
HWiNFOType=CurrentValue
DynamicVariables=1
Group=Disk7 | DiskTemps
Disabled=(#hideDisk7# = 1) || (#showDiskTemps# = 0)

[MeasureDisk7IdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=#d7#:
DynamicVariables=1
Group=Disk7
Disabled=#hideDisk7#

[MeasureDisk7RWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDisk7IdleTime,0,100)
MinValue=0
MaxValue=100
DynamicVariables=1
Group=Disk7
Disabled=#hideDisk7#

[MeasureDisk7Activity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=#d7#:
DynamicVariables=1
Group=Disk7
Disabled=#hideDisk7#

[MeasureDisk7Write]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
Name=#d7#:
DynamicVariables=1
Group=Disk7 | Disk7ReadWrite
Disabled=#hideDisk7#

[MeasureDisk7Read]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
Name=#d7#:
DynamicVariables=1
Group=Disk7 | Disk7ReadWrite
Disabled=#hideDisk7#

[MeasureDisk7SpaceUsed]
Measure=FreeDiskSpace
Drive=#d7#:
InvertMeasure=#invertDiskSpace#
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1
Group=Disk7
Disabled=#hideDisk7#

[MeasureDisk7SpaceTotal]
Measure=FreeDiskSpace
Drive=#d7#:
Total=1
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1
Disabled=#hideDisk7#

[MeasureDisk7SpaceUsage]
Measure=Calc
Formula=(MeasureDisk7SpaceUsed / max(1, MeasureDisk7SpaceTotal))
DynamicVariables=1
Group=Disk7
Disabled=#hideDisk7#

[MeasureDisk7Name]
Measure=FreeDiskSpace
Drive=#d7#:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
DynamicVariables=1
Group=Disk7
Disabled=#hideDisk7#

; Disk 8
[MeasureDisk8Type]
Measure=FreeDiskSpace
Drive=#d8#:
Type=1
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1

[MeasureDisk8Eject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e #d8#:
Group=Disk8 | EjectButtons
DynamicVariables=1
Disabled=(#hideDisk8# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDisk8Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-SMART-Disk[#d8]Temp-SensorId]
HWiNFOSensorInstance=[#HWiNFO-SMART-Disk[#d8]Temp-SensorInstance]
HWiNFOEntryId=[#HWiNFO-SMART-Disk[#d8]Temp-EntryId]
HWiNFOType=CurrentValue
DynamicVariables=1
Group=Disk8 | DiskTemps
Disabled=(#hideDisk8# = 1) || (#showDiskTemps# = 0)

[MeasureDisk8IdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=#d8#:
DynamicVariables=1
Group=Disk8
Disabled=#hideDisk8#

[MeasureDisk8RWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDisk8IdleTime,0,100)
MinValue=0
MaxValue=100
DynamicVariables=1
Group=Disk8
Disabled=#hideDisk8#

[MeasureDisk8Activity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=#d8#:
DynamicVariables=1
Group=Disk8
Disabled=#hideDisk8#

[MeasureDisk8Write]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
Name=#d8#:
DynamicVariables=1
Group=Disk8 | Disk8ReadWrite
Disabled=#hideDisk8#

[MeasureDisk8Read]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
Name=#d8#:
DynamicVariables=1
Group=Disk8 | Disk8ReadWrite
Disabled=#hideDisk8#

[MeasureDisk8SpaceUsed]
Measure=FreeDiskSpace
Drive=#d8#:
InvertMeasure=#invertDiskSpace#
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1
Group=Disk8
Disabled=#hideDisk8#

[MeasureDisk8SpaceTotal]
Measure=FreeDiskSpace
Drive=#d8#:
Total=1
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1
Disabled=#hideDisk8#

[MeasureDisk8SpaceUsage]
Measure=Calc
Formula=(MeasureDisk8SpaceUsed / max(1, MeasureDisk8SpaceTotal))
DynamicVariables=1
Group=Disk8
Disabled=#hideDisk8#

[MeasureDisk8Name]
Measure=FreeDiskSpace
Drive=#d8#:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
DynamicVariables=1
Group=Disk8
Disabled=#hideDisk8#

; Disk 9
[MeasureDisk9Type]
Measure=FreeDiskSpace
Drive=#d9#:
Type=1
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1

[MeasureDisk9Eject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e #d9#:
Group=Disk9 | EjectButtons
DynamicVariables=1
Disabled=(#hideDisk9# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDisk9Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-SMART-Disk[#d9]Temp-SensorId]
HWiNFOSensorInstance=[#HWiNFO-SMART-Disk[#d9]Temp-SensorInstance]
HWiNFOEntryId=[#HWiNFO-SMART-Disk[#d9]Temp-EntryId]
HWiNFOType=CurrentValue
DynamicVariables=1
Group=Disk9 | DiskTemps
Disabled=(#hideDisk9# = 1) || (#showDiskTemps# = 0)

[MeasureDisk9IdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=#d9#:
DynamicVariables=1
Group=Disk9
Disabled=#hideDisk9#

[MeasureDisk9RWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDisk9IdleTime,0,100)
MinValue=0
MaxValue=100
DynamicVariables=1
Group=Disk9
Disabled=#hideDisk9#

[MeasureDisk9Activity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=#d9#:
DynamicVariables=1
Group=Disk9
Disabled=#hideDisk9#

[MeasureDisk9Write]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
Name=#d9#:
DynamicVariables=1
Group=Disk9 | Disk9ReadWrite
Disabled=#hideDisk9#

[MeasureDisk9Read]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
Name=#d9#:
DynamicVariables=1
Group=Disk9 | Disk9ReadWrite
Disabled=#hideDisk9#

[MeasureDisk9SpaceUsed]
Measure=FreeDiskSpace
Drive=#d9#:
InvertMeasure=#invertDiskSpace#
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1
Group=Disk9
Disabled=#hideDisk9#

[MeasureDisk9SpaceTotal]
Measure=FreeDiskSpace
Drive=#d9#:
Total=1
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1
Disabled=#hideDisk9#

[MeasureDisk9SpaceUsage]
Measure=Calc
Formula=(MeasureDisk9SpaceUsed / max(1, MeasureDisk9SpaceTotal))
DynamicVariables=1
Group=Disk9
Disabled=#hideDisk9#

[MeasureDisk9Name]
Measure=FreeDiskSpace
Drive=#d9#:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
DynamicVariables=1
Group=Disk9
Disabled=#hideDisk9#

; Disk 10
[MeasureDisk10Type]
Measure=FreeDiskSpace
Drive=#d10#:
Type=1
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1

[MeasureDisk10Eject]
Measure=Plugin
Plugin=RunCommand
StartInFolder=#@#Addons\Sync
Parameter=sync -e #d10#:
Group=Disk10 | EjectButtons
DynamicVariables=1
Disabled=(#hideDisk10# = 1) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0)

[MeasureDisk10Temp]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=[#HWiNFO-SMART-Disk[#d10]Temp-SensorId]
HWiNFOSensorInstance=[#HWiNFO-SMART-Disk[#d10]Temp-SensorInstance]
HWiNFOEntryId=[#HWiNFO-SMART-Disk[#d10]Temp-EntryId]
HWiNFOType=CurrentValue
DynamicVariables=1
Group=Disk10 | DiskTemps
Disabled=(#hideDisk10# = 1) || (#showDiskTemps# = 0)

[MeasureDisk10IdleTime]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=% Idle Time
Name=#d10#:
DynamicVariables=1
Group=Disk10
Disabled=#hideDisk10#

[MeasureDisk10RWTime]
Measure=Calc
Formula=100 - Clamp(MeasureDisk10IdleTime,0,100)
MinValue=0
MaxValue=100
DynamicVariables=1
Group=Disk10
Disabled=#hideDisk10#

[MeasureDisk10Activity]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Bytes/sec
Name=#d10#:
DynamicVariables=1
Group=Disk10
Disabled=#hideDisk10#

[MeasureDisk10Write]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Write Bytes/sec
Name=#d10#:
DynamicVariables=1
Group=Disk10 | Disk10ReadWrite
Disabled=#hideDisk10#

[MeasureDisk10Read]
Measure=Plugin
Plugin=UsageMonitor
Category=LogicalDisk
Counter=Disk Read Bytes/sec
Name=#d10#:
DynamicVariables=1
Group=Disk10 | Disk10ReadWrite
Disabled=#hideDisk10#

[MeasureDisk10SpaceUsed]
Measure=FreeDiskSpace
Drive=#d10#:
InvertMeasure=#invertDiskSpace#
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1
Group=Disk10
Disabled=#hideDisk10#

[MeasureDisk10SpaceTotal]
Measure=FreeDiskSpace
Drive=#d10#:
Total=1
IgnoreRemovable=#ignoreRemovable#
DynamicVariables=1
Disabled=#hideDisk10#

[MeasureDisk10SpaceUsage]
Measure=Calc
Formula=(MeasureDisk10SpaceUsed / max(1, MeasureDisk10SpaceTotal))
DynamicVariables=1
Group=Disk10
Disabled=#hideDisk10#

[MeasureDisk10Name]
Measure=FreeDiskSpace
Drive=#d10#:
Label=1
IgnoreRemovable=#ignoreRemovable#
Substitute="":"#unnamedDiskLabel#"
DynamicVariables=1
Group=Disk10
Disabled=#hideDisk10#