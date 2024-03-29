[Variables]
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:80.0) Gecko/20100101 Firefox/80.0
Record=(?(?=.*"lat":).*"lat":"(.*)",.*"lon":"(.*)",.*"display_name":"(.*)")


;============================== GET LAT LONG DATA FROM CITY DATA =======================================
[MeasureLocations]
Measure=WebParser
URL=https://nominatim.openstreetmap.org/search.php?q=#WorldMapCitySearch#&format=json
Flags=ForceReload
ForceReload=1
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:78.0) Gecko/20100101 Firefox/78.0
RegExp=(?siU)#Record#
;Disabled=1
FinishAction=[!EnableMeasureGroup LatLongChildren][!UpdateMeasureGroup LatLongChildren][!SetVariable WorldMapLatSearch [MeasureLatitude1]][!SetVariable WorldMapLonSearch [MeasureLongitude1]][!Log "Latitutude and Longitude downloaded"][!UpdateMeter SearchCityValue][!UpdateMeter YourLat][!UpdateMeter YourLong][!Redraw][!Update][!DisableMeasureGroup LatLongChildren]
;[!Delay 2000]
DynamicVariables=1

[MeasureLatitude1]
Measure=WebParser
Group=LatLongChildren
Disabled=1
URL=[MeasureLocations]
StringIndex=1
RegExpSubstitute=1
Substitute="^(.*\.)([\d]{1,6}).*$":"\1\2","":"No results"

[MeasureLongitude1]
Measure=WebParser
Group=LatLongChildren
Disabled=1
URL=[MeasureLocations]
StringIndex=2
RegExpSubstitute=1
Substitute="^(.*\.)([\d]{1,6}).*$":"\1\2"

[MeasureName1]
Measure=WebParser
Group=LatLongChildren
Disabled=1
URL=[MeasureLocations]
StringIndex=3
Substitute="":"No results"