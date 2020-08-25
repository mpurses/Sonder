[Variables]
;@include=#@#Variables.inc
ColorImage=#GlobalSkinBackgroundColor#
SkinBackgroundAlpha=#GlobalSkinBackgroundAlpha#
;Dont modify these or put them in Variables.inc, they might change in the future
APIKey=d522aa97197fd864d36b418f39ebb323
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:80.0) Gecko/20100101 Firefox/80.0
CommonSubstitute='"':"","^null$":"","\\u002F":"/","\\u005C":"\","\\u003C":"<","\\u003E":">"
URLSite=https://api.weather.com/v3/aggcommon/v3-wx-observations-current;v3-wx-forecast-hourly-12hour;v3-wx-forecast-daily-15day;v3alertsHeadlines;v3-location-point?format=json&geocode=#Latitude#,#Longitude#&units=#Units#&language=#Language#&apiKey=#APIKey#

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