[Background]
Meter=IMAGE
ImageName=#@#Images\SkinBackground.White.png
ScaleMargins=12,12,12,12
imagetint=#GlobalSkinBackgroundColorTint#
ImageAlpha=#GlobalSkinBackgroundAlphaInactive#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha #GlobalSkinBackgroundAlpha#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha #GlobalSkinBackgroundAlphaInactive#][!UpdateMeter #CURRENTSECTION#][!Redraw]
X=(#MonthCalendarScale#*8)
Y=(#MonthCalendarScale#*(#Month_YAdj_All#+80))
W=(#MonthCalendarScale#*285)
H=#CalendarHeight#
;DynamicVariables=1
;LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\EverydayHabitCalendar\" "MonthHabitCalendar+5Habits.ini"]

;[MeasureFade]
;Measure=Plugin
;Plugin=ActionTimer
;ActionList1=Repeat FadeIn,#Speed#,25
;FadeIn=[!SetVariable Fade "(Clamp((#Fade#+10),#GlobalSkinBackgroundAlphaInactive#,#GlobalSkinBackgroundAlpha#))"]#Action#
;ActionList2=Repeat FadeOut,#Speed#,25
;FadeOut=[!SetVariable Fade "(Clamp((#Fade#-10),#GlobalSkinBackgroundAlphaInactive#,#GlobalSkinBackgroundAlpha#))"]#Action#
;DynamicVariables=1