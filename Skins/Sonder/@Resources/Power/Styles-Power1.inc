[Rainmeter]

[StyleSidebarBackground]
Meter=Shape
Shape=Rectangle 0,0,(#Scale#*50),(#Scale#*50),6 | Fill Color #GlobalSkinBackgroundColorTint#,#GlobalSkinBackgroundAlphaInactive# | StrokeWidth 0
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Rectangle 0,0,(#Scale#*50),(#Scale#*50),6 | Fill Color #GlobalSkinBackgroundColorTint#,#GlobalSkinBackgroundAlpha# | StrokeWidth 0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Rectangle 0,0,(#Scale#*50),(#Scale#*50),6 | Fill Color #GlobalSkinBackgroundColorTint#,#GlobalSkinBackgroundAlphaInactive# | StrokeWidth 0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
;Shape=Ellipse 25,25,25 | Fill Color 0,0,0,1 | StrokeWidth 0
