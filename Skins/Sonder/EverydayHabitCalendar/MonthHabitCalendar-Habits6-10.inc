
;=================================================================================Habit6=============================================================================
[Habit6Day1]
Meter=Shape
X=#MeterDay1X#
Y=([Habit6:Y]+#HabitSpacingsMonth#/4)
(110+#HabitSpacingsMonth#*6)
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay1]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay1]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay1]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay1]" (1-[#Habit6Day[&MeasureDay1]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay1]" (1-[#Habit6Day[&MeasureDay1]])][!UpdateMeter Habit6Day1][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day2]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay2]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay2]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay2]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay2]" (1-[#Habit6Day[&MeasureDay2]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay2]" (1-[#Habit6Day[&MeasureDay2]])][!UpdateMeter Habit6Day2][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day3]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay3]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay3]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay3]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay3]" (1-[#Habit6Day[&MeasureDay3]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay3]" (1-[#Habit6Day[&MeasureDay3]])][!UpdateMeter Habit6Day3][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day4]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay4]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay4]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay4]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay4]" (1-[#Habit6Day[&MeasureDay4]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay4]" (1-[#Habit6Day[&MeasureDay4]])][!UpdateMeter Habit6Day4][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day5]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay5]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay5]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay5]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay5]" (1-[#Habit6Day[&MeasureDay5]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay5]" (1-[#Habit6Day[&MeasureDay5]])][!UpdateMeter Habit6Day5][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day6]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay6]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay6]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay6]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay6]" (1-[#Habit6Day[&MeasureDay6]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay6]" (1-[#Habit6Day[&MeasureDay6]])][!UpdateMeter Habit6Day6][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day7]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay7]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay7]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay7]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay7]" (1-[#Habit6Day[&MeasureDay7]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay7]" (1-[#Habit6Day[&MeasureDay7]])][!UpdateMeter Habit6Day7][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day8]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay8]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay8]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay8]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay8]" (1-[#Habit6Day[&MeasureDay8]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay8]" (1-[#Habit6Day[&MeasureDay8]])][!UpdateMeter Habit6Day8][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day9]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay9]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay9]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay9]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay9]" (1-[#Habit6Day[&MeasureDay9]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay9]" (1-[#Habit6Day[&MeasureDay9]])][!UpdateMeter Habit6Day9][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day10]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay10]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay10]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay10]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay10]" (1-[#Habit6Day[&MeasureDay10]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay10]" (1-[#Habit6Day[&MeasureDay10]])][!UpdateMeter Habit6Day10][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day11]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay11]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay11]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay11]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay11]" (1-[#Habit6Day[&MeasureDay11]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay11]" (1-[#Habit6Day[&MeasureDay11]])][!UpdateMeter Habit6Day11][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day12]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay12]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay12]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay12]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay12]" (1-[#Habit6Day[&MeasureDay12]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay12]" (1-[#Habit6Day[&MeasureDay12]])][!UpdateMeter Habit6Day12][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day13]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay13]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay13]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay13]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay13]" (1-[#Habit6Day[&MeasureDay13]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay13]" (1-[#Habit6Day[&MeasureDay13]])][!UpdateMeter Habit6Day13][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day14]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay14]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay14]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay14]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay14]" (1-[#Habit6Day[&MeasureDay14]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay14]" (1-[#Habit6Day[&MeasureDay14]])][!UpdateMeter Habit6Day14][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day15]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay15]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay15]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay15]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay15]" (1-[#Habit6Day[&MeasureDay15]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay15]" (1-[#Habit6Day[&MeasureDay15]])][!UpdateMeter Habit6Day15][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day16]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay16]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay16]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay16]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay16]" (1-[#Habit6Day[&MeasureDay16]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay16]" (1-[#Habit6Day[&MeasureDay16]])][!UpdateMeter Habit6Day16][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day17]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay17]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay17]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay17]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay17]" (1-[#Habit6Day[&MeasureDay17]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay17]" (1-[#Habit6Day[&MeasureDay17]])][!UpdateMeter Habit6Day17][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day18]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay18]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay18]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay18]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay18]" (1-[#Habit6Day[&MeasureDay18]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay18]" (1-[#Habit6Day[&MeasureDay18]])][!UpdateMeter Habit6Day18][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day19]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay19]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay19]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay19]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay19]" (1-[#Habit6Day[&MeasureDay19]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay19]" (1-[#Habit6Day[&MeasureDay19]])][!UpdateMeter Habit6Day19][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day20]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay20]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay20]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay20]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay20]" (1-[#Habit6Day[&MeasureDay20]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay20]" (1-[#Habit6Day[&MeasureDay20]])][!UpdateMeter Habit6Day20][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day21]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay21]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay21]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay21]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay21]" (1-[#Habit6Day[&MeasureDay21]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay21]" (1-[#Habit6Day[&MeasureDay21]])][!UpdateMeter Habit6Day21][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day22]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay22]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay22]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay22]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay22]" (1-[#Habit6Day[&MeasureDay22]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay22]" (1-[#Habit6Day[&MeasureDay22]])][!UpdateMeter Habit6Day22][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day23]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay23]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay23]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay23]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay23]" (1-[#Habit6Day[&MeasureDay23]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay23]" (1-[#Habit6Day[&MeasureDay23]])][!UpdateMeter Habit6Day23][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day24]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay24]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay24]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay24]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay24]" (1-[#Habit6Day[&MeasureDay24]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay24]" (1-[#Habit6Day[&MeasureDay24]])][!UpdateMeter Habit6Day24][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day25]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay25]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay25]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay25]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay25]" (1-[#Habit6Day[&MeasureDay25]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay25]" (1-[#Habit6Day[&MeasureDay25]])][!UpdateMeter Habit6Day25][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day26]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay26]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay26]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay26]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay26]" (1-[#Habit6Day[&MeasureDay26]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay26]" (1-[#Habit6Day[&MeasureDay26]])][!UpdateMeter Habit6Day26][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day27]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay27]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay27]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay27]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay27]" (1-[#Habit6Day[&MeasureDay27]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay27]" (1-[#Habit6Day[&MeasureDay27]])][!UpdateMeter Habit6Day27][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day28]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay28]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay28]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay28]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay28]" (1-[#Habit6Day[&MeasureDay28]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay28]" (1-[#Habit6Day[&MeasureDay28]])][!UpdateMeter Habit6Day28][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit6Disabled#

[Habit6Day29]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay29]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay29]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay29]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay29]" (1-[#Habit6Day[&MeasureDay29]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay29]" (1-[#Habit6Day[&MeasureDay29]])][!UpdateMeter Habit6Day29][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=([CalculateDay29Draw]=1 || #Habit6Disabled#=1)

[Habit6Day30]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay30]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay30]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay30]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay30]" (1-[#Habit6Day[&MeasureDay30]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay30]" (1-[#Habit6Day[&MeasureDay30]])][!UpdateMeter Habit6Day30][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=([CalculateDay30Draw]=1 || #Habit6Disabled#=1)

[Habit6Day31]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay31]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit6Day[&MeasureDay31]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit6Day[&MeasureDay31]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit6Day[&MeasureDay31]" (1-[#Habit6Day[&MeasureDay31]]) "#@#Calendar\Calendar-Day-Variables-6.inc"][!SetVariable "Habit6Day[&MeasureDay31]" (1-[#Habit6Day[&MeasureDay31]])][!UpdateMeter Habit6Day31][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=([CalculateDay31Draw]=1 || #Habit6Disabled#=1)

;=================================================================================Habit7=============================================================================
[Habit7Day1]
Meter=Shape
X=#MeterDay1X#
Y=([Habit7:Y]+#HabitSpacingsMonth#/4)
(110+#HabitSpacingsMonth#*7)
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay1]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay1]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay1]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay1]" (1-[#Habit7Day[&MeasureDay1]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay1]" (1-[#Habit7Day[&MeasureDay1]])][!UpdateMeter Habit7Day1][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day2]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay2]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay2]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay2]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay2]" (1-[#Habit7Day[&MeasureDay2]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay2]" (1-[#Habit7Day[&MeasureDay2]])][!UpdateMeter Habit7Day2][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day3]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay3]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay3]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay3]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay3]" (1-[#Habit7Day[&MeasureDay3]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay3]" (1-[#Habit7Day[&MeasureDay3]])][!UpdateMeter Habit7Day3][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day4]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay4]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay4]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay4]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay4]" (1-[#Habit7Day[&MeasureDay4]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay4]" (1-[#Habit7Day[&MeasureDay4]])][!UpdateMeter Habit7Day4][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day5]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay5]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay5]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay5]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay5]" (1-[#Habit7Day[&MeasureDay5]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay5]" (1-[#Habit7Day[&MeasureDay5]])][!UpdateMeter Habit7Day5][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day6]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay6]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay6]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay6]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay6]" (1-[#Habit7Day[&MeasureDay6]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay6]" (1-[#Habit7Day[&MeasureDay6]])][!UpdateMeter Habit7Day6][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day7]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay7]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay7]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay7]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay7]" (1-[#Habit7Day[&MeasureDay7]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay7]" (1-[#Habit7Day[&MeasureDay7]])][!UpdateMeter Habit7Day7][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day8]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay8]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay8]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay8]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay8]" (1-[#Habit7Day[&MeasureDay8]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay8]" (1-[#Habit7Day[&MeasureDay8]])][!UpdateMeter Habit7Day8][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day9]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay9]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay9]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay9]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay9]" (1-[#Habit7Day[&MeasureDay9]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay9]" (1-[#Habit7Day[&MeasureDay9]])][!UpdateMeter Habit7Day9][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day10]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay10]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay10]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay10]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay10]" (1-[#Habit7Day[&MeasureDay10]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay10]" (1-[#Habit7Day[&MeasureDay10]])][!UpdateMeter Habit7Day10][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day11]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay11]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay11]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay11]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay11]" (1-[#Habit7Day[&MeasureDay11]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay11]" (1-[#Habit7Day[&MeasureDay11]])][!UpdateMeter Habit7Day11][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day12]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay12]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay12]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay12]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay12]" (1-[#Habit7Day[&MeasureDay12]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay12]" (1-[#Habit7Day[&MeasureDay12]])][!UpdateMeter Habit7Day12][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day13]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay13]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay13]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay13]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay13]" (1-[#Habit7Day[&MeasureDay13]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay13]" (1-[#Habit7Day[&MeasureDay13]])][!UpdateMeter Habit7Day13][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day14]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay14]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay14]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay14]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay14]" (1-[#Habit7Day[&MeasureDay14]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay14]" (1-[#Habit7Day[&MeasureDay14]])][!UpdateMeter Habit7Day14][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day15]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay15]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay15]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay15]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay15]" (1-[#Habit7Day[&MeasureDay15]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay15]" (1-[#Habit7Day[&MeasureDay15]])][!UpdateMeter Habit7Day15][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day16]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay16]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay16]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay16]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay16]" (1-[#Habit7Day[&MeasureDay16]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay16]" (1-[#Habit7Day[&MeasureDay16]])][!UpdateMeter Habit7Day16][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day17]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay17]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay17]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay17]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay17]" (1-[#Habit7Day[&MeasureDay17]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay17]" (1-[#Habit7Day[&MeasureDay17]])][!UpdateMeter Habit7Day17][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day18]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay18]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay18]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay18]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay18]" (1-[#Habit7Day[&MeasureDay18]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay18]" (1-[#Habit7Day[&MeasureDay18]])][!UpdateMeter Habit7Day18][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day19]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay19]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay19]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay19]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay19]" (1-[#Habit7Day[&MeasureDay19]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay19]" (1-[#Habit7Day[&MeasureDay19]])][!UpdateMeter Habit7Day19][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day20]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay20]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay20]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay20]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay20]" (1-[#Habit7Day[&MeasureDay20]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay20]" (1-[#Habit7Day[&MeasureDay20]])][!UpdateMeter Habit7Day20][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day21]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay21]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay21]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay21]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay21]" (1-[#Habit7Day[&MeasureDay21]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay21]" (1-[#Habit7Day[&MeasureDay21]])][!UpdateMeter Habit7Day21][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day22]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay22]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay22]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay22]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay22]" (1-[#Habit7Day[&MeasureDay22]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay22]" (1-[#Habit7Day[&MeasureDay22]])][!UpdateMeter Habit7Day22][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day23]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay23]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay23]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay23]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay23]" (1-[#Habit7Day[&MeasureDay23]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay23]" (1-[#Habit7Day[&MeasureDay23]])][!UpdateMeter Habit7Day23][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day24]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay24]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay24]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay24]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay24]" (1-[#Habit7Day[&MeasureDay24]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay24]" (1-[#Habit7Day[&MeasureDay24]])][!UpdateMeter Habit7Day24][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day25]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay25]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay25]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay25]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay25]" (1-[#Habit7Day[&MeasureDay25]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay25]" (1-[#Habit7Day[&MeasureDay25]])][!UpdateMeter Habit7Day25][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day26]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay26]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay26]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay26]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay26]" (1-[#Habit7Day[&MeasureDay26]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay26]" (1-[#Habit7Day[&MeasureDay26]])][!UpdateMeter Habit7Day26][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day27]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay27]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay27]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay27]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay27]" (1-[#Habit7Day[&MeasureDay27]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay27]" (1-[#Habit7Day[&MeasureDay27]])][!UpdateMeter Habit7Day27][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day28]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay28]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay28]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay28]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay28]" (1-[#Habit7Day[&MeasureDay28]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay28]" (1-[#Habit7Day[&MeasureDay28]])][!UpdateMeter Habit7Day28][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit7Disabled#

[Habit7Day29]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay29]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay29]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay29]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay29]" (1-[#Habit7Day[&MeasureDay29]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay29]" (1-[#Habit7Day[&MeasureDay29]])][!UpdateMeter Habit7Day29][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=([CalculateDay29Draw]=1 || #Habit7Disabled#=1)

[Habit7Day30]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay30]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay30]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay30]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay30]" (1-[#Habit7Day[&MeasureDay30]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay30]" (1-[#Habit7Day[&MeasureDay30]])][!UpdateMeter Habit7Day30][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=([CalculateDay30Draw]=1 || #Habit7Disabled#=1)

[Habit7Day31]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay31]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit7Day[&MeasureDay31]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit7Day[&MeasureDay31]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit7Day[&MeasureDay31]" (1-[#Habit7Day[&MeasureDay31]]) "#@#Calendar\Calendar-Day-Variables-7.inc"][!SetVariable "Habit7Day[&MeasureDay31]" (1-[#Habit7Day[&MeasureDay31]])][!UpdateMeter Habit7Day31][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=([CalculateDay31Draw]=1 || #Habit7Disabled#=1)

;=================================================================================Habit8=============================================================================
[Habit8Day1]
Meter=Shape
X=#MeterDay1X#
Y=([Habit8:Y]+#HabitSpacingsMonth#/4)
(110+#HabitSpacingsMonth#*8)
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay1]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay1]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay1]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay1]" (1-[#Habit8Day[&MeasureDay1]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay1]" (1-[#Habit8Day[&MeasureDay1]])][!UpdateMeter Habit8Day1][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day2]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay2]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay2]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay2]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay2]" (1-[#Habit8Day[&MeasureDay2]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay2]" (1-[#Habit8Day[&MeasureDay2]])][!UpdateMeter Habit8Day2][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day3]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay3]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay3]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay3]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay3]" (1-[#Habit8Day[&MeasureDay3]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay3]" (1-[#Habit8Day[&MeasureDay3]])][!UpdateMeter Habit8Day3][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day4]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay4]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay4]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay4]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay4]" (1-[#Habit8Day[&MeasureDay4]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay4]" (1-[#Habit8Day[&MeasureDay4]])][!UpdateMeter Habit8Day4][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day5]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay5]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay5]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay5]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay5]" (1-[#Habit8Day[&MeasureDay5]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay5]" (1-[#Habit8Day[&MeasureDay5]])][!UpdateMeter Habit8Day5][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day6]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay6]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay6]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay6]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay6]" (1-[#Habit8Day[&MeasureDay6]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay6]" (1-[#Habit8Day[&MeasureDay6]])][!UpdateMeter Habit8Day6][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day7]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay7]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay7]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay7]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay7]" (1-[#Habit8Day[&MeasureDay7]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay7]" (1-[#Habit8Day[&MeasureDay7]])][!UpdateMeter Habit8Day7][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day8]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay8]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay8]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay8]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay8]" (1-[#Habit8Day[&MeasureDay8]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay8]" (1-[#Habit8Day[&MeasureDay8]])][!UpdateMeter Habit8Day8][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day9]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay9]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay9]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay9]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay9]" (1-[#Habit8Day[&MeasureDay9]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay9]" (1-[#Habit8Day[&MeasureDay9]])][!UpdateMeter Habit8Day9][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day10]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay10]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay10]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay10]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay10]" (1-[#Habit8Day[&MeasureDay10]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay10]" (1-[#Habit8Day[&MeasureDay10]])][!UpdateMeter Habit8Day10][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day11]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay11]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay11]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay11]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay11]" (1-[#Habit8Day[&MeasureDay11]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay11]" (1-[#Habit8Day[&MeasureDay11]])][!UpdateMeter Habit8Day11][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day12]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay12]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay12]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay12]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay12]" (1-[#Habit8Day[&MeasureDay12]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay12]" (1-[#Habit8Day[&MeasureDay12]])][!UpdateMeter Habit8Day12][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day13]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay13]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay13]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay13]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay13]" (1-[#Habit8Day[&MeasureDay13]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay13]" (1-[#Habit8Day[&MeasureDay13]])][!UpdateMeter Habit8Day13][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day14]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay14]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay14]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay14]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay14]" (1-[#Habit8Day[&MeasureDay14]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay14]" (1-[#Habit8Day[&MeasureDay14]])][!UpdateMeter Habit8Day14][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day15]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay15]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay15]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay15]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay15]" (1-[#Habit8Day[&MeasureDay15]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay15]" (1-[#Habit8Day[&MeasureDay15]])][!UpdateMeter Habit8Day15][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day16]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay16]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay16]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay16]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay16]" (1-[#Habit8Day[&MeasureDay16]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay16]" (1-[#Habit8Day[&MeasureDay16]])][!UpdateMeter Habit8Day16][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day17]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay17]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay17]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay17]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay17]" (1-[#Habit8Day[&MeasureDay17]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay17]" (1-[#Habit8Day[&MeasureDay17]])][!UpdateMeter Habit8Day17][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day18]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay18]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay18]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay18]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay18]" (1-[#Habit8Day[&MeasureDay18]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay18]" (1-[#Habit8Day[&MeasureDay18]])][!UpdateMeter Habit8Day18][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day19]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay19]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay19]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay19]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay19]" (1-[#Habit8Day[&MeasureDay19]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay19]" (1-[#Habit8Day[&MeasureDay19]])][!UpdateMeter Habit8Day19][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day20]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay20]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay20]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay20]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay20]" (1-[#Habit8Day[&MeasureDay20]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay20]" (1-[#Habit8Day[&MeasureDay20]])][!UpdateMeter Habit8Day20][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day21]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay21]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay21]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay21]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay21]" (1-[#Habit8Day[&MeasureDay21]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay21]" (1-[#Habit8Day[&MeasureDay21]])][!UpdateMeter Habit8Day21][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day22]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay22]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay22]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay22]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay22]" (1-[#Habit8Day[&MeasureDay22]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay22]" (1-[#Habit8Day[&MeasureDay22]])][!UpdateMeter Habit8Day22][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day23]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay23]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay23]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay23]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay23]" (1-[#Habit8Day[&MeasureDay23]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay23]" (1-[#Habit8Day[&MeasureDay23]])][!UpdateMeter Habit8Day23][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day24]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay24]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay24]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay24]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay24]" (1-[#Habit8Day[&MeasureDay24]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay24]" (1-[#Habit8Day[&MeasureDay24]])][!UpdateMeter Habit8Day24][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day25]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay25]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay25]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay25]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay25]" (1-[#Habit8Day[&MeasureDay25]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay25]" (1-[#Habit8Day[&MeasureDay25]])][!UpdateMeter Habit8Day25][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day26]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay26]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay26]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay26]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay26]" (1-[#Habit8Day[&MeasureDay26]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay26]" (1-[#Habit8Day[&MeasureDay26]])][!UpdateMeter Habit8Day26][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day27]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay27]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay27]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay27]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay27]" (1-[#Habit8Day[&MeasureDay27]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay27]" (1-[#Habit8Day[&MeasureDay27]])][!UpdateMeter Habit8Day27][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day28]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay28]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay28]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay28]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay28]" (1-[#Habit8Day[&MeasureDay28]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay28]" (1-[#Habit8Day[&MeasureDay28]])][!UpdateMeter Habit8Day28][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit8Disabled#

[Habit8Day29]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay29]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay29]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay29]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay29]" (1-[#Habit8Day[&MeasureDay29]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay29]" (1-[#Habit8Day[&MeasureDay29]])][!UpdateMeter Habit8Day29][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=([CalculateDay29Draw]=1 || #Habit8Disabled#=1)

[Habit8Day30]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay30]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay30]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay30]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay30]" (1-[#Habit8Day[&MeasureDay30]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay30]" (1-[#Habit8Day[&MeasureDay30]])][!UpdateMeter Habit8Day30][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=([CalculateDay30Draw]=1 || #Habit8Disabled#=1)

[Habit8Day31]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay31]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit8Day[&MeasureDay31]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit8Day[&MeasureDay31]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit8Day[&MeasureDay31]" (1-[#Habit8Day[&MeasureDay31]]) "#@#Calendar\Calendar-Day-Variables-8.inc"][!SetVariable "Habit8Day[&MeasureDay31]" (1-[#Habit8Day[&MeasureDay31]])][!UpdateMeter Habit8Day31][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=([CalculateDay31Draw]=1 || #Habit8Disabled#=1)


;=================================================================================Habit9=============================================================================
[Habit9Day1]
Meter=Shape
X=#MeterDay1X#
Y=([Habit9:Y]+#HabitSpacingsMonth#/4)
(110+#HabitSpacingsMonth#*9)
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay1]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay1]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay1]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay1]" (1-[#Habit9Day[&MeasureDay1]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay1]" (1-[#Habit9Day[&MeasureDay1]])][!UpdateMeter Habit9Day1][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day2]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay2]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay2]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay2]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay2]" (1-[#Habit9Day[&MeasureDay2]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay2]" (1-[#Habit9Day[&MeasureDay2]])][!UpdateMeter Habit9Day2][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day3]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay3]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay3]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay3]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay3]" (1-[#Habit9Day[&MeasureDay3]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay3]" (1-[#Habit9Day[&MeasureDay3]])][!UpdateMeter Habit9Day3][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day4]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay4]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay4]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay4]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay4]" (1-[#Habit9Day[&MeasureDay4]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay4]" (1-[#Habit9Day[&MeasureDay4]])][!UpdateMeter Habit9Day4][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day5]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay5]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay5]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay5]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay5]" (1-[#Habit9Day[&MeasureDay5]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay5]" (1-[#Habit9Day[&MeasureDay5]])][!UpdateMeter Habit9Day5][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day6]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay6]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay6]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay6]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay6]" (1-[#Habit9Day[&MeasureDay6]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay6]" (1-[#Habit9Day[&MeasureDay6]])][!UpdateMeter Habit9Day6][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day7]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay7]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay7]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay7]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay7]" (1-[#Habit9Day[&MeasureDay7]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay7]" (1-[#Habit9Day[&MeasureDay7]])][!UpdateMeter Habit9Day7][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day8]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay8]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay8]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay8]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay8]" (1-[#Habit9Day[&MeasureDay8]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay8]" (1-[#Habit9Day[&MeasureDay8]])][!UpdateMeter Habit9Day8][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day9]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay9]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay9]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay9]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay9]" (1-[#Habit9Day[&MeasureDay9]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay9]" (1-[#Habit9Day[&MeasureDay9]])][!UpdateMeter Habit9Day9][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day10]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay10]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay10]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay10]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay10]" (1-[#Habit9Day[&MeasureDay10]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay10]" (1-[#Habit9Day[&MeasureDay10]])][!UpdateMeter Habit9Day10][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day11]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay11]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay11]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay11]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay11]" (1-[#Habit9Day[&MeasureDay11]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay11]" (1-[#Habit9Day[&MeasureDay11]])][!UpdateMeter Habit9Day11][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day12]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay12]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay12]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay12]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay12]" (1-[#Habit9Day[&MeasureDay12]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay12]" (1-[#Habit9Day[&MeasureDay12]])][!UpdateMeter Habit9Day12][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day13]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay13]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay13]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay13]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay13]" (1-[#Habit9Day[&MeasureDay13]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay13]" (1-[#Habit9Day[&MeasureDay13]])][!UpdateMeter Habit9Day13][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day14]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay14]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay14]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay14]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay14]" (1-[#Habit9Day[&MeasureDay14]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay14]" (1-[#Habit9Day[&MeasureDay14]])][!UpdateMeter Habit9Day14][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day15]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay15]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay15]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay15]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay15]" (1-[#Habit9Day[&MeasureDay15]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay15]" (1-[#Habit9Day[&MeasureDay15]])][!UpdateMeter Habit9Day15][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day16]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay16]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay16]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay16]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay16]" (1-[#Habit9Day[&MeasureDay16]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay16]" (1-[#Habit9Day[&MeasureDay16]])][!UpdateMeter Habit9Day16][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day17]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay17]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay17]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay17]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay17]" (1-[#Habit9Day[&MeasureDay17]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay17]" (1-[#Habit9Day[&MeasureDay17]])][!UpdateMeter Habit9Day17][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day18]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay18]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay18]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay18]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay18]" (1-[#Habit9Day[&MeasureDay18]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay18]" (1-[#Habit9Day[&MeasureDay18]])][!UpdateMeter Habit9Day18][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day19]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay19]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay19]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay19]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay19]" (1-[#Habit9Day[&MeasureDay19]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay19]" (1-[#Habit9Day[&MeasureDay19]])][!UpdateMeter Habit9Day19][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day20]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay20]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay20]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay20]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay20]" (1-[#Habit9Day[&MeasureDay20]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay20]" (1-[#Habit9Day[&MeasureDay20]])][!UpdateMeter Habit9Day20][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day21]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay21]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay21]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay21]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay21]" (1-[#Habit9Day[&MeasureDay21]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay21]" (1-[#Habit9Day[&MeasureDay21]])][!UpdateMeter Habit9Day21][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day22]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay22]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay22]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay22]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay22]" (1-[#Habit9Day[&MeasureDay22]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay22]" (1-[#Habit9Day[&MeasureDay22]])][!UpdateMeter Habit9Day22][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day23]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay23]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay23]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay23]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay23]" (1-[#Habit9Day[&MeasureDay23]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay23]" (1-[#Habit9Day[&MeasureDay23]])][!UpdateMeter Habit9Day23][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day24]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay24]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay24]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay24]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay24]" (1-[#Habit9Day[&MeasureDay24]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay24]" (1-[#Habit9Day[&MeasureDay24]])][!UpdateMeter Habit9Day24][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day25]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay25]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay25]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay25]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay25]" (1-[#Habit9Day[&MeasureDay25]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay25]" (1-[#Habit9Day[&MeasureDay25]])][!UpdateMeter Habit9Day25][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day26]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay26]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay26]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay26]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay26]" (1-[#Habit9Day[&MeasureDay26]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay26]" (1-[#Habit9Day[&MeasureDay26]])][!UpdateMeter Habit9Day26][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day27]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay27]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay27]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay27]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay27]" (1-[#Habit9Day[&MeasureDay27]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay27]" (1-[#Habit9Day[&MeasureDay27]])][!UpdateMeter Habit9Day27][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day28]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay28]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay28]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay28]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay28]" (1-[#Habit9Day[&MeasureDay28]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay28]" (1-[#Habit9Day[&MeasureDay28]])][!UpdateMeter Habit9Day28][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit9Disabled#

[Habit9Day29]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay29]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay29]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay29]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay29]" (1-[#Habit9Day[&MeasureDay29]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay29]" (1-[#Habit9Day[&MeasureDay29]])][!UpdateMeter Habit9Day29][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=([CalculateDay29Draw]=1 || #Habit9Disabled#=1)

[Habit9Day30]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay30]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay30]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay30]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay30]" (1-[#Habit9Day[&MeasureDay30]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay30]" (1-[#Habit9Day[&MeasureDay30]])][!UpdateMeter Habit9Day30][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=([CalculateDay30Draw]=1 || #Habit9Disabled#=1)

[Habit9Day31]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay31]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit9Day[&MeasureDay31]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit9Day[&MeasureDay31]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit9Day[&MeasureDay31]" (1-[#Habit9Day[&MeasureDay31]]) "#@#Calendar\Calendar-Day-Variables-9.inc"][!SetVariable "Habit9Day[&MeasureDay31]" (1-[#Habit9Day[&MeasureDay31]])][!UpdateMeter Habit9Day31][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=([CalculateDay31Draw]=1 || #Habit9Disabled#=1)

;=================================================================================Habit10=============================================================================
[Habit10Day1]
Meter=Shape
X=#MeterDay1X#
Y=([Habit10:Y]+#HabitSpacingsMonth#/4)
(110+#HabitSpacingsMonth#*10)
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay1]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay1]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay1]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay1]" (1-[#Habit10Day[&MeasureDay1]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay1]" (1-[#Habit10Day[&MeasureDay1]])][!UpdateMeter Habit10Day1][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day2]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay2]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay2]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay2]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay2]" (1-[#Habit10Day[&MeasureDay2]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay2]" (1-[#Habit10Day[&MeasureDay2]])][!UpdateMeter Habit10Day2][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day3]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay3]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay3]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay3]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay3]" (1-[#Habit10Day[&MeasureDay3]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay3]" (1-[#Habit10Day[&MeasureDay3]])][!UpdateMeter Habit10Day3][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day4]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay4]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay4]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay4]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay4]" (1-[#Habit10Day[&MeasureDay4]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay4]" (1-[#Habit10Day[&MeasureDay4]])][!UpdateMeter Habit10Day4][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day5]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay5]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay5]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay5]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay5]" (1-[#Habit10Day[&MeasureDay5]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay5]" (1-[#Habit10Day[&MeasureDay5]])][!UpdateMeter Habit10Day5][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day6]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay6]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay6]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay6]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay6]" (1-[#Habit10Day[&MeasureDay6]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay6]" (1-[#Habit10Day[&MeasureDay6]])][!UpdateMeter Habit10Day6][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day7]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay7]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay7]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay7]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay7]" (1-[#Habit10Day[&MeasureDay7]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay7]" (1-[#Habit10Day[&MeasureDay7]])][!UpdateMeter Habit10Day7][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day8]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay8]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay8]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay8]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay8]" (1-[#Habit10Day[&MeasureDay8]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay8]" (1-[#Habit10Day[&MeasureDay8]])][!UpdateMeter Habit10Day8][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day9]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay9]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay9]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay9]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay9]" (1-[#Habit10Day[&MeasureDay9]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay9]" (1-[#Habit10Day[&MeasureDay9]])][!UpdateMeter Habit10Day9][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day10]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay10]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay10]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay10]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay10]" (1-[#Habit10Day[&MeasureDay10]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay10]" (1-[#Habit10Day[&MeasureDay10]])][!UpdateMeter Habit10Day10][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day11]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay11]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay11]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay11]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay11]" (1-[#Habit10Day[&MeasureDay11]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay11]" (1-[#Habit10Day[&MeasureDay11]])][!UpdateMeter Habit10Day11][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day12]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay12]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay12]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay12]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay12]" (1-[#Habit10Day[&MeasureDay12]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay12]" (1-[#Habit10Day[&MeasureDay12]])][!UpdateMeter Habit10Day12][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day13]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay13]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay13]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay13]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay13]" (1-[#Habit10Day[&MeasureDay13]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay13]" (1-[#Habit10Day[&MeasureDay13]])][!UpdateMeter Habit10Day13][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day14]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay14]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay14]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay14]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay14]" (1-[#Habit10Day[&MeasureDay14]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay14]" (1-[#Habit10Day[&MeasureDay14]])][!UpdateMeter Habit10Day14][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day15]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay15]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay15]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay15]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay15]" (1-[#Habit10Day[&MeasureDay15]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay15]" (1-[#Habit10Day[&MeasureDay15]])][!UpdateMeter Habit10Day15][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day16]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay16]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay16]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay16]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay16]" (1-[#Habit10Day[&MeasureDay16]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay16]" (1-[#Habit10Day[&MeasureDay16]])][!UpdateMeter Habit10Day16][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day17]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay17]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay17]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay17]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay17]" (1-[#Habit10Day[&MeasureDay17]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay17]" (1-[#Habit10Day[&MeasureDay17]])][!UpdateMeter Habit10Day17][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day18]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay18]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay18]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay18]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay18]" (1-[#Habit10Day[&MeasureDay18]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay18]" (1-[#Habit10Day[&MeasureDay18]])][!UpdateMeter Habit10Day18][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day19]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay19]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay19]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay19]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay19]" (1-[#Habit10Day[&MeasureDay19]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay19]" (1-[#Habit10Day[&MeasureDay19]])][!UpdateMeter Habit10Day19][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day20]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay20]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay20]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay20]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay20]" (1-[#Habit10Day[&MeasureDay20]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay20]" (1-[#Habit10Day[&MeasureDay20]])][!UpdateMeter Habit10Day20][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day21]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay21]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay21]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay21]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay21]" (1-[#Habit10Day[&MeasureDay21]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay21]" (1-[#Habit10Day[&MeasureDay21]])][!UpdateMeter Habit10Day21][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day22]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay22]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay22]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay22]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay22]" (1-[#Habit10Day[&MeasureDay22]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay22]" (1-[#Habit10Day[&MeasureDay22]])][!UpdateMeter Habit10Day22][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day23]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay23]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay23]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay23]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay23]" (1-[#Habit10Day[&MeasureDay23]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay23]" (1-[#Habit10Day[&MeasureDay23]])][!UpdateMeter Habit10Day23][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day24]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay24]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay24]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay24]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay24]" (1-[#Habit10Day[&MeasureDay24]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay24]" (1-[#Habit10Day[&MeasureDay24]])][!UpdateMeter Habit10Day24][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day25]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay25]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay25]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay25]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay25]" (1-[#Habit10Day[&MeasureDay25]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay25]" (1-[#Habit10Day[&MeasureDay25]])][!UpdateMeter Habit10Day25][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day26]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay26]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay26]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay26]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay26]" (1-[#Habit10Day[&MeasureDay26]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay26]" (1-[#Habit10Day[&MeasureDay26]])][!UpdateMeter Habit10Day26][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day27]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay27]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay27]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay27]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay27]" (1-[#Habit10Day[&MeasureDay27]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay27]" (1-[#Habit10Day[&MeasureDay27]])][!UpdateMeter Habit10Day27][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day28]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay28]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay28]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay28]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay28]" (1-[#Habit10Day[&MeasureDay28]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay28]" (1-[#Habit10Day[&MeasureDay28]])][!UpdateMeter Habit10Day28][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=#Habit10Disabled#

[Habit10Day29]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay29]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay29]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay29]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay29]" (1-[#Habit10Day[&MeasureDay29]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay29]" (1-[#Habit10Day[&MeasureDay29]])][!UpdateMeter Habit10Day29][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=([CalculateDay29Draw]=1 || #Habit10Disabled#=1)

[Habit10Day30]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay30]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay30]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay30]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay30]" (1-[#Habit10Day[&MeasureDay30]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay30]" (1-[#Habit10Day[&MeasureDay30]])][!UpdateMeter Habit10Day30][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=([CalculateDay30Draw]=1 || #Habit10Disabled#=1)

[Habit10Day31]
Meter=Shape
X=#HabitSpacingsDay#r
Y=r
Shape=Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay31]]] | StrokeWidth 1 | Stroke Color 255,255,255,30
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColorHover[#Habit10Day[&MeasureDay31]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Ellipse 0,((-1*#HabitSpacingsDay#/4)*0.75),((#HabitSpacingsDay#/2)*0.75),((#HabitSpacingsDay#/2)*0.75) | Fill Color [#HabitDayCircleColor[#Habit10Day[&MeasureDay31]]] | StrokeWidth 1 | Stroke Color 255,255,255,30"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables "Habit10Day[&MeasureDay31]" (1-[#Habit10Day[&MeasureDay31]]) "#@#Calendar\Calendar-Day-Variables-10.inc"][!SetVariable "Habit10Day[&MeasureDay31]" (1-[#Habit10Day[&MeasureDay31]])][!UpdateMeter Habit10Day31][!CommandMeasure StreakScript "HabitDayComplete()"][!Redraw][!Update]
LeftMouseUpAction=[!Refresh]
Hidden=([CalculateDay31Draw]=1 || #Habit10Disabled#=1)