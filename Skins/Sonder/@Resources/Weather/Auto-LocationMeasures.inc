;==================== GET CITY AND LAT/LONG DATA AUTOMATICALLY ===============================
[MeasureGoogleMyLocation]
Measure=WebParser
URL=https://www.google.com/search?q=what+city+am+i+in
UpdateRate=86400
Flags=Resync | NoCookies
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:77.0) Gecko/20100101 Firefox/77.0
DecodeCharacterReference=1
LogSubstringErrors=0
RegExp=(?siU)data-url="\/maps\/place\/(.*)\/data
StringIndex=1
Disabled=1
Substitute="+":" ","":"Could not detect"
;Debug=2
;Debug2File=#@#Weathercom.txt
FinishAction=[!SetVariable AutoDetectCity [MeasureGoogleMyLocation]][!WriteKeyValue Variables AutoDetectCity [MeasureGoogleMyLocation] #@#Variables.inc][!Delay 500][!EnableMeasure MeasureLocations][!UpdateMeasure MeasureLocations][!Log "Update MeasureGoogleMyLocation Finished"]
OnChangeAction=[!SetVariable AutoDetectCity [MeasureGoogleMyLocation]][!WriteKeyValue Variables AutoDetectCity [MeasureGoogleMyLocation] #@#Variables.inc][!Delay 500][!EnableMeasure MeasureLocations][!UpdateMeasure MeasureLocations][!Log "Update MeasureGoogleMyLocation Changed"]

;DONT UNCOMMENT THIS MICHAEL, ...INCASE AUTOLATLONG=1
;[MeasureCityChange]
;Measure=String
;String=#AutoDetectCity#
;IfMatch=^$
;IfMatchAction=
;IfNotMatchAction=[!EnableMeasure MeasureLocations][!UpdateMeasure MeasureLocations][!Log "AutoDetectCity Changed"]
;DynamicVariables=1

[MeasureLocations]
Measure=WebParser
URL=https://nominatim.openstreetmap.org/search.php?q=#AutoDetectCity#&format=json
Flags=Resync | NoCookies
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:78.0) Gecko/20100101 Firefox/78.0
RegExp=(?siU)#Record#
UpdateRate=86400
Disabled=#AutoLatLong#
OnChangeAction=[!EnableMeasureGroup LatLongChildren][!UpdateMeasureGroup LatLongChildren][!Delay 500][!DisableMeasureGroup LatLongChildren][!Log "Update MeasureLocations Finished"]
DynamicVariables=1
;Debug=2
;Debug2File=#@#EntireSite.txt

[MeasureLatitude1]
Measure=WebParser
Group=LatLongChildren
Disabled=1
URL=[MeasureLocations]
StringIndex=1
RegExpSubstitute=1
Substitute="^(.*\.)([\d]{1,6}).*$":"\1\2","":"No results"
OnUpdateAction=[!SetVariable Latitude [MeasureLatitude1]][!WriteKeyValue Variables Latitude [MeasureLatitude1] #@#Variables.inc][!Refresh "#ROOTCONFIG#\Weather"]

[MeasureLongitude1]
Measure=WebParser
Group=LatLongChildren
Disabled=1
URL=[MeasureLocations]
StringIndex=2
RegExpSubstitute=1
Substitute="^(.*\.)([\d]{1,6}).*$":"\1\2"
OnUpdateAction=[!SetVariable Longitude [MeasureLongitude1]][!WriteKeyValue Variables Longitude [MeasureLongitude1] #@#Variables.inc][!Refresh "#ROOTCONFIG#\Weather"]
;IfMatch=^$
;IfNotMatchAction=[!ShowMeterGroup Group1][!UpdateMeterGroup Group1][!Redraw][!SetOption MeterBack H "([*MeterName1:YH*]+10)"][!UpdateMeter *][!Redraw]

[MeasureName1]
Measure=WebParser
Group=LatLongChildren
Disabled=1
URL=[MeasureLocations]
StringIndex=3
Substitute="":"No results"