;=============================================================================================
;                                   TOOLTIP ADJUST FOR AM/PM

;[@CurrentObservationTime]

;[@CurrentConditions]

;[MeasureFeelsLikeLabels]: [@CurrentFeelsLike]°
;[MeasureWindLabels]: [@CurrentWindDirectionCompass] [@CurrentWindSpeed] [@UnitsSpeed]
;[MeasureHumidityLabels]: [@CurrentHumidity]%
;[MeasurePressureLabels]: [@CurrentPressureChangeTrend] [@CurrentPressure] [@UnitsPressure]
;[MeasureVisibilityLabels]: [@CurrentVisibilityDistance] [@UnitsDistance]

;☀↑  [@ForecastTodaySunriseTime]     ☀↓  [@ForecastTodaySunsetTime]
; ☾ ↑  [@MoonDay1RiseTime]     ☾ ↓  [@MoonDay1SetTime]
;=============================================================================================
;[@CurrentConditionsParent2]
;Measure=WebParser
;Group=Parents
;URL=[@EntireSiteSuperParent]
;Disabled=1
;StringIndex=1
;RegExp=(?siU)"v3-wx-observations-current":.*"cloudCoverPhrase":(.*),.*"iconCode":(.*),.*"precip24Hour":(.*),.*"pressureAltimeter":(.*),.*"pressureChange":(.*),.*"pressureTendencyCode":(.*),.*"pressureTendencyTrend":(.*),.*"relativeHumidity":(.*),.*"sunriseTimeLocal":(.*),.*"sunsetTimeLocal":(.*),.*"temperature":(.*),.*"temperatureDewPoint":(.*),.*"temperatureFeelsLike":(.*),.*"temperatureMaxSince7AM":(.*),.*"uvDescription":(.*),.*"uvIndex":(.*),.*"validTimeLocal":(.*),.*"visibility":(.*),.*"windDirection":(.*),.*"windDirectionCardinal":(.*),.*"windGust":(.*),.*"windSpeed":(.*),.*"wxPhraseLong":(.*),.*"wxPhraseMedium":(.*),"wxPhraseShort":(.*)}
;FinishAction=[!EnableMeasureGroup "Times"][!EnableMeasureGroup Sun][!UpdateMeasureGroup Sun][!WriteKeyValue Variables SunsetTime [@ForecastTodaySunsetTime] "#@#Variables.inc"][!WriteKeyValue Variables SunriseTime [@ForecastTodaySunriseTime] "#@#Variables.inc"][!UpdateMeasure MeasureTimeMOON][!Redraw]
;;[@CurrentSunsetTime][@CurrentSunriseTime]
;;FinishAction=[!EnableMeasureGroup "Times"]
;;Group=Times
;;Disabled=1

[@CurrentObservationTimeAdjusted]
Measure=Time
TimeStamp=[@CurrentObservationTime]
TimeStampFormat=%H:%M
Format=#HourFormat#:%M #Fm#
FormatLocale=#Language#
DynamicVariables=1
DecodeCodePoints=1

[@ForecastTodaySunriseTimeAdjusted]
Measure=Time
TimeStamp=[@ForecastTodaySunriseTime]
TimeStampFormat=%H:%M
Format=#HourFormat#:%M #Fm#
FormatLocale=#Language#
DynamicVariables=1
DecodeCodePoints=1
OnChangeAction=[!WriteKeyValue Variables SunriseTime [@ForecastTodaySunriseTime] "#@#Variables.inc"]

[@ForecastTodaySunsetTimeAdjusted]
Measure=Time
TimeStamp=[@ForecastTodaySunsetTime]
TimeStampFormat=%H:%M
Format=#HourFormat#:%M #Fm#
FormatLocale=#Language#
DynamicVariables=1
DecodeCodePoints=1
OnChangeAction=[!WriteKeyValue Variables SunsetTime [@ForecastTodaySunsetTime] "#@#Variables.inc"]

;If Moon risetime or settime is the next day...
[@MoonDay1RiseTimeTEST]
Measure=String
String=[@MoonDay1RiseTime]
IfMatch=(?i)N\/A
IfMatchAction=[!SetOption @MoonDay1RiseTimeAdjusted TimeStamp "[*@MoonDay2RiseTime*]"][!SetOption MeasureMoonriseHour String "[*@MoonDay2RiseTime*]"][!SetOption MeasureMoonriseMinute String "[*@MoonDay2RiseTime*]"]
IfNotMatchAction=[!SetOption @MoonDay1RiseTimeAdjusted TimeStamp "[*@MoonDay1RiseTime*]"][!SetOption MeasureMoonriseHour String "[*@MoonDay1RiseTime*]"][!SetOption MeasureMoonriseMinute String "[*@MoonDay1RiseTime*]"]
DynamicVariables=1
Group=Times
Disabled=1

[@MoonDay1SetTimeTEST]
Measure=String
String=[@MoonDay1SetTime]
IfMatch=(?i)N\/A
IfMatchAction=[!SetOption @MoonDay1SetTimeAdjusted TimeStamp "[*@MoonDay2SetTime*]"][!SetOption MeasureMoonsetHour String "[*@MoonDay2SetTime*]"][!SetOption MeasureMoonsetMinute String "[*@MoonDay2SetTime*]"]
IfNotMatchAction=[!SetOption @MoonDay1SetTimeAdjusted TimeStamp "[*@MoonDay1SetTime*]"][!SetOption MeasureMoonsetHour String "[*@MoonDay1SetTime*]"][!SetOption MeasureMoonsetMinute String "[*@MoonDay1SetTime*]"]
DynamicVariables=1
Group=Times
Disabled=1

[@MoonDay1RiseTimeAdjusted]
Measure=Time
TimeStamp=[@MoonDay1RiseTime]
TimeStampFormat=%H:%M
Format=#HourFormat#:%M #Fm#
FormatLocale=#Language#
DynamicVariables=1
DecodeCodePoints=1
Group=Times
Disabled=1

[@MoonDay1SetTimeAdjusted]
Measure=Time
TimeStamp=[@MoonDay1SetTime]
TimeStampFormat=%H:%M
Format=#HourFormat#:%M #Fm#
FormatLocale=#Language#
DynamicVariables=1
DecodeCodePoints=1
Group=Times
Disabled=1

[@CurrentVisibilityDistanceAdjusted]
Measure=String
String=[@CurrentVisibilityDistance]
Substitute=#CommonSubstitute#,".000":"",".500":".5"
DynamicVariables=1

;; ========================================
;;         WEATHER PARAMETERS LABELS - *broken*, translate in @Resources/Language folder
;; ========================================

;[Variables]
;WeatherParametersLabels=(?siU)\\"wxu-today-details\\":{.*,\\"feelsLike\\":\\"(.*)\\",\\"highLow\\":\\"(.*)\\",\\"wind\\":\\"(.*)\\",\\"humidity\\":\\"(.*)\\",\\"dewPoint\\":\\"(.*)\\",\\"pressure\\":\\"(.*)\\",\\"uvIndex\\":\\"(.*)\\",\\"visibility\\":\\"(.*)\\",\\"moonPhase\\":\\"(.*)\\",.*}

;[WEATHER.COMSuperParent]
;Measure=WebParser
;URL=https://weather.com/#Language#/weather/today/l/#Latitude#,#Longitude#
;UpdateRate=600
;Flags=Resync | NoCookies
;DecodeCharacterReference=1
;LogSubstringErrors=0
;RegExp=(?siU)^(.*)$
;StringIndex=1
;FinishAction=[!EnableMeasureGroup Parents]

;[MeasureWeatherParametersLabels]
;Measure=WebParser
;Group=Parents
;URL=[WEATHER.COMSuperParent]
;Disabled=1
;StringIndex=1
;RegExp=#WeatherParametersLabels#
;LogSubstringErrors=0

;[MeasureFeelsLikeLabels]
;Measure=WebParser
;Url=[MeasureWeatherParametersLabels]
;StringIndex=1
;DecodeCodePoints=1

;[MeasureWindLabels]
;Measure=WebParser
;Url=[MeasureWeatherParametersLabels]
;StringIndex=3
;DecodeCodePoints=1

;[MeasureHumidityLabels]
;Measure=WebParser
;Url=[MeasureWeatherParametersLabels]
;StringIndex=4
;DecodeCodePoints=1

;[MeasurePressureLabels]
;Measure=WebParser
;Url=[MeasureWeatherParametersLabels]
;StringIndex=6
;DecodeCodePoints=1

;[MeasureVisibilityLabels]
;Measure=WebParser
;Url=[MeasureWeatherParametersLabels]
;StringIndex=8
;DecodeCodePoints=1