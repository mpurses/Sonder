[Rainmeter]
Group=Network
MiddleMouseUpAction=!Refresh
LeftMouseDoubleClickAction=!ActivateConfig #CURRENTCONFIG#
DynamicWindowSize=1
AccurateText=1
Group=AllNoWeather

[Variables]
Stylesheet=Dark
SkinMouseOver=0
;These aren't used right now...
;2 MB/s
NetworkMaxDownload=2000000
;0.15 MB/s
NetworkMaxUpload=150000
SystemGraphType=Floating
TriptychInterval=30
TriptychDisabled=0
ProcessInterval=5
ColorImage=#GlobalSkinBackgroundColor#
Size1=(#Scale#*10)
Size4=(#Scale#*8)
Size3=(#Scale#*8)
Size2=(#Scale#*9)
LocalFontFace=ITC Avant Garde Pro XLt
LocalFontFace2=ITC Avant Garde Pro Bk
Font=LocalFontFace
SkinBackgroundAlpha=#GlobalSkinBackgroundAlpha#
HideBordersTop=1
HideBordersBottom=1
GraphVariant=#GraphVariant#

[StyleSidebarBackground]
ImageName=#@#Images\SkinBackground.#ColorImage#.png
ScaleMargins=12,12,12,12
ImageAlpha=#GlobalSkinBackgroundAlphaInactive#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha #SkinBackgroundAlpha#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha #GlobalSkinBackgroundAlphaInactive#][!UpdateMeter #CURRENTSECTION#][!Redraw]
W=(#Scale#*#SidebarWidth#)
imagetint=#GlobalSkinBackgroundColorTint#
;--------------------------------------------------------------------------------------------
; SIDEBAR SYSTEM

;---------------------------------------------------------------------
; NORMAL

[StyleSystemNormalBackground]
H=(#Scale#*52)

[StyleSystemNormalBorder]
SolidColor=#ColorBorder#
X=(#Scale#*10)
W=(#Scale#*(#SidebarWidth#-20))
H=1

;-----------------------
; FRAME

[StyleSystemNormalBorder1]
Y=(#Scale#*5)
Hidden=#HideBordersTop#

[StyleSystemNormalVerticalBorderA]
SolidColor=#ColorBorder#
X=(#Scale#*37)
Y=(#Scale#*6)
W=(#Scale#*1)
H=(#Scale#*41)
Hidden=#HideBordersBottom#

[StyleSystemNormalVerticalBorderB]
SolidColor=#ColorBorder#
X=(#Scale#*(#SidebarWidth#-37))
Y=(#Scale#*6)
W=1
H=(#Scale#*41)
Hidden=#HideBordersBottom#

[StyleSystemNormalBorder2]
Y=(#Scale#*47)
Hidden=#HideBordersBottom#

;-----------------------
; LABELS

[StyleSystemNormalLabel]
H=(#Scale#*15)
W=(#Scale#*25)
FontColor=#NetworkLabelsColor#
FontFace=#Font#
FontSize=#Size3#
StringStyle=NORMAL
AntiAlias=1

[StyleSystemNormalLabel1]
X=(#Scale#*35)
Y=(#Scale#*15)
StringAlign=RIGHT

[StyleSystemNormalLabel2]
X=(#Scale#*35)
Y=(#Scale#*15)r
StringAlign=RIGHT

[StyleSystemNormalLabel3]
X=(#Scale#*(#SidebarWidth#-35))
Y=(#Scale#*15)
StringAlign=LEFT

[StyleSystemNormalLabel4]
X=(#Scale#*(#SidebarWidth#-35))
Y=(#Scale#*15)r

;-----------------------
; TEXT

[StyleSystemNormalText]
Y=r
H=(#Scale#*15)
ClipString=1
FontColor=#NetworkMainTextColor#
FontFace=#Font#
FontSize=#Size3#
StringStyle=NORMAL
AntiAlias=1

[StyleSystemNormalText1]
X=(#Scale#*9)r
W=(#Scale#*(#SidebarWidth#-163))
StringAlign=LEFT

[StyleSystemNormalText2]
X=(#Scale#*9)r
W=(#Scale#*(#SidebarWidth#-163))
StringAlign=LEFT

[StyleSystemNormalText3]
X=(#Scale#*-9)r
W=(#Scale#*75)
StringAlign=RIGHT

[StyleSystemNormalText4]
X=(#Scale#*-9)r
W=(#Scale#*75)
StringAlign=RIGHT

[StyleSystemNormalTextDark]
FontColor=#NetworkLabelsColor#

;----------------------------------------------
; GRAPH FRAME

[StyleSystemNormalBorder3]
X=0
Y=0
W=0
H=0
Hidden=1

[StyleSystemNormalVerticalBorderC]
X=0
Y=0
W=0
H=0
Hidden=1

[StyleSystemNormalBorder4]
X=0
Y=0
W=0
H=0
Hidden=1

[StyleSystemNormalBorder5]
X=0
Y=0
W=0
H=0
Hidden=1

;-----------------------
; GRAPH METERS

[StyleSystemNormalGraph]
X=0
Y=0
W=0
H=0
Hidden=1

[StyleSystemNormalGraph1]

[StyleSystemNormalGraph2]

;-----------------------
; GRAPH TEXT AND LABELS

[StyleSystemNormalGraphLabel]
X=0
Y=0
W=0
H=0
Hidden=1

[StyleSystemNormalGraphLabel1]

[StyleSystemNormalGraphLabel2]

[StyleSystemNormalGraphText]
X=0
Y=0
W=0
H=0
Hidden=1

[StyleSystemNormalGraphText1]

[StyleSystemNormalGraphText2]

;---------------------------------------------------------------------
; GRAPH

[StyleSystemGraphBackground]
H=(#Scale#*(152-#GraphSubtraction#))

[StyleSystemGraphBorder]
SolidColor=#ColorBorder#
X=(#Scale#*10)
W=(#Scale#*(#SidebarWidth#-20))
H=1

;-----------------------
; FRAME

[StyleSystemGraphBorder1]
Y=(#Scale#*5)
Hidden=#HideBordersTop#

[StyleSystemGraphVerticalBorderA]
SolidColor=#ColorBorder#
X=(#Scale#*37)
Y=(#Scale#*6)
W=1
H=(#Scale#*41)
Hidden=#HideBordersBottom#

[StyleSystemGraphVerticalBorderB]
SolidColor=#ColorBorder#
X=(#Scale#*(#SidebarWidth#-37))
Y=(#Scale#*6)
W=1
H=(#Scale#*41)
Hidden=#HideBordersBottom#

[StyleSystemGraphBorder2]
Y=(#Scale#*47)
Hidden=#HideBordersBottom#

;-----------------------
; LABELS

[StyleSystemGraphLabel]
H=(#Scale#*15)
W=(#Scale#*25)
FontColor=#NetworkLabelsColor#
FontFace=#Font#
FontSize=#Size3#
StringStyle=NORMAL
AntiAlias=1

[StyleSystemGraphLabel1]
X=(#Scale#*35)
Y=(#Scale#*15)
StringAlign=RIGHT

[StyleSystemGraphLabel2]
X=(#Scale#*35)
Y=(#Scale#*15)r
StringAlign=RIGHT

[StyleSystemGraphLabel3]
X=(#Scale#*(#SidebarWidth#-35))
Y=(#Scale#*15)
StringAlign=LEFT

[StyleSystemGraphLabel4]
X=(#Scale#*(#SidebarWidth#-35))
Y=(#Scale#*15)r

;-----------------------
; TEXT

[StyleSystemGraphText]
Y=r
H=(#Scale#*15)
ClipString=1
FontColor=#NetworkMainTextColor# 
FontFace=#Font#
FontSize=#Size3#
StringStyle=NORMAL
AntiAlias=1

[StyleSystemGraphText1]
X=(#Scale#*9)r
W=(#Scale#*(#SidebarWidth#-163))
StringAlign=LEFT

[StyleSystemGraphText2]
X=(#Scale#*9)r
W=(#Scale#*(#SidebarWidth#-163))
StringAlign=LEFT

;--------------------------------------------------------

[StyleSystemGraphText3]
X=(#Scale#*-9)r
W=(#Scale#*76)
StringAlign=RIGHT

[StyleSystemGraphText4]
X=(#Scale#*-9)r
W=(#Scale#*76)
StringAlign=RIGHT

[StyleSystemGraphTextDark]
FontColor=#NetworkLabelsColor#

;----------------------------------------------
; GRAPH FRAME

[StyleSystemGraphBorder3]
X=(#Scale#*(10+(4*#HideBordersBottom#)))
Y=(#Scale#*(89-#GraphSubtraction#))
W=(#Scale#*(#SidebarWidth#-20-(4*#HideBordersBottom#)))

[StyleSystemGraphVerticalBorderC]
SolidColor=#ColorBorder#
X=(#Scale#*(#SidebarWidth#/2))
Y=(#Scale#*(90-#GraphSubtraction#))
W=1
H=(#Scale#*19)

[StyleSystemGraphBorder4]
SolidColor=#ColorBorder#
X=(#Scale#*(10+(4*#HideBordersBottom#)))
Y=(#Scale#*(109-#GraphSubtraction#))
W=(#Scale#*(#SidebarWidth#-20-(4*#HideBordersBottom#)))
H=1

[StyleSystemGraphBorder5]
Y=(#Scale#*(147-#GraphSubtraction#))
Hidden=#HideBordersBottom#

;-----------------------
; GRAPH METERS

[StyleSystemGraphGraph]
X=(#Scale#*(10+(4*#HideBordersBottom#)))
H=(#Scale#*37)
W=(#Scale#*(#SidebarWidth#-20-(4*#HideBordersBottom#)))
AntiAlias=1
AutoScale=1

[StyleSystemGraphGraph1]
Y=(#Scale#*(52-#GraphSubtraction#))
PrimaryColor=#NetworkUpColor#

[StyleSystemGraphGraph2]
Y=(#Scale#*(110-#GraphSubtraction#))
PrimaryColor=#NetworkDownColor#
Flip=1

;-----------------------
; GRAPH TEXT AND LABELS

[StyleSystemGraphGraphLabel]
Y=(#Scale#*(92-#GraphSubtraction#))
H=(#Scale#*10)
FontFace=#Font#
FontSize=#Size4#
StringStyle=NORMAL
AntiAlias=1

[StyleSystemGraphGraphLabel1]
X=(#Scale#*((#SidebarWidth#/2)-4))
FontColor=#NetworkUpColor#
StringAlign=RIGHT
;StringEffect=SHADOW

[StyleSystemGraphGraphLabel2]
X=(#Scale#*((#SidebarWidth#/2)+4))
FontColor=#NetworkDownColor#
StringAlign=LEFT

[StyleSystemGraphGraphText]
Y=(#Scale#*(92-#GraphSubtraction#))
FontColor=#NetworkMainTextColor#
FontFace=#Font#
FontSize=#Size3#
StringStyle=NORMAL
AntiAlias=1

[StyleSystemGraphGraphText1]
X=(#Scale#*((#SidebarWidth#/2)-26))
StringAlign=RIGHT

[StyleSystemGraphGraphText2]
X=(#Scale#*((#SidebarWidth#/2)+45))
StringAlign=LEFT