[Rainmeter]
Group=EnigmaSidebar
Update=1000
MiddleMouseUpAction=!Refresh
LeftMouseDoubleClickAction=!ActivateConfig #CURRENTCONFIG#
DynamicWindowSize=1

[StyleSidebarBackground]
Meter=Shape
Shape=Rectangle 0,0,((#bgWidth# + (#bgOffset# * 2)) * #scale#),([MeterBackgroundHeight:Y] * #scale#),6 | Fill Color #GlobalSkinBackgroundColorTint#,#GlobalSkinBackgroundAlphaInactive# | StrokeWidth 0
X=0
Y=0
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Rectangle 0,0,((#*bgWidth*# + (#*bgOffset*# * 2)) * #scale#),([*MeterBackgroundHeight:Y*] * #scale#),6 | Fill Color #GlobalSkinBackgroundColorTint#,#GlobalSkinBackgroundAlpha# | StrokeWidth 0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Rectangle 0,0,((#*bgWidth*# + (#*bgOffset*# * 2)) * #scale#),([*MeterBackgroundHeight:Y*] * #scale#),6 | Fill Color #GlobalSkinBackgroundColorTint#,#GlobalSkinBackgroundAlphaInactive# | StrokeWidth 0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Group=Background
DynamicVariables=1
