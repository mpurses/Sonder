[Variables]
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:80.0) Gecko/20100101 Firefox/80.0

[@WorldMapLocation1Parent]
Measure=WebParser
URL=http://worldtimeapi.org/api/timezone/#WorldMapLocation1#
UpdateRate=88600
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
;RegExp=(?siU)^(.*)$
RegExp=(?siU).*utc_offset":"(.*)"
StringIndex=1
RegExpSubstitute=1
Substitute=":":""
FinishAction=[!WriteKeyValue Variables WorldMapTimeZone1 [@WorldMapLocation1Parent] #@#Variables.inc]

[@WorldMapLocation2Parent]
Measure=WebParser
URL=http://worldtimeapi.org/api/timezone/#WorldMapLocation2#
UpdateRate=-1
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
;RegExp=(?siU)^(.*)$
RegExp=(?siU).*utc_offset":"(.*)"
StringIndex=1
RegExpSubstitute=1
Substitute=":":""
FinishAction=[!WriteKeyValue Variables WorldMapTimeZone2 [@WorldMapLocation2Parent] #@#Variables.inc]

[@WorldMapLocation3Parent]
Measure=WebParser
URL=http://worldtimeapi.org/api/timezone/#WorldMapLocation3#
UpdateRate=-1
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
;RegExp=(?siU)^(.*)$
RegExp=(?siU).*utc_offset":"(.*)"
StringIndex=1
RegExpSubstitute=1
Substitute=":":""
FinishAction=[!WriteKeyValue Variables WorldMapTimeZone3 [@WorldMapLocation3Parent] #@#Variables.inc]

[@WorldMapLocation4Parent]
Measure=WebParser
URL=http://worldtimeapi.org/api/timezone/#WorldMapLocation4#
UpdateRate=-1
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
;RegExp=(?siU)^(.*)$
RegExp=(?siU).*utc_offset":"(.*)"
StringIndex=1
RegExpSubstitute=1
Substitute=":":""
FinishAction=[!WriteKeyValue Variables WorldMapTimeZone4 [@WorldMapLocation4Parent] #@#Variables.inc]

[@WorldMapLocation5Parent]
Measure=WebParser
URL=http://worldtimeapi.org/api/timezone/#WorldMapLocation5#
UpdateRate=-1
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
;RegExp=(?siU)^(.*)$
RegExp=(?siU).*utc_offset":"(.*)"
StringIndex=1
RegExpSubstitute=1
Substitute=":":""
FinishAction=[!WriteKeyValue Variables WorldMapTimeZone5 [@WorldMapLocation5Parent] #@#Variables.inc]

[@WorldMapLocation6Parent]
Measure=WebParser
URL=http://worldtimeapi.org/api/timezone/#WorldMapLocation6#
UpdateRate=-1
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
;RegExp=(?siU)^(.*)$
RegExp=(?siU).*utc_offset":"(.*)"
StringIndex=1
RegExpSubstitute=1
Substitute=":":""
FinishAction=[!WriteKeyValue Variables WorldMapTimeZone6 [@WorldMapLocation6Parent] #@#Variables.inc]

[@WorldMapLocation7Parent]
Measure=WebParser
URL=http://worldtimeapi.org/api/timezone/#WorldMapLocation7#
UpdateRate=-1
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
;RegExp=(?siU)^(.*)$
RegExp=(?siU).*utc_offset":"(.*)"
StringIndex=1
RegExpSubstitute=1
Substitute=":":""
FinishAction=[!WriteKeyValue Variables WorldMapTimeZone7 [@WorldMapLocation7Parent] #@#Variables.inc]

[@WorldMapLocation8Parent]
Measure=WebParser
URL=http://worldtimeapi.org/api/timezone/#WorldMapLocation8#
UpdateRate=-1
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
;RegExp=(?siU)^(.*)$
RegExp=(?siU).*utc_offset":"(.*)"
StringIndex=1
RegExpSubstitute=1
Substitute=":":""
FinishAction=[!WriteKeyValue Variables WorldMapTimeZone8 [@WorldMapLocation8Parent] #@#Variables.inc]

[@WorldMapLocation9Parent]
Measure=WebParser
URL=http://worldtimeapi.org/api/timezone/#WorldMapLocation9#
UpdateRate=-1
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
;RegExp=(?siU)^(.*)$
RegExp=(?siU).*utc_offset":"(.*)"
StringIndex=1
RegExpSubstitute=1
Substitute=":":""
FinishAction=[!WriteKeyValue Variables WorldMapTimeZone9 [@WorldMapLocation9Parent] #@#Variables.inc]

[@WorldMapLocation10Parent]
Measure=WebParser
URL=http://worldtimeapi.org/api/timezone/#WorldMapLocation10#
UpdateRate=-1
Flags=Resync | NoCookies
UserAgent=#UserAgent#
LogSubstringErrors=0
;RegExp=(?siU)^(.*)$
RegExp=(?siU).*utc_offset":"(.*)"
StringIndex=1
RegExpSubstitute=1
Substitute=":":""
FinishAction=[!WriteKeyValue Variables WorldMapTimeZone10 [@WorldMapLocation10Parent] #@#Variables.inc]

