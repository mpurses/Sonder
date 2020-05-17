; Disk 1
[MeterDisk1NameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDisk1Name
Y=((#hideDisk1# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=#d1#: %1
Group=Disk1
Hidden=#hideDisk1#

[MeterDisk1EjectButton_]
Meter=Shape
MeterStyle=StyleEjectButton
Group=Disk1 | EjectButtons | DiskElements
Hidden=(#hideDisk1# = 1) || ([MeasureDisk1Type:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0) || ([#showDisk[#d1]Element] = 0)

[MeterDisk1TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDisk1Temp
Group=Disk1 | DiskTemps | DiskElements
Hidden=(#hideDisk1# = 1) || ([MeasureDisk1Type:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000) || ([#showDisk[#d1]Element] = 0)

[MeterDisk1RWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk1RWTime
Text=%1%
Group=Disk1
Hidden=#hideDisk1#

[MeterDisk1WriteIcon]
Meter=Shape
MeterStyle=StyleArrowIcon | StyleDynamicVars
Extend=Fill Color #colorDisk1#
Y=(((#showDiskReadWrite# = 0) && (#hideDisk1# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 4)R
Group=Disk1 | Disk1ReadWrite | DiskReadWrite
Hidden=(#hideDisk1# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)

[MeterDisk1WriteLabel]
Meter=String
MeterStyle=StyleString | StyleStringArrowIconLabel | StyleStringWrite
InlineSetting=Color | #colorDisk1#
Text=#diskWritePrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk1Write:],[#fpfWriteDepth],'1k')"]B/s
Group=Disk1 | Disk1ReadWrite | DiskReadWrite
Hidden=(#hideDisk1# = 1) || (#showDiskReadWrite# = 0)

[MeterDisk1ReadIcon]
Meter=Shape
MeterStyle=StyleArrowIcon | StyleArrowIconInline | StyleDynamicVars
Extend=Rotate 180 | Fill Color #colorDisk1#
Group=Disk1 | Disk1ReadWrite | DiskReadWrite
Hidden=(#hideDisk1# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)

[MeterDisk1ReadString]
Meter=String
MeterStyle=StyleString | StyleStringArrowIconLabel | StyleStringRead
InlineSetting=Color | #colorDisk1#
Text=#diskReadPrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk1Read:],[#fpfReadDepth],'1k')"]B/s
Group=Disk1 | Disk1ReadWrite | DiskReadWrite
Hidden=(#hideDisk1# = 1) || (#showDiskReadWrite# = 0)

[MeterDisk1SpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk1SpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk1SpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]B
Group=Disk1
Hidden=#hideDisk1#

[MeterDisk1SpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk1SpaceUsage
Percentual=1
Text=%1%
Group=Disk1
Hidden=#hideDisk1#

[MeterDisk1SpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDisk1SpaceUsage
BarColor=#colorDisk1#
Group=Disk1
Hidden=#hideDisk1#

; Disk 2
[MeterDisk2NameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDisk2Name
Y=((#hideDisk2# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=#d2#: %1
Group=Disk2
Hidden=#hideDisk2#

[MeterDisk2EjectButton_]
Meter=Shape
MeterStyle=StyleEjectButton
Group=Disk2 | EjectButtons | DiskElements
Hidden=(#hideDisk2# = 1) || ([MeasureDisk2Type:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0) || ([#showDisk[#d2]Element] = 0)

[MeterDisk2TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDisk2Temp
Group=Disk2 | DiskTemps | DiskElements
Hidden=(#hideDisk2# = 1) || ([MeasureDisk2Type:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000) || ([#showDisk[#d2]Element] = 0)

[MeterDisk2RWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk2RWTime
Text=%1%
Group=Disk2
Hidden=#hideDisk2#

[MeterDisk2WriteIcon]
Meter=Shape
MeterStyle=StyleArrowIcon | StyleDynamicVars
Extend=Fill Color #colorDisk2#
Y=(((#showDiskReadWrite# = 0) && (#hideDisk2# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 4)R
Group=Disk2 | Disk2ReadWrite | DiskReadWrite
Hidden=(#hideDisk2# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)

[MeterDisk2WriteLabel]
Meter=String
MeterStyle=StyleString | StyleStringArrowIconLabel | StyleStringWrite
InlineSetting=Color | #colorDisk2#
Text=#diskWritePrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk2Write:],[#fpfWriteDepth],'1k')"]B/s
Group=Disk2 | Disk2ReadWrite | DiskReadWrite
Hidden=(#hideDisk2# = 1) || (#showDiskReadWrite# = 0)

[MeterDisk2ReadIcon]
Meter=Shape
MeterStyle=StyleArrowIcon | StyleArrowIconInline | StyleDynamicVars
Extend=Rotate 180 | Fill Color #colorDisk2#
Group=Disk2 | Disk2ReadWrite | DiskReadWrite
Hidden=(#hideDisk2# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)

[MeterDisk2ReadString]
Meter=String
MeterStyle=StyleString | StyleStringArrowIconLabel | StyleStringRead
InlineSetting=Color | #colorDisk2#
Text=#diskReadPrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk2Read:],[#fpfReadDepth],'1k')"]B/s
Group=Disk2 | Disk2ReadWrite | DiskReadWrite
Hidden=(#hideDisk2# = 1) || (#showDiskReadWrite# = 0)

[MeterDisk2SpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk2SpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk2SpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]B
Group=Disk2
Hidden=#hideDisk2#

[MeterDisk2SpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk2SpaceUsage
Percentual=1
Text=%1%
Group=Disk2
Hidden=#hideDisk2#

[MeterDisk2SpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDisk2SpaceUsage
BarColor=#colorDisk2#
Group=Disk2
Hidden=#hideDisk2#

; Disk 3
[MeterDisk3NameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDisk3Name
Y=((#hideDisk3# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=#d3#: %1
Group=Disk3
Hidden=#hideDisk3#

[MeterDisk3EjectButton_]
Meter=Shape
MeterStyle=StyleEjectButton
Group=Disk3 | EjectButtons | DiskElements
Hidden=(#hideDisk3# = 1) || ([MeasureDisk3Type:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0) || ([#showDisk[#d3]Element] = 0)

[MeterDisk3TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDisk3Temp
Group=Disk3 | DiskTemps | DiskElements
Hidden=(#hideDisk3# = 1) || ([MeasureDisk3Type:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000) || ([#showDisk[#d3]Element] = 0)

[MeterDisk3RWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk3RWTime
Text=%1%
Group=Disk3
Hidden=#hideDisk3#

[MeterDisk3WriteIcon]
Meter=Shape
MeterStyle=StyleArrowIcon | StyleDynamicVars
Extend=Fill Color #colorDisk3#
Y=(((#showDiskReadWrite# = 0) && (#hideDisk3# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 4)R
Group=Disk3 | Disk3ReadWrite | DiskReadWrite
Hidden=(#hideDisk3# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)

[MeterDisk3WriteLabel]
Meter=String
MeterStyle=StyleString | StyleStringArrowIconLabel | StyleStringWrite
InlineSetting=Color | #colorDisk3#
Text=#diskWritePrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk3Write:],[#fpfWriteDepth],'1k')"]B/s
Group=Disk3 | Disk3ReadWrite | DiskReadWrite
Hidden=(#hideDisk3# = 1) || (#showDiskReadWrite# = 0)

[MeterDisk3ReadIcon]
Meter=Shape
MeterStyle=StyleArrowIcon | StyleArrowIconInline | StyleDynamicVars
Extend=Rotate 180 | Fill Color #colorDisk3#
Group=Disk3 | Disk3ReadWrite | DiskReadWrite
Hidden=(#hideDisk3# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)

[MeterDisk3ReadString]
Meter=String
MeterStyle=StyleString | StyleStringArrowIconLabel | StyleStringRead
InlineSetting=Color | #colorDisk3#
Text=#diskReadPrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk3Read:],[#fpfReadDepth],'1k')"]B/s
Group=Disk3 | Disk3ReadWrite | DiskReadWrite
Hidden=(#hideDisk3# = 1) || (#showDiskReadWrite# = 0)

[MeterDisk3SpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk3SpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk3SpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]B
Group=Disk3
Hidden=#hideDisk3#

[MeterDisk3SpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk3SpaceUsage
Percentual=1
Text=%1%
Group=Disk3
Hidden=#hideDisk3#

[MeterDisk3SpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDisk3SpaceUsage
BarColor=#colorDisk3#
Group=Disk3
Hidden=#hideDisk3#

; Disk 4
[MeterDisk4NameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDisk4Name
Y=((#hideDisk4# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=#d4#: %1
Group=Disk4
Hidden=#hideDisk4#

[MeterDisk4EjectButton_]
Meter=Shape
MeterStyle=StyleEjectButton
Group=Disk4 | EjectButtons | DiskElements
Hidden=(#hideDisk4# = 1) || ([MeasureDisk4Type:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0) || ([#showDisk[#d4]Element] = 0)

[MeterDisk4TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDisk4Temp
Group=Disk4 | DiskTemps | DiskElements
Hidden=(#hideDisk4# = 1) || ([MeasureDisk4Type:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000) || ([#showDisk[#d4]Element] = 0)

[MeterDisk4RWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk4RWTime
Text=%1%
Group=Disk4
Hidden=#hideDisk4#

[MeterDisk4WriteIcon]
Meter=Shape
MeterStyle=StyleArrowIcon | StyleDynamicVars
Extend=Fill Color #colorDisk4#
Y=(((#showDiskReadWrite# = 0) && (#hideDisk4# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 4)R
Group=Disk4 | Disk4ReadWrite | DiskReadWrite
Hidden=(#hideDisk4# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)

[MeterDisk4WriteLabel]
Meter=String
MeterStyle=StyleString | StyleStringArrowIconLabel | StyleStringWrite
InlineSetting=Color | #colorDisk4#
Text=#diskWritePrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk4Write:],[#fpfWriteDepth],'1k')"]B/s
Group=Disk4 | Disk4ReadWrite | DiskReadWrite
Hidden=(#hideDisk4# = 1) || (#showDiskReadWrite# = 0)

[MeterDisk4ReadIcon]
Meter=Shape
MeterStyle=StyleArrowIcon | StyleArrowIconInline | StyleDynamicVars
Extend=Rotate 180 | Fill Color #colorDisk4#
Group=Disk4 | Disk4ReadWrite | DiskReadWrite
Hidden=(#hideDisk4# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)

[MeterDisk4ReadString]
Meter=String
MeterStyle=StyleString | StyleStringArrowIconLabel | StyleStringRead
InlineSetting=Color | #colorDisk4#
Text=#diskReadPrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk4Read:],[#fpfReadDepth],'1k')"]B/s
Group=Disk4 | Disk4ReadWrite | DiskReadWrite
Hidden=(#hideDisk4# = 1) || (#showDiskReadWrite# = 0)

[MeterDisk4SpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk4SpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk4SpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]B
Group=Disk4
Hidden=#hideDisk4#

[MeterDisk4SpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk4SpaceUsage
Percentual=1
Text=%1%
Group=Disk4
Hidden=#hideDisk4#

[MeterDisk4SpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDisk4SpaceUsage
BarColor=#colorDisk4#
Group=Disk4
Hidden=#hideDisk4#

; Disk 5
[MeterDisk5NameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDisk5Name
Y=((#hideDisk5# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=#d5#: %1
Group=Disk5
Hidden=#hideDisk5#

[MeterDisk5EjectButton_]
Meter=Shape
MeterStyle=StyleEjectButton
Group=Disk5 | EjectButtons | DiskElements
Hidden=(#hideDisk5# = 1) || ([MeasureDisk5Type:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0) || ([#showDisk[#d5]Element] = 0)

[MeterDisk5TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDisk5Temp
Group=Disk5 | DiskTemps | DiskElements
Hidden=(#hideDisk5# = 1) || ([MeasureDisk5Type:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000) || ([#showDisk[#d5]Element] = 0)

[MeterDisk5RWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk5RWTime
Text=%1%
Group=Disk5
Hidden=#hideDisk5#

[MeterDisk5WriteIcon]
Meter=Shape
MeterStyle=StyleArrowIcon | StyleDynamicVars
Extend=Fill Color #colorDisk5#
Y=(((#showDiskReadWrite# = 0) && (#hideDisk5# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 4)R
Group=Disk5 | Disk5ReadWrite | DiskReadWrite
Hidden=(#hideDisk5# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)

[MeterDisk5WriteLabel]
Meter=String
MeterStyle=StyleString | StyleStringArrowIconLabel | StyleStringWrite
InlineSetting=Color | #colorDisk5#
Text=#diskWritePrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk5Write:],[#fpfWriteDepth],'1k')"]B/s
Group=Disk5 | Disk5ReadWrite | DiskReadWrite
Hidden=(#hideDisk5# = 1) || (#showDiskReadWrite# = 0)

[MeterDisk5ReadIcon]
Meter=Shape
MeterStyle=StyleArrowIcon | StyleArrowIconInline | StyleDynamicVars
Extend=Rotate 180 | Fill Color #colorDisk5#
Group=Disk5 | Disk5ReadWrite | DiskReadWrite
Hidden=(#hideDisk5# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)

[MeterDisk5ReadString]
Meter=String
MeterStyle=StyleString | StyleStringArrowIconLabel | StyleStringRead
InlineSetting=Color | #colorDisk5#
Text=#diskReadPrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk5Read:],[#fpfReadDepth],'1k')"]B/s
Group=Disk5 | Disk5ReadWrite | DiskReadWrite
Hidden=(#hideDisk5# = 1) || (#showDiskReadWrite# = 0)

[MeterDisk5SpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk5SpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk5SpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]B
Group=Disk5
Hidden=#hideDisk5#

[MeterDisk5SpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk5SpaceUsage
Percentual=1
Text=%1%
Group=Disk5
Hidden=#hideDisk5#

[MeterDisk5SpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDisk5SpaceUsage
BarColor=#colorDisk5#
Group=Disk5
Hidden=#hideDisk5#

; Disk 6
[MeterDisk6NameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDisk6Name
Y=((#hideDisk6# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=#d6#: %1
Group=Disk6
Hidden=#hideDisk6#

[MeterDisk6EjectButton_]
Meter=Shape
MeterStyle=StyleEjectButton
Group=Disk6 | EjectButtons | DiskElements
Hidden=(#hideDisk6# = 1) || ([MeasureDisk6Type:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0) || ([#showDisk[#d6]Element] = 0)

[MeterDisk6TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDisk6Temp
Group=Disk6 | DiskTemps | DiskElements
Hidden=(#hideDisk6# = 1) || ([MeasureDisk6Type:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000) || ([#showDisk[#d6]Element] = 0)

[MeterDisk6RWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk6RWTime
Text=%1%
Group=Disk6
Hidden=#hideDisk6#

[MeterDisk6WriteIcon]
Meter=Shape
MeterStyle=StyleArrowIcon | StyleDynamicVars
Extend=Fill Color #colorDisk6#
Y=(((#showDiskReadWrite# = 0) && (#hideDisk6# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 4)R
Group=Disk6 | Disk6ReadWrite | DiskReadWrite
Hidden=(#hideDisk6# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)

[MeterDisk6WriteLabel]
Meter=String
MeterStyle=StyleString | StyleStringArrowIconLabel | StyleStringWrite
InlineSetting=Color | #colorDisk6#
Text=#diskWritePrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk6Write:],[#fpfWriteDepth],'1k')"]B/s
Group=Disk6 | Disk6ReadWrite | DiskReadWrite
Hidden=(#hideDisk6# = 1) || (#showDiskReadWrite# = 0)

[MeterDisk6ReadIcon]
Meter=Shape
MeterStyle=StyleArrowIcon | StyleArrowIconInline | StyleDynamicVars
Extend=Rotate 180 | Fill Color #colorDisk6#
Group=Disk6 | Disk6ReadWrite | DiskReadWrite
Hidden=(#hideDisk6# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)

[MeterDisk6ReadString]
Meter=String
MeterStyle=StyleString | StyleStringArrowIconLabel | StyleStringRead
InlineSetting=Color | #colorDisk6#
Text=#diskReadPrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk6Read:],[#fpfReadDepth],'1k')"]B/s
Group=Disk6 | Disk6ReadWrite | DiskReadWrite
Hidden=(#hideDisk6# = 1) || (#showDiskReadWrite# = 0)

[MeterDisk6SpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk6SpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk6SpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]B
Group=Disk6
Hidden=#hideDisk6#

[MeterDisk6SpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk6SpaceUsage
Percentual=1
Text=%1%
Group=Disk6
Hidden=#hideDisk6#

[MeterDisk6SpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDisk6SpaceUsage
BarColor=#colorDisk6#
Group=Disk6
Hidden=#hideDisk6#

; Disk 7
[MeterDisk7NameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDisk7Name
Y=((#hideDisk7# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=#d7#: %1
Group=Disk7
Hidden=#hideDisk7#

[MeterDisk7EjectButton_]
Meter=Shape
MeterStyle=StyleEjectButton
Group=Disk7 | EjectButtons | DiskElements
Hidden=(#hideDisk7# = 1) || ([MeasureDisk7Type:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0) || ([#showDisk[#d7]Element] = 0)

[MeterDisk7TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDisk7Temp
Group=Disk7 | DiskTemps | DiskElements
Hidden=(#hideDisk7# = 1) || ([MeasureDisk7Type:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000) || ([#showDisk[#d7]Element] = 0)

[MeterDisk7RWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk7RWTime
Text=%1%
Group=Disk7
Hidden=#hideDisk7#

[MeterDisk7WriteIcon]
Meter=Shape
MeterStyle=StyleArrowIcon | StyleDynamicVars
Extend=Fill Color #colorDisk7#
Y=(((#showDiskReadWrite# = 0) && (#hideDisk7# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 4)R
Group=Disk7 | Disk7ReadWrite | DiskReadWrite
Hidden=(#hideDisk7# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)

[MeterDisk7WriteLabel]
Meter=String
MeterStyle=StyleString | StyleStringArrowIconLabel | StyleStringWrite
InlineSetting=Color | #colorDisk7#
Text=#diskWritePrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk7Write:],[#fpfWriteDepth],'1k')"]B/s
Group=Disk7 | Disk7ReadWrite | DiskReadWrite
Hidden=(#hideDisk7# = 1) || (#showDiskReadWrite# = 0)

[MeterDisk7ReadIcon]
Meter=Shape
MeterStyle=StyleArrowIcon | StyleArrowIconInline | StyleDynamicVars
Extend=Rotate 180 | Fill Color #colorDisk7#
Group=Disk7 | Disk7ReadWrite | DiskReadWrite
Hidden=(#hideDisk7# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)

[MeterDisk7ReadString]
Meter=String
MeterStyle=StyleString | StyleStringArrowIconLabel | StyleStringRead
InlineSetting=Color | #colorDisk7#
Text=#diskReadPrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk7Read:],[#fpfReadDepth],'1k')"]B/s
Group=Disk7 | Disk7ReadWrite | DiskReadWrite
Hidden=(#hideDisk7# = 1) || (#showDiskReadWrite# = 0)

[MeterDisk7SpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk7SpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk7SpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]B
Group=Disk7
Hidden=#hideDisk7#

[MeterDisk7SpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk7SpaceUsage
Percentual=1
Text=%1%
Group=Disk7
Hidden=#hideDisk7#

[MeterDisk7SpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDisk7SpaceUsage
BarColor=#colorDisk7#
Group=Disk7
Hidden=#hideDisk7#

; Disk 8
[MeterDisk8NameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDisk8Name
Y=((#hideDisk8# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=#d8#: %1
Group=Disk8
Hidden=#hideDisk8#

[MeterDisk8EjectButton_]
Meter=Shape
MeterStyle=StyleEjectButton
Group=Disk8 | EjectButtons | DiskElements
Hidden=(#hideDisk8# = 1) || ([MeasureDisk8Type:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0) || ([#showDisk[#d8]Element] = 0)

[MeterDisk8TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDisk8Temp
Group=Disk8 | DiskTemps | DiskElements
Hidden=(#hideDisk8# = 1) || ([MeasureDisk8Type:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000) || ([#showDisk[#d8]Element] = 0)

[MeterDisk8RWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk8RWTime
Text=%1%
Group=Disk8
Hidden=#hideDisk8#

[MeterDisk8WriteIcon]
Meter=Shape
MeterStyle=StyleArrowIcon | StyleDynamicVars
Extend=Fill Color #colorDisk8#
Y=(((#showDiskReadWrite# = 0) && (#hideDisk8# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 4)R
Group=Disk8 | Disk8ReadWrite | DiskReadWrite
Hidden=(#hideDisk8# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)

[MeterDisk8WriteLabel]
Meter=String
MeterStyle=StyleString | StyleStringArrowIconLabel | StyleStringWrite
InlineSetting=Color | #colorDisk8#
Text=#diskWritePrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk8Write:],[#fpfWriteDepth],'1k')"]B/s
Group=Disk8 | Disk8ReadWrite | DiskReadWrite
Hidden=(#hideDisk8# = 1) || (#showDiskReadWrite# = 0)

[MeterDisk8ReadIcon]
Meter=Shape
MeterStyle=StyleArrowIcon | StyleArrowIconInline | StyleDynamicVars
Extend=Rotate 180 | Fill Color #colorDisk8#
Group=Disk8 | Disk8ReadWrite | DiskReadWrite
Hidden=(#hideDisk8# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)

[MeterDisk8ReadString]
Meter=String
MeterStyle=StyleString | StyleStringArrowIconLabel | StyleStringRead
InlineSetting=Color | #colorDisk8#
Text=#diskReadPrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk8Read:],[#fpfReadDepth],'1k')"]B/s
Group=Disk8 | Disk8ReadWrite | DiskReadWrite
Hidden=(#hideDisk8# = 1) || (#showDiskReadWrite# = 0)

[MeterDisk8SpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk8SpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk8SpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]B
Group=Disk8
Hidden=#hideDisk8#

[MeterDisk8SpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk8SpaceUsage
Percentual=1
Text=%1%
Group=Disk8
Hidden=#hideDisk8#

[MeterDisk8SpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDisk8SpaceUsage
BarColor=#colorDisk8#
Group=Disk8
Hidden=#hideDisk8#

; Disk 9
[MeterDisk9NameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDisk9Name
Y=((#hideDisk9# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=#d9#: %1
Group=Disk9
Hidden=#hideDisk9#

[MeterDisk9EjectButton_]
Meter=Shape
MeterStyle=StyleEjectButton
Group=Disk9 | EjectButtons | DiskElements
Hidden=(#hideDisk9# = 1) || ([MeasureDisk9Type:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0) || ([#showDisk[#d9]Element] = 0)

[MeterDisk9TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDisk9Temp
Group=Disk9 | DiskTemps | DiskElements
Hidden=(#hideDisk9# = 1) || ([MeasureDisk9Type:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000) || ([#showDisk[#d9]Element] = 0)

[MeterDisk9RWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk9RWTime
Text=%1%
Group=Disk9
Hidden=#hideDisk9#

[MeterDisk9WriteIcon]
Meter=Shape
MeterStyle=StyleArrowIcon | StyleDynamicVars
Extend=Fill Color #colorDisk9#
Y=(((#showDiskReadWrite# = 0) && (#hideDisk9# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 4)R
Group=Disk9 | Disk9ReadWrite | DiskReadWrite
Hidden=(#hideDisk9# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)

[MeterDisk9WriteLabel]
Meter=String
MeterStyle=StyleString | StyleStringArrowIconLabel | StyleStringWrite
InlineSetting=Color | #colorDisk9#
Text=#diskWritePrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk9Write:],[#fpfWriteDepth],'1k')"]B/s
Group=Disk9 | Disk9ReadWrite | DiskReadWrite
Hidden=(#hideDisk9# = 1) || (#showDiskReadWrite# = 0)

[MeterDisk9ReadIcon]
Meter=Shape
MeterStyle=StyleArrowIcon | StyleArrowIconInline | StyleDynamicVars
Extend=Rotate 180 | Fill Color #colorDisk9#
Group=Disk9 | Disk9ReadWrite | DiskReadWrite
Hidden=(#hideDisk9# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)

[MeterDisk9ReadString]
Meter=String
MeterStyle=StyleString | StyleStringArrowIconLabel | StyleStringRead
InlineSetting=Color | #colorDisk9#
Text=#diskReadPrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk9Read:],[#fpfReadDepth],'1k')"]B/s
Group=Disk9 | Disk9ReadWrite | DiskReadWrite
Hidden=(#hideDisk9# = 1) || (#showDiskReadWrite# = 0)

[MeterDisk9SpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk9SpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk9SpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]B
Group=Disk9
Hidden=#hideDisk9#

[MeterDisk9SpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk9SpaceUsage
Percentual=1
Text=%1%
Group=Disk9
Hidden=#hideDisk9#

[MeterDisk9SpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDisk9SpaceUsage
BarColor=#colorDisk9#
Group=Disk9
Hidden=#hideDisk9#

; Disk 10
[MeterDisk10NameString_]
Meter=String
MeterStyle=StyleString | StyleStringDiskName
MeasureName=MeasureDisk10Name
Y=((#hideDisk10# = 1) ? ((#rowSpacing# = 2) ? -5 : -3) : #rowSpacing#)R
Text=#d10#: %1
Group=Disk10
Hidden=#hideDisk10#

[MeterDisk10EjectButton_]
Meter=Shape
MeterStyle=StyleEjectButton
Group=Disk10 | EjectButtons | DiskElements
Hidden=(#hideDisk10# = 1) || ([MeasureDisk10Type:] = 4) || (#showEjectButtons# = 0) || (#userIsAdmin# = 0) || ([#showDisk[#d10]Element] = 0)

[MeterDisk10TempString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleStringDiskTemp
MeasureName=MeasureDisk10Temp
Group=Disk10 | DiskTemps | DiskElements
Hidden=(#hideDisk10# = 1) || ([MeasureDisk10Type:] <> 4) || (#showDiskTemps# = 0) || ([MeasureHwinfoDetect:] = -9000) || ([#showDisk[#d10]Element] = 0)

[MeterDisk10RWTimeString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk10RWTime
Text=%1%
Group=Disk10
Hidden=#hideDisk10#

[MeterDisk10WriteIcon]
Meter=Shape
MeterStyle=StyleArrowIcon | StyleDynamicVars
Extend=Fill Color #colorDisk10#
Y=(((#showDiskReadWrite# = 0) && (#hideDisk10# = 0)) ? -#rowSpacing# + 2 : #rowSpacing# + 4)R
Group=Disk10 | Disk10ReadWrite | DiskReadWrite
Hidden=(#hideDisk10# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)

[MeterDisk10WriteLabel]
Meter=String
MeterStyle=StyleString | StyleStringArrowIconLabel | StyleStringWrite
InlineSetting=Color | #colorDisk10#
Text=#diskWritePrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk10Write:],[#fpfWriteDepth],'1k')"]B/s
Group=Disk10 | Disk10ReadWrite | DiskReadWrite
Hidden=(#hideDisk10# = 1) || (#showDiskReadWrite# = 0)

[MeterDisk10ReadIcon]
Meter=Shape
MeterStyle=StyleArrowIcon | StyleArrowIconInline | StyleDynamicVars
Extend=Rotate 180 | Fill Color #colorDisk10#
Group=Disk10 | Disk10ReadWrite | DiskReadWrite
Hidden=(#hideDisk10# = 1) || (#showDiskReadWrite# = 0) || (#showDiskReadWriteLetters# = 1)

[MeterDisk10ReadString]
Meter=String
MeterStyle=StyleString | StyleStringArrowIconLabel | StyleStringRead
InlineSetting=Color | #colorDisk10#
Text=#diskReadPrefix#[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk10Read:],[#fpfReadDepth],'1k')"]B/s
Group=Disk10 | Disk10ReadWrite | DiskReadWrite
Hidden=(#hideDisk10# = 1) || (#showDiskReadWrite# = 0)

[MeterDisk10SpaceString]
Meter=String
MeterStyle=StyleString | StyleStringDiskSpace
Text=[&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk10SpaceUsed:],[#fpfSpaceUsedDepth],'1k')"]B / [&MeasureFixedPrecisionFormatScript:FormatNumber([&MeasureDisk10SpaceTotal:],[#fpfSpaceTotalDepth],'1k')"]B
Group=Disk10
Hidden=#hideDisk10#

[MeterDisk10SpaceUsageString]
Meter=String
MeterStyle=StyleString | StyleStringRightAlign | StyleDynamicVars
MeasureName=MeasureDisk10SpaceUsage
Percentual=1
Text=%1%
Group=Disk10
Hidden=#hideDisk10#

[MeterDisk10SpaceUsageBar]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDisk10SpaceUsage
BarColor=#colorDisk10#
Group=Disk10
Hidden=#hideDisk10#
