[StyleSidebarBackground]
Meter=IMAGE
ImageName=#@#Images\SkinBackground.White.png
ScaleMargins=12,12,12,12
ImageAlpha=#GlobalSkinBackgroundAlphaInactive#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha #GlobalSkinBackgroundAlpha#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha #GlobalSkinBackgroundAlphaInactive#][!UpdateMeter #CURRENTSECTION#][!Redraw]
W=(#scale#*#WidthValueSystem#)
H=(#scale#*(90+(#ShowSystemGPU#+#ShowSystemTemp#+#ShowSystemSwap#)*20-(#HideSystem#*20)))
imagetint=#GlobalSkinBackgroundColorTint#
