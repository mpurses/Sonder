[Variables]
;@include=#@#Variables.inc
ColorImage=#GlobalSkinBackgroundColor#
SkinBackgroundAlpha=#GlobalSkinBackgroundAlpha#

[Rainmeter]
Group=Weather
MiddleMouseUpAction=!Refresh
LeftMouseDoubleClickAction=!ActivateConfig #CURRENTCONFIG#
;MouseOverAction=[!SetVariable SkinMouseOver 1][!Redraw]
;MouseLeaveAction=[!SetVariable SkinMouseOver 0][!Redraw]
DynamicWindowSize=1

[Variables]
;SkinMouseOver=0

[StyleSidebarBackground]
ImageName=#@#Images\SkinBackground.#ColorImage#.png
ScaleMargins=12,12,12,12
ImageAlpha=#GlobalSkinBackgroundAlphaInactive#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha #SkinBackgroundAlpha#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha #GlobalSkinBackgroundAlphaInactive#][!UpdateMeter #CURRENTSECTION#][!Redraw]
imagetint=#GlobalSkinBackgroundColorTint#

[Background]
Meter=IMAGE
MeterStyle=StyleSidebarBackground | StyleSystem#Variant#Background
X=0