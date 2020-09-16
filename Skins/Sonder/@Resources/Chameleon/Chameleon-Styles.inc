;Custom Chameleon MeterStyles

[ChameleonDesktop]
Measure=Plugin
Plugin=Chameleon
Type=Desktop
;CropX=#CURRENTCONFIGX#
;CropY=#CURRENTCONFIGY#
;CropW=360
;CropH=100
ContextAwareColors=1
Format=Hex

;Foreground
[ChamFG1]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Foreground1

[ChamFG2]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Foreground2

;Background
[ChamBG1]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Background1

[ChamBG2]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Background2

;Light
[ChamL1]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Light1

[ChamL2]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Light2

[ChamL3]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Light3

[ChamL4]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Light4

;Dark
[ChamD1]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Dark1

[ChamD2]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Dark2

[ChamD3]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Dark3

[ChamD4]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Dark4

;Average
[ChamAverage]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Average


;;Examples:
;[TitleText]
;FontColor=[ChamFG2]AE
;FontEffectColor=[ChamBG1]89
;DynamicVariables=1

;[ArtistText]
;FontColor=[ChamFG2]AE
;FontEffectColor=[ChamBG1]89
;DynamicVariables=1

;[BarStyle]
;BarColor=[ChamFG2]
;SolidColor=[ChamBG2]AE
;DynamicVariables=1

;[PlayPauseButtonstyle]
;ImageTint=[ChamFG2]
;DynamicVariables=1

;[Time1Style]
;FontColor=[ChamFG2]89
;FontEffectColor=[ChamBG1]
;DynamicVariables=1

;[Time2Style]
;FontColor=[ChamFG2]89
;FontEffectColor=[ChamBG1]
;DynamicVariables=1

;[PrevNextBStyle]
;ImageTint=[ChamFG2]
;DynamicVariables=1

