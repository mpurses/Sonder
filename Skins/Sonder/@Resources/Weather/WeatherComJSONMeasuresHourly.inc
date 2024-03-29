; =================================================================================================
; WeatherComJSONMeasures.inc by mpurses
; "Weather.com - Parsing the JSON" (https://forum.rainmeter.net/viewtopic.php?f=118&t=34628)
;
; Updated 2020-08-21
; ==================================================================================================

; =========================================
; Hourly Icon, Temp, and Time
; =========================================

[@HourlyParent]
Measure=WebParser
Group=Parents
URL=[@EntireSiteSuperParent]
Disabled=1
StringIndex=1
RegExp=(?siU)"v3-wx-forecast-hourly-12hour":.*"iconCode":\[(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*)\].*"precipChance":\[(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*)\].*"temperature":\[(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*)\].*"validTimeLocal":\["(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)","(.*)"\].*
FinishAction=[!EnableMeasureGroup Hourly]

; ========================================
; ICON
; ========================================
[@HourlyIconCode1]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=1
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyIconCode2]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=2
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyIconCode3]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=3
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyIconCode4]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=4
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyIconCode5]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=5
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyIconCode6]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=6
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyIconCode7]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=7
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyIconCode8]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=8
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyIconCode9]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=9
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyIconCode10]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=10
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyIconCode11]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=11
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyIconCode12]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=12
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

; ========================================
; PRECIPCHANCE - only shown if above 30%
; ========================================
[@HourlyPrecipChance1]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=13
RegExpSubstitute=1
Substitute=#CommonSubstitute#,"^([1-2]?[0-9])$":"","^([3-9]?[0-9])$":"\1%","^(100)$":"\1%"
Group=Hourly
Disabled=1

[@HourlyPrecipChance2]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=14
RegExpSubstitute=1
Substitute=#CommonSubstitute#,"^([1-2]?[0-9])$":"","^([3-9]?[0-9])$":"\1%","^(100)$":"\1%"
Group=Hourly
Disabled=1

[@HourlyPrecipChance3]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=15
RegExpSubstitute=1
Substitute=#CommonSubstitute#,"^([1-2]?[0-9])$":"","^([3-9]?[0-9])$":"\1%","^(100)$":"\1%"
Group=Hourly
Disabled=1

[@HourlyPrecipChance4]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=16
RegExpSubstitute=1
Substitute=#CommonSubstitute#,"^([1-2]?[0-9])$":"","^([3-9]?[0-9])$":"\1%","^(100)$":"\1%"
Group=Hourly
Disabled=1

[@HourlyPrecipChance5]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=17
RegExpSubstitute=1
Substitute=#CommonSubstitute#,"^([1-2]?[0-9])$":"","^([3-9]?[0-9])$":"\1%","^(100)$":"\1%"
Group=Hourly
Disabled=1

[@HourlyPrecipChance6]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=18
RegExpSubstitute=1
Substitute=#CommonSubstitute#,"^([1-2]?[0-9])$":"","^([3-9]?[0-9])$":"\1%","^(100)$":"\1%"
Group=Hourly
Disabled=1

[@HourlyPrecipChance7]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=19
RegExpSubstitute=1
Substitute=#CommonSubstitute#,"^([1-2]?[0-9])$":"","^([3-9]?[0-9])$":"\1%","^(100)$":"\1%"
Group=Hourly
Disabled=1

[@HourlyPrecipChance8]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=20
RegExpSubstitute=1
Substitute=#CommonSubstitute#,"^([1-2]?[0-9])$":"","^([3-9]?[0-9])$":"\1%","^(100)$":"\1%"
Group=Hourly
Disabled=1

[@HourlyPrecipChance9]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=21
RegExpSubstitute=1
Substitute=#CommonSubstitute#,"^([1-2]?[0-9])$":"","^([3-9]?[0-9])$":"\1%","^(100)$":"\1%"
Group=Hourly
Disabled=1

[@HourlyPrecipChance10]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=22
RegExpSubstitute=1
Substitute=#CommonSubstitute#,"^([1-2]?[0-9])$":"","^([3-9]?[0-9])$":"\1%","^(100)$":"\1%"
Group=Hourly
Disabled=1

[@HourlyPrecipChance11]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=23
RegExpSubstitute=1
Substitute=#CommonSubstitute#,"^([1-2]?[0-9])$":"","^([3-9]?[0-9])$":"\1%","^(100)$":"\1%"
Group=Hourly
Disabled=1

[@HourlyPrecipChance12]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=24
RegExpSubstitute=1
Substitute=#CommonSubstitute#,"^([1-2]?[0-9])$":"","^([3-9]?[0-9])$":"\1%","^(100)$":"\1%"
Group=Hourly
Disabled=1

; ========================================
; TEMPERATURE
; ========================================
[@HourlyTemp1]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=25
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyTemp2]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=26
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyTemp3]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=27
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyTemp4]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=28
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyTemp5]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=29
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyTemp6]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=30
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyTemp7]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=31
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyTemp8]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=32
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyTemp9]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=33
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyTemp10]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=34
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyTemp11]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=35
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyTemp12]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=36
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

; ========================================
; TIME
; ========================================
[@HourlyTime1]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=37
RegExpSubstitute=1
Substitute=#CommonSubstitute#
OnUpdateAction=[!UpdateMeasure @HourlyTimeHour1]
Group=Hourly
Disabled=1

[@HourlyTime2]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=38
RegExpSubstitute=1
Substitute=#CommonSubstitute#
OnUpdateAction=[!UpdateMeasure @HourlyTimeHour2]
Group=Hourly
Disabled=1

[@HourlyTime3]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=39
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyTime4]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=40
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyTime5]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=41
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyTime6]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=42
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyTime7]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=43
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyTime8]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=44
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyTime9]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=45
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyTime10]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=46
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyTime11]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=47
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

[@HourlyTime12]
Measure=WebParser
URL=[@HourlyParent]
StringIndex=48
RegExpSubstitute=1
Substitute=#CommonSubstitute#
Group=Hourly
Disabled=1

; ============================
; TIME FORMAT ADJUSTED
; ============================
[@HourlyTimeHour1]
Measure=Time
TimeStamp=[@HourlyTime1]
TimeStampFormat=%Y-%m-%dT%H:%S
Format=#TimeFormatHourly#
FormatLocale=#Language#
DynamicVariables=1
Group=Hourly
Disabled=1
DecodeCodePoints=1

[@HourlyTimeHour2]
Measure=Time
TimeStamp=[@HourlyTime2]
TimeStampFormat=%Y-%m-%dT%H:%S
Format=#TimeFormatHourly#
FormatLocale=#Language#
DynamicVariables=1
Group=Hourly
Disabled=1
DecodeCodePoints=1

[@HourlyTimeHour3]
Measure=Time
TimeStamp=[@HourlyTime3]
TimeStampFormat=%Y-%m-%dT%H:%S
Format=#TimeFormatHourly#
FormatLocale=#Language#
DynamicVariables=1
Group=Hourly
Disabled=1
DecodeCodePoints=1

[@HourlyTimeHour4]
Measure=Time
TimeStamp=[@HourlyTime4]
TimeStampFormat=%Y-%m-%dT%H:%S
Format=#TimeFormatHourly#
FormatLocale=#Language#
DynamicVariables=1
Group=Hourly
Disabled=1
DecodeCodePoints=1

[@HourlyTimeHour5]
Measure=Time
TimeStamp=[@HourlyTime5]
TimeStampFormat=%Y-%m-%dT%H:%S
Format=#TimeFormatHourly#
FormatLocale=#Language#
DynamicVariables=1
Group=Hourly
Disabled=1
DecodeCodePoints=1

[@HourlyTimeHour6]
Measure=Time
TimeStamp=[@HourlyTime6]
TimeStampFormat=%Y-%m-%dT%H:%S
Format=#TimeFormatHourly#
FormatLocale=#Language#
DynamicVariables=1
Group=Hourly
Disabled=1
DecodeCodePoints=1

[@HourlyTimeHour7]
Measure=Time
TimeStamp=[@HourlyTime7]
TimeStampFormat=%Y-%m-%dT%H:%S
Format=#TimeFormatHourly#
FormatLocale=#Language#
DynamicVariables=1
Group=Hourly
Disabled=1
DecodeCodePoints=1

[@HourlyTimeHour8]
Measure=Time
TimeStamp=[@HourlyTime8]
TimeStampFormat=%Y-%m-%dT%H:%S
Format=#TimeFormatHourly#
FormatLocale=#Language#
DynamicVariables=1
Group=Hourly
Disabled=1
DecodeCodePoints=1

[@HourlyTimeHour9]
Measure=Time
TimeStamp=[@HourlyTime9]
TimeStampFormat=%Y-%m-%dT%H:%S
Format=#TimeFormatHourly#
FormatLocale=#Language#
DynamicVariables=1
Group=Hourly
Disabled=1
DecodeCodePoints=1

[@HourlyTimeHour10]
Measure=Time
TimeStamp=[@HourlyTime10]
TimeStampFormat=%Y-%m-%dT%H:%S
Format=#TimeFormatHourly#
FormatLocale=#Language#
DynamicVariables=1
Group=Hourly
Disabled=1
DecodeCodePoints=1

[@HourlyTimeHour11]
Measure=Time
TimeStamp=[@HourlyTime11]
TimeStampFormat=%Y-%m-%dT%H:%S
Format=#TimeFormatHourly#
FormatLocale=#Language#
DynamicVariables=1
Group=Hourly
Disabled=1
DecodeCodePoints=1

[@HourlyTimeHour12]
Measure=Time
TimeStamp=[@HourlyTime12]
TimeStampFormat=%Y-%m-%dT%H:%S
Format=#TimeFormatHourly#
FormatLocale=#Language#
DynamicVariables=1
Group=Hourly
Disabled=1
DecodeCodePoints=1