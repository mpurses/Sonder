[Background]
Meter=Shape
Shape=Rectangle (#MonthCalendarScale#*8),(#MonthCalendarScale#*(#Month_YAdj_All#+80)),(#MonthCalendarScale#*285),#CalendarHeight#,7 | Fill Color #GlobalSkinBackgroundColorTint#,#GlobalSkinBackgroundAlphaInactive# | StrokeWidth 0
MouseOverAction=[!SetOption #CURRENTSECTION# Shape "Rectangle (#MonthCalendarScale#*8),(#MonthCalendarScale#*(#Month_YAdj_All#+80)),(#MonthCalendarScale#*285),#CalendarHeight#,7 | Fill Color #GlobalSkinBackgroundColorTint#,#GlobalSkinBackgroundAlpha# | StrokeWidth 0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape "Rectangle (#MonthCalendarScale#*8),(#MonthCalendarScale#*(#Month_YAdj_All#+80)),(#MonthCalendarScale#*285),#CalendarHeight#,7 | Fill Color #GlobalSkinBackgroundColorTint#,#GlobalSkinBackgroundAlphaInactive# | StrokeWidth 0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
;LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\EverydayHabitCalendar\" "MonthHabitCalendar+5Habits.ini"]

;[MeasureFade]
;Measure=Plugin
;Plugin=ActionTimer
;ActionList1=Repeat FadeIn,#Speed#,25
;FadeIn=[!SetVariable Fade "(Clamp((#Fade#+10),#GlobalSkinBackgroundAlphaInactive#,#GlobalSkinBackgroundAlpha#))"]#Action#
;ActionList2=Repeat FadeOut,#Speed#,25
;FadeOut=[!SetVariable Fade "(Clamp((#Fade#-10),#GlobalSkinBackgroundAlphaInactive#,#GlobalSkinBackgroundAlpha#))"]#Action#
;DynamicVariables=1