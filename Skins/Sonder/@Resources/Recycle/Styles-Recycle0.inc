[Rainmeter]

[StyleSidebarBackground]
Meter=IMAGE
SolidColor=0,0,0,1
ImageName=#@#Images\SkinBackground.White.png
ScaleMargins=12,12,12,12
ImageAlpha=#GlobalSkinBackgroundAlphaInactive#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha #GlobalSkinBackgroundAlpha#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha #GlobalSkinBackgroundAlphaInactive#][!UpdateMeter #CURRENTSECTION#][!Redraw]
W=(#Scale#*60)
H=(#Scale#*60)
imagetint=#GlobalSkinBackgroundColorTint#
