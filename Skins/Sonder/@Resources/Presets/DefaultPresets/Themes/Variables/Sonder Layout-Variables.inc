[Variables]
;************************************** All ***************************************
notifyUpdates=1
CheckForPrereleases=0
RandomNumGenerated=1
RandomNumID=437597227
LanguageOverride=Local
; Main - Used on almost every skin and settings (~600 places)
LocalFontFaceMain=ITC Avant Garde Pro Bk
; Thin - Used on Date-Handwriting and some settings (~40 places). And Time & Date (see 'TimeFont', 'DateFont').
LocalFontFaceThin=ITC Avant Garde Pro XLt
; Compact - Used on some settings (~10 places)
LocalFontFaceCompact=Segoe UI
; OTHER LOCAL FONTS:
;Allura
;Aquatico
;Arca Majora 3 Bold
;BankGothic Lt BT
;Blacksword
;Boheme Floral
;Camellion
;Comfortaa
;Cooper Black
;Fragile Script
;Futura Lt
;Glacial Indifference
;Gobold Bold
;Hiroshima
;Kashima Brush Demo
;Korean Calligraphy
;la Compagnie des Ombres
;LEmmylou Signature Normal
;Montserrat
;Montserrat Light
;Montserrat Light
;Montserrat Regular
;Montserrat SemiBold
;Moving Skate
;News Gothic Condensed
;Open Sans Light
;Papyrus
;Porter
;Quicksand
;Raleway ExtraLight
;Roboto Light
;Roboto Thin
;SF Pro Display
;Shanghai
;Sterilict
;Trebuchet MS
;Tuesday Night
;Voluta Script Pro
;Yellowtail

;***************************** All-Background Color on hover *****************************
GlobalSkinBackgroundColorTint=0,0,0
GlobalSkinBackgroundAlpha=50
GlobalSkinBackgroundAlphaInactive=1
BGStyle=1
AllAccentColors=105,155,115
SettingstoOpen=! Settings-All


;************************************ ColorPicker ************************************
CurrentColorToModify=VisualizerColor2
ColorPickerChosenColor=212,212,212


;*************************************** Time ****************************************
HourFormat=%#I
Hours=%I
TimeScale=1
TimeFont=ITC Avant Garde Pro XLt
TimeFontSize=150
TimeHMSpacing=0
TimeHMSpacingVert=0
TimeYAdj=0
TimeReflection=0
TimeGradient=0
TimeRefYAdj=0
Color1=255,255,255,200
Color3=105,155,115
TimeShadowColor=0,0,0,20
TimeShadowColorHour=0,0,0,20
TimeShadowColorMinute=0,0,0,20
ShadowBlurX=2
ShadowBlurY=3
TimeBlurAmount=0
ShowTimeSettingsIcon=1
Settingsiconpath=#@#Images\colors2.png
ScrollMouseIncrement=0.05
;Transform Variables
WHSize=390
TMm11=1
TMm12=-0.25
TMm21=0
TMm22=1
TMm31TX=0
TMm32TY=0
RotateAngle=0
WHSize_Date=390
TMm11_Date=1
TMm12_Date=-0.25
TMm21_Date=0
TMm22_Date=1
TMm31TX_Date=0
TMm32TY_Date=0
RotateAngle_Date=0
TimeTransformFormat=#Hours#%M
TransformHourPattern=^(\d{1,2})\d{2}$
TransformMinutePattern=^\d{1,2}(\d{2})$
; EXAMPLE TO ADD ':' and 'am/pm' to Time Transform skin
;TimeTransformFormat ->  #Hours#:%M%p
;TransformHourPattern  ->  ^(\d{1,2}:)\d{2}\w{2}$
;TransformMinutePattern  ->  ^\d{1,2}:(\d{2})\w{2}$


;**************************************** Date ****************************************
DateScale=1
DateFont=ITC Avant Garde Pro XLt
DateColor1=255,255,255,200
DateColor2=255,255,255,175
DateColor3=105,155,115
ShadowBlurX_Date=2
ShadowBlurY_Date=3
DateBlurAmount=0
DateShadowColor=0,0,0,20
DateFormat1=%A | %B %d %Y
DateFormatv2=%a | %b %d
DateStringCase=lower
DateAlign=Center
DateStyle=Normal
DateAlignAdjust=2
Monday=M
Tuesday=T
Wednesday=W
Thursday=T
Friday=F
Saturday=S
Sunday=S


;************************************ BigDate+Time ***********************************
24Hidden=1
12Hidden=0


;*********************************** Date-Handwriting ********************************
Date_MonthFontFace_Handwriting=Emmylou Signature Normal
Date_MonthFontSize_Handwriting=100
Date_MonthFont_YAdj2=-10


;*********************************** Basic Calendar **********************************
MonthCalendarScale=1
CalendarColorDays=255,255,255,200
CalendarColorMonth=105,155,115
Date_MonthFont_YAdj=-30
Month_YAdj_All=10
FirstDayofWeek=0
ExtraDays=0
LinkToGCal=0
ToDoText=Todo List...#CRLF#-


;********************************** Everyday Calendar ********************************
FirstLoadEC=0
CalendarLayout=1
RefreshOverride=0
CalendarBackgroundColor=0,0,0,235
HeaderText=Everyday Calendar
CalendarFontColor0=0,0,0
CalendarFontColor1=220,220,220
CurrentDayUnderlineColor=55,55,255
HabitCalendarNumbersFontFace=Montserrat Bold
HeaderTextSize=18
HabitTextSize=14
ECalendarWidth=#SCREENAREAWIDTH#
ECalendarHeight=#WORKAREAHEIGHT#
ECalendarHeightBG=#SCREENAREAHEIGHT#
DayHeight=30.51613
MonthSpacings=160
DayLocationX=-15.25806
DayLocationY=15.25806
M1Day1X=64.74194
M1Day1Y=113
M2Day1X=224.74194
M2Day1Y=113
M3Day1X=384.74194
M3Day1Y=113
M4Day1X=544.74194
M4Day1Y=113
M5Day1X=704.74194
M5Day1Y=113
M6Day1X=864.74194
M6Day1Y=113
M7Day1X=1024.74194
M7Day1Y=113
M8Day1X=1184.74194
M8Day1Y=113
M9Day1X=1344.74194
M9Day1Y=113
M10Day1X=1504.74194
M10Day1Y=113
M11Day1X=1664.74194
M11Day1Y=113
M12Day1X=1824.74194
M12Day1Y=113
CurrentDayX=720
CurrentDayY=599.23226
MonthTextSize=14
DayTextSize=(#DayHeight#*0.43)
DayTextSizeHover=(#DayHeight#*0.525)
DayActiveColor=97,147,226
DayActiveColorHover=150,200,255
StreakTodayNotCompleteColor=110,110,110
DayFontEffectColor=180,180,180,100
LeapYearAdj=1
CurrentDayMeter=223
CurrentStreak=0
TodayComplete=0
CalendarSelectDayOption=1
ReminderOn=0
ReminderTime=Off
ActiveDayImage=#@#Images\Calendar-Active.png
ActiveShape=Image
;***Month View***
MeterDay1X=200
RowHighlightColor=53,53,53,255
HabitDayCircleColor1=255,255,255,20
HabitDayCircleColorHover1=255,255,255,35
HabitDayCircleColor0=#DayActiveColor#
HabitDayCircleColorHover0=#DayActiveColorHover#
Habit1=Workout
Habit2=Read a book
Habit3=Drink Water
Habit4=Eat Healthy
Habit5=Learn Language
Habit6=Habit6
Habit7=Habit7
Habit8=Habit8
Habit9=Habit9
Habit10=Habit10
Habit2Disabled=0
Habit3Disabled=0
Habit4Disabled=0
Habit5Disabled=0
Habit6Disabled=1
Habit7Disabled=1
Habit8Disabled=1
Habit9Disabled=1
Habit10Disabled=1


;**************************************** System *************************************
HideSystem=1
ScaleValueSystem=1
WidthValueSystem=200
Systembarheight=1
SystemcolorBar=105,155,115
SystemcolorText=255,255,255,200
ShowSystemGPU=1
ShowSystemTemp=0
ShowSystemSwap=0


;**************************************** Network ************************************
ScaleValueNetwork=1
SidebarWidthNetwork=200
NetworkDownColor=255,255,255,160
NetworkUpColor=105,155,115
NetworkMainTextColor=255,255,255,200
BitsORBytes=8


;************************************ Recycle Bin ************************************
ScaleValueRecycleBin=1
RecycleBinColor=255,255,255
RecycleBinTextColor=255,255,255,200


;************************************** Weather **************************************
Language=en-US
LanginUse=English °F
Ms=Time
Fm=%p
MOONStatus=Hidden
DisabledTimeMoon=0
HiddenMoon=0
HiddenMoonDay=0
Daytime=1
DisplayPrecip=0
SunsetTime=18:38
SunriseTime=06:58
SizeValue=0.65
FontColor=255,255,255
FontColorSettings=255,255,255
FontColor2=255,255,255,200
FontColor3=180,180,180,255
FontEffectColor=0,0,0,200
IconImageTint=255,255,255
RainColor=156,209,255
TempXLocation=270
TempIconXLocation=-170
ShowHourlyInfoOnHover=0
;***New Weather API Variables***
Degrees=°
UpdateRate=660
AutoDetectLocation=1
AutoLatLong=1
AutoDetectCity=Denver, Colorado  
;Latitude & Longitude will automatically change from AutoDetectCity value if AutoLatLong equals 1
Latitude=39.739236
Longitude=-104.984862
;e - "Imperial", using Fahrenheit for temperatures.
;m - "Metric", using Celsius for temperatures.
;h - "Hybrid", used primarily in the UK. Celsius for temperatures, but miles for distances.
Units=e
DateFormat=%h %#d
DateFormat_MonthDay=%2 %3
;FOR HOURLY TIME DATA: 
; Change to %#H if 24 hour format (changed via main hour format settings or unit settings)
TimeFormatHourly=%#I%p
WeatherIconPath=#@#Weather\Icons\
ShowWeatherAlerts=0
ShowSunMoonPath=0
SunColor1=255,215,0
SunColor2=255,140,0
MoonColor1=115,115,115
MoonColor2=205,205,205

;************************************* RADAR DATA *************************************
;0	Black and White dBZ values
;1	Original
;2	Universal Blue
;3	TITAN
;4	The Weather Channel
;5	Meteored
;6	NEXRAD Level III
;7	Rainbow @ SELEX-IS
;8	Dark Sky
ShowRadar=1
RadarColor=1
RadarAlpha=110


;********************* Space - ISS, Rockets, Radar, World Clock *************************
ISSMapScale=0.3
ISSImage=#@#Images\ISS_148.png
MapSizeAdj=_1000
ShowAntarctica=0
MapFlatOrTerrain=0
MapCountryBorders=1
ISSAlpha=180
RocketInfoBGAlpha=150
ISSColor=255,255,255
ISSScale=1
MapWidth=3000
MapHeight=1500
LandColor=255,255,255
MapAlpha=80
LandOutlineColor=0,0,0
MapOutlineAlpha=50
YourLat=#Latitude#
YourLon=#Longitude#
YCoord=0
XCoord=0
ShowRocket=0
ShowISS=0
;**** World Clock ****
WorldMapTimeZoneUpdated= Unknown
WorldMapTimeTextColor=240,240,240
WorldMapTimeSecondaryTextColor=255,255,255,150
WorldClockTextScale=1
WorldMapCitySearch=Tokyo, Japan
WorldMapLatSearch=
WorldMapLonSearch=
WorldMapShow1=1
WorldMapShow2=1
WorldMapShow3=1
WorldMapShow4=1
WorldMapShow5=1
WorldMapShow6=1
WorldMapShow7=1
WorldMapShow8=1
WorldMapShow9=1
WorldMapShow10=1
WorldMapShow11=1
WorldMapShow12=1
WorldMapShow13=1
WorldMapShow14=1
WorldMapShow15=1
WorldMapLocation1=
WorldMapLocation2=
WorldMapLocation3=
WorldMapLocation4=
WorldMapLocation5=
WorldMapLocation6=
WorldMapLocation7=
WorldMapLocation8=
WorldMapLocation9=
WorldMapLocation10=
WorldMapLocation11=
WorldMapLocation12=
WorldMapLocation13=
WorldMapLocation14=
WorldMapLocation15=
;You can shift the location names left/right using these: ex. -65
WorldMapLocation1Adj=0
WorldMapLocation2Adj=0
WorldMapLocation3Adj=0
WorldMapLocation4Adj=0
WorldMapLocation5Adj=0
WorldMapLocation6Adj=0
WorldMapLocation7Adj=0
WorldMapLocation8Adj=0
WorldMapLocation9Adj=0
WorldMapLocation10Adj=0
WorldMapLocation11Adj=0
WorldMapLocation12Adj=0
WorldMapLocation13Adj=0
WorldMapLocation14Adj=0
WorldMapLocation15Adj=0
; Time Zones are automatically retireved via settings window and also automatically on Sundays in Daylight Savings time Months.
; Offsets are in seconds, so Time Zone -5 is (-5*3600) --> -18000 
WorldMapTimeZone1=0
WorldMapTimeZone2=0
WorldMapTimeZone3=0
WorldMapTimeZone4=0
WorldMapTimeZone5=0
WorldMapTimeZone6=0
WorldMapTimeZone7=0
WorldMapTimeZone8=0
WorldMapTimeZone9=0
WorldMapTimeZone10=0
WorldMapTimeZone11=0
WorldMapTimeZone12=0
WorldMapTimeZone13=0
WorldMapTimeZone14=0
WorldMapTimeZone15=0
WorldMapLat1=0
WorldMapLon1=0
WorldMapLat2=0
WorldMapLon2=0
WorldMapLat3=0
WorldMapLon3=0
WorldMapLat4=0
WorldMapLon4=0
WorldMapLat5=0
WorldMapLon5=0
WorldMapLat6=0
WorldMapLon6=0
WorldMapLat7=0
WorldMapLon7=0
WorldMapLat8=0
WorldMapLon8=0
WorldMapLat9=0
WorldMapLon9=0
WorldMapLat10=0
WorldMapLon10=0
WorldMapLat11=0
WorldMapLon11=0
WorldMapLat12=0
WorldMapLon12=0
WorldMapLat13=0
WorldMapLon13=0
WorldMapLat14=0
WorldMapLon14=0
WorldMapLat15=0
WorldMapLon15=0
;Day/Night Shadow
WorldDaylightShadow=0
WorldDaylightShadowTint=40,45,45
WorldDaylightShadowAlpha=155
WorldCityLightsAlpha=255
WorldCityLightsTint=255,240,210
PlaywithTime=1


;**************************************** Utilities ***********************************
UtilitiesScale=1
UtilitiesScale2=1
;Volume and Brightness
VolumeScrollIncrement=5
VolumeBarWidth=44
VolumeBarHeight=132
VolumeBGMargin=8
VolumeIconSize=36
VolumeIconColor=255,255,255,170
VolumeIconColor2=255,255,255,170
VolumeIconBGColor=255,255,255,1
VolumeIconBGColor2=0,0,0,60
VolumeBarBGColor=255,255,255,40
VolumeBarColor=255,255,255,100
VolumeTextColor=255,255,255,130
;Wifi
WifiIconColorOff=255,255,255,170
WifiIconColorOn=105,155,115,200
WifiIconBGColorOff=255,255,255,1
WifiIconBGColorOn=105,155,115,1
WifiOpenDelay=1250
TurnOnTabs=1
TurnOffTabs=1
Turn_On_Wifi=["%windir%\explorer.exe" "ms-availablenetworks:"][!Delay #WifiOpenDelay#][#@#\Scripts\Send#TurnOnTabs#TabKey.vbs][!Delay 24][#@#\Scripts\SendSpaceKey.vbs][!Delay 24][#@#\Scripts\SendEscKey.vbs]
Turn_Off_Wifi=["%windir%\explorer.exe" "ms-availablenetworks:"][!Delay #WifiOpenDelay#][#@#\Scripts\Send#TurnOffTabs#TabKey.vbs][!Delay 24][#@#\Scripts\SendSpaceKey.vbs][!Delay 24][#@#\Scripts\SendEscKey.vbs]
;If you want to open the Wifi Settings window use this for Turn_On_Wifi/Turn_Off_Wifi...
;["%windir%\explorer.exe" "ms-settings:network-wifi"][!Delay #WifiOpenDelay#][#@#\Scripts\SendSpaceKey.vbs][!Delay 24][#@#\Scripts\SendCloseKey.vbs]
;Bluetooth
BluetoothIconColorOff=255,255,255,170
BluetoothIconColorOn=105,155,115,200
BluetoothIconBGColorOff=255,255,255,1
BluetoothIconBGColorOn=105,155,115,1
BluetoothIconBGColorOn2=105,155,115,255
BluetoothOpenSettings=
ConnectActionCenter=["%windir%\explorer.exe" "ms-settings-connectabledevices:devicediscovery"]
BluetoothDeviceWindow=["%windir%\explorer.exe" "ms-settings:bluetooth"]
PowerIconColor=255,255,255,170


;************************************** Visualizer ************************************
;All
Dot_Max_Size=5
Ellipse_W_Scale=1
Ellipse_H_Scale=1
VisualizerColor1=105,155,115
VisualizerColor2=212,212,212
VisualizerKeepOnScreen=1
VisualizerClickThrough=0
GradientOrientation=90
Preview=0
Visualizer_Type=stargazer
;LIGHT
VisualizerBarWidth=36
VisualizerBarHeight=24
Degree=0
Distance=20
DepthAmount_X=0
DepthAmount_Y=0
Anchor=Top
;WAVE
Wave_Type=tranverse
Peak=10
Sub_Wave=8
Wave_Density=10
HeightWave=14
Amplitude=90
Dot_Base_Size=1
Radius=172
Twist=-14
;CENTAUR
Polygon_Type=star
WidthPoly=15
HeightPoly=15
Side=7
Density=3
;insideout or outsidein
RadialGradOrientation=outsidein
;RadialGradOrientation same as "Polygon"
;GradientOrientation same as "Bar"
;STARGAZER
Stargazer_type=Firefly
Stargazer_Width=#WORKAREAWIDTH#
Stargazer_Height=#WORKAREAHEIGHT#
Stargazer_Density=128
Stargazer_Direction=1
Stargazer_Speed=3
CenterScreenX=960
CenterScreenY=516
MoonSizeForYourScreen=340
LunarLimitForYourScreen=1310
Wanderer_CenterX=#CenterScreenX#
Wanderer_CenterY=#CenterScreenY#
Wanderer_Limit1=60
Wanderer_Limit2=960
Wanderer_RotateLimit1=0
Wanderer_RotateLimit2=360
Wanderer_AsterismReader=1
Ash_FloatAmount=5
Stargazer_BounceFactor=0
AsterismReaderColor=255,255,255,77
;Line
LineBands=60
LineThickness=1
LineWidth=8
LineHeight=300
LineReactionAverage=0
;AUDIO SETTINGS
FFTSize=2048
;Dont Change this one
FFTOverlap=((#FFTSize#/2)+(440*((#FFTSize#/4096)*2.5)))
FFTAttack=150
FFTDecay=200
FreqMin=50
FreqMax=22000
Sensitivity=40
AudioDeviceID=
CPUsaverUpdateDivider=30
SleepHelperOn=0
AudioPlaying=0
ID=2


;************************************ THEMES *****************************************
ThemePresetsCopied21.11.0=1
ThemeChanger=1
SunriseTheme=Sonder Layout
SunsetTheme=Sonder - Lunar Layout
CurrentTheme=Sonder Layout
