[Rainmeter]
Group=EnigmaSidebar
Update=1000
MiddleMouseUpAction=!Refresh
LeftMouseDoubleClickAction=!ActivateConfig #CURRENTCONFIG#
DynamicWindowSize=1

[StyleSidebarBackground]
Meter=Image
ImageName=#@#Images\SkinBackground.White.png
ScaleMargins=12,12,12,12
ImageAlpha=#GlobalSkinBackgroundAlphaInactive#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha #GlobalSkinBackgroundAlpha#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha #GlobalSkinBackgroundAlphaInactive#][!UpdateMeter #CURRENTSECTION#][!Redraw]
X=0
Y=0
W=((#bgWidth# + (#bgOffset# * 2)) * #scale#)
H=([MeterBackgroundHeight:Y] * #scale#)
imagetint=#GlobalSkinBackgroundColorTint#
Group=Background
DynamicVariables=1
