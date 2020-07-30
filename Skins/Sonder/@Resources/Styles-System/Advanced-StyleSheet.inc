; ModernGadget StyleSheet
; WARNING: DO NOT CHANGE ANY OF THESE VALUES. Customizable options are kept in GlobalSettings.inc. If
; you change anything in this file, it WILL break things. Proceed at your own risk!

[Variables]
@include=#@#Variables.inc
ColorImage=#GlobalSkinBackgroundColor#
;Font=Segou UI
;Font=#LocalFontName#
;SkinMouseOver=0
SkinBackgroundAlpha=#GlobalSkinBackgroundAlpha#
lineGraphAa=1
lineGraphBgType=1
tempUnits=C
cornerRoundness=0
notifyUpdates=1
updateCheckRate=90
autoBackups=1
checkForPrereleases=1

updateNotificationSound="C:\Windows\media\notify.wav"
useUpdateNotificationSound=1

showBgBorder=0
rowSpacing=5
rowSpacingDisk=1

; Sidebars
setupSb=2
sbSetupMode=Placement
sb1Enabled=0
sb1MaskType=acrylic
sb1MaskColor=0,0,0
sb1MaskAlpha=150
sb1Columns=1
sb1Alignment=left
sb1Monitor=1
sb2Enabled=0
sb2MaskType=acrylic
sb2MaskColor=0,0,0
sb2MaskAlpha=150
sb2Columns=1
sb2Alignment=right
sb2Monitor=2
colorSbControlCorner=0,0,3

; POSITIONING
bgOffset=10
gadgetBgWidth=(#WidthValueSystem#-20)
bgWidth=#gadgetBgWidth#
bgWidthAbs=#bgWidth#
;(#bgWidth# + (#bgOffset# * 2))

contentMarginAbs=3
contentMargin=(#contentMarginAbs# + #bgOffset# - 1)
contentMarginRight=(#bgWidth# - #contentMarginAbs# + #bgOffset# - 2)
contentMarginCenter=((#bgWidth# / 2) + #bgOffset#)
contentWidth=(#bgWidth# - (#contentMarginAbs# * 2))
dColumnX=(#contentMarginCenter# + 2)

scale=#ScaleValueSystem#
transformationMatrix=#scale#;0;0;#scale#;#scale#;#scale#
tScale=#ScaleValueSystem#

barTextOffset=1
barHeight=#Systembarheight#
graphHeight=42
graphWidth=#contentWidth#

labelOffset=53

; FONT SETTINGS
fontFace=#LocalFontFace#
fontFaceSettings=#LocalFontFace8#
fontFaceCn=#LocalFontFace#
fontSize=9
fontWeight=500
inputBoxFontSize=8

; COLORS
colorBorder=255,255,255,25
colorBg=0,0,0,1
colorBgBorder=#colorBorder#
colorSubBg=0,0,0,1

colorGraphBg=#colorSubBg#
colorGraphBorder=#colorBorder#
colorGraphGrid=#colorGraphBorder#

colorMain=#SystemcolorText#
;Incase someone wants to change this color....
colorDim=#SystemcolorText#,200
colorAccent=137,190,250
colorDisabled=100,100,100

colorBarBg=#colorBorder#

colorInputBg=55,55,55
colorInputBorder=0,255,0
;#colorBorder#
colorInputText=#colorDim#

colorIntel=0,125,198
colorAMD=0,149,107
colorSnapdragon=0,80,198
colorNvidia=119,185,0

colorError=200,53,53
colorCloseButton=157,33,33
colorHelpButton=27,57,131

histogramAlpha=50
hoverAlpha=200

; DEFAULT COLOR PALLETE
cp1=#SystemcolorBar#
cp2=#SystemcolorBar#
cp3=#SystemcolorBar#
cp4=#SystemcolorBar#
cp5=#SystemcolorBar#
cp6=#SystemcolorBar#
cp7=#SystemcolorBar#
cp8=#SystemcolorBar#
cp9=#SystemcolorBar#
cp10=#SystemcolorBar#
cp11=#SystemcolorBar#
cp12=#SystemcolorBar#
cp13=#SystemcolorBar#
cp14=#SystemcolorBar#
cp15=#SystemcolorBar#
cp16=#SystemcolorBar#
cp17=#SystemcolorBar#
cp18=#SystemcolorBar#
cp19=#SystemcolorBar#
cp20=#SystemcolorBar#
cp21=#SystemcolorBar#
cp22=#SystemcolorBar#
cp23=#SystemcolorBar#
cp24=#SystemcolorBar#

; OTHER
deg=[\176]
settingsAssets={ check_icon = { 'CheckOn', 'CheckOff' }, radio_icon = { 'RadioOn', 'RadioOff' }, toggle_icon = {'ToggleOn','ToggleOff'} }

; PATHS
imgPath=#@#Assets\Images\
soundPath=#@#Assets\Sounds\
fontPath=#@#Fonts\
scriptPath=#@#Scripts\

extPath=#SETTINGSPATH#Sonder\
dynamicVarsPath=#@#Styles-System\Advanced-DynamicVars.inc

;colorPickerConfig=Sonder\ColorPickerPlus
;rainFilePath=#@#Addons\RainFile\RainFile.exe

;globalSettingsPath=#@#Styles-System\Advanced-Settings\GlobalSettings.inc

styleSheetPath=#@#Styles-System\Advanced-StyleSheet.inc

SystemMeterConfig=Sonder\System
cpuMeterPath=#ROOTCONFIGPATH#System\System-Advanced.ini
cpuSettingsPath=#@#Styles-System\Advanced-Settings\CpuSettings.inc
disksMeterPath=#ROOTCONFIGPATH#System\System-Advanced.ini
;disksMeterConfig=Sonder\System
disksSettingsPath=#@#Styles-System\Advanced-Settings\DisksSettings.inc
gpuMeterPath=#ROOTCONFIGPATH#System\System-Advanced.ini
;gpuMeterConfig=Sonder\System
gpuSettingsPath=#@#Styles-System\Advanced-Settings\GpuSettings.inc

; setupSkinConfig=Sonder\Settings\Setup
; sidebarSetupConfig=Sonder\\Settings\\Sidebars\\Setup
; sb1ControlConfig=Sonder\\Settings\\Sidebars\\Control\\1
; sb2ControlConfig=Sonder\\Settings\\Sidebars\\Control\\2

; ------------------------------
; BACKGROUND
[StyleSidebarBackground]
ImageName=#@#Images\SkinBackground.#ColorImage#.png
ScaleMargins=12,12,12,12
ImageAlpha=#GlobalSkinBackgroundAlphaInactive#
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha #SkinBackgroundAlpha#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha #GlobalSkinBackgroundAlphaInactive#][!UpdateMeter #CURRENTSECTION#][!Redraw]
X=0
Y=0
W=((#bgWidth# + (#bgOffset# * 2)) * #scale#)
H=([MeterBackgroundHeight:Y] * #scale#)
imagetint=#GlobalSkinBackgroundColorTint#
Group=Background
DynamicVariables=1

[StyleBackground]
Shape=Rectangle 0,0,(#bgWidth# * #scale#),([[#CURRENTSECTION]:H] - ((0 * 2) * #scale#)),(#cornerRoundness# * #scale#) | StrokeWidth 0 | Fill Color 26,27,28,255
;Shape2=Rectangle ((#bgOffset# + #showBgBorder#) * #scale#),((#bgOffset# + #showBgBorder#) * #scale#),((#bgWidth# - (#showBgBorder# * 2)) * #scale#),([[#CURRENTSECTION]:H] - (((#bgOffset# * 2) + (#showBgBorder# * 2)) * #scale#)),(#cornerRoundness# * #scale#) | StrokeWidth 0 | Fill Color 26,27,28,255
BgGradient=90 | #colorBg# ; 0 | #colorSubBg# ; 1
X=0
Y=0
W=#bgWidth#
H=([MeterBackgroundHeight:Y] * #scale#)
DynamicVariables=1
Group=Background

[StyleBackgroundHeight]
SolidColor=255,255,255,0
X=0
Y=(#contentMarginAbs# + #bgOffset# + 1)R
W=(#bgWidthAbs# * #scale#)
H=1
Group=Background
TransformationMatrix=#transformationMatrix#

[StyleSubBackground]
Shape=Rectangle 0,0,[&[#CURRENTSECTION]:W],[&[#CURRENTSECTION]:H],(#cornerRoundness# * #scale#) | StrokeWidth 0 | Extend BorderColor
Shape2=Rectangle 2,2,([&[#CURRENTSECTION]:W] - 4),([&[#CURRENTSECTION]:H] - 4),(#cornerRoundness# * #scale#) | StrokeWidth 0 | Extend InsetColor
Shape3=Rectangle 0,0,[&[#CURRENTSECTION]:W],[&[#CURRENTSECTION]:H],(#cornerRoundness# * #scale#) | StrokeWidth 0 | Extend HoverColor
DynamicVariables=1
TransformationMatrix=#transformationMatrix#

; ------------------------------
; STRINGS (GENERAL)

[StyleString]
FontColor=#colorMain#
StringEffect=SHADOW
FontEffectColor=0,0,0,100
FontSize=#fontSize#
FontFace=#fontFace#
FontWeight=#fontWeight#
X=#contentMargin#
Y=#rowSpacing#R
Antialias=1
TransformationMatrix=#transformationMatrix#

[StyleStringDisk]
FontColor=#colorMain#
StringEffect=SHADOW
FontEffectColor=0,0,0,100
FontSize=#fontSize#
FontFace=#fontFace#
FontWeight=#fontWeight#
X=#contentMargin#
Y=#rowSpacingDisk#R
Antialias=1
TransformationMatrix=#transformationMatrix#

[StyleStringSettings]
FontColor=#colorMain#
StringEffect=SHADOW
FontEffectColor=0,0,0,100
FontSize=10
FontFace=#fontFaceSettings#
;FontWeight=#fontWeight#
X=#contentMargin#
Y=(#rowSpacing#+15)R
Antialias=1
TransformationMatrix=#transformationMatrix#

[StyleStringSettingsGPU]
FontColor=#colorMain#
StringEffect=SHADOW
FontEffectColor=0,0,0,100
FontSize=10
FontFace=#fontFaceSettings#
;FontWeight=#fontWeight#
X=250
Y=(#rowSpacing#+15)R
Antialias=1
TransformationMatrix=#transformationMatrix#

[StyleStringSettingsHWinfo]
FontColor=#colorMain#
StringEffect=SHADOW
FontEffectColor=0,0,0,100
FontSize=10
FontFace=#fontFaceSettings#
;FontWeight=#fontWeight#
X=500
Y=(#rowSpacing#+15)R
Antialias=1
TransformationMatrix=#transformationMatrix#

[StyleStringCenterAlign]
StringAlign=Center
X=#contentMarginCenter#

[StyleStringRightAlign]
StringAlign=Right
X=#contentMarginRight#
Y=r

[StyleStringInfo]
StringAlign=Center
X=#contentMarginCenter#
Y=r
FontColor=#colorDim#

[StyleStringParagraph]
X=(#contentMargin# + 2)
Y=5R
W=(#contentWidth# - 6)
ClipString=2

[StyleStringGadgetLabel]
StringAlign=Center
FontSize=10
FontWeight=700
FontFace=#LocalFontFace#
FontColor=#colorMain#
;X=#contentMargin#
X=#contentMarginCenter#
Y=(#contentMargin# - 2)

[StyleStringArrowIconLabel]
X=3R
Y=-4r

[StyleStringTextButton]
FontColor=#colorAccent#
FontFace=#fontFaceCn#
FontSize=9
FontWeight=600
StringCase=Upper

; ------------------------------
; BUTTON HOVER LOGIC

[StyleMouseRegion]
SolidColor=255,255,255,0
DynamicVariables=1
X=([#CURRENTSECTION#_:X] * #scale# + #scale#)
Y=([#CURRENTSECTION#_:Y] * #scale# + #scale#)
W=([#CURRENTSECTION#_:W] * #scale#)
H=([#CURRENTSECTION#_:H] * #scale#)

[StyleMouseRegionImgButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION#_ ImageAlpha "#hoverAlpha#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION#_ ImageAlpha ""][!UpdateMeter #CURRENTSECTION#_][!Redraw]

[StyleMouseRegionShapeButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION#_ Fill "[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]_','Fill')],#hoverAlpha#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION#_ Fill "[&MeasureSettingsScript:Gsub('[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]_','Fill')]', ',#hoverAlpha#')]"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
DynamicVariables=1

; Preserves the variable reference, but requires an additional option on the meter
[StyleMouseRegionShapeButtonHoverPreserve]
MouseOverAction=[!SetOption #CURRENTSECTION#_ Fill "Fill Color [#*[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]_','FillRef')]*],#*hoverAlpha*#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION#_ Fill "Fill Color [#*[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]_','FillRef')]*]"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
DynamicVariables=1

[StyleMouseRegionShapeRefreshButton]
MouseOverAction=[!SetOption #CURRENTSECTION#_ Shape3 "Combine Shape1 | XOR Shape2 | Scale 0.02,0.02,0,0 | Offset 0,2 | Rotate 15"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION#_ Shape3 "Combine Shape1 | XOR Shape2 | Scale 0.02,0.02,0,0 | Offset 0,2 | Rotate 0"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
LeftMouseDownAction=[!SetOption #CURRENTSECTION#_ Fill "Fill Color #colorAccent#,#hoverAlpha#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]

[StyleMouseRegionStringButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION#_ FontColor "[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]_','FontColor')],#hoverAlpha#"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION#_ FontColor "[&MeasureSettingsScript:Gsub('[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]_','FontColor')]', ',#hoverAlpha#')]"][!UpdateMeter #CURRENTSECTION#_][!Redraw]
DynamicVariables=1

[StyleImgButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha "#hoverAlpha#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha ""][!UpdateMeter #CURRENTSECTION#][!Redraw]

[StyleStringButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor "[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]','FontColor')],#hoverAlpha#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor "[&MeasureSettingsScript:Gsub('[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]','FontColor')]', ',#hoverAlpha#')]"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1

[StyleShapeButtonHover]
MouseOverAction=[!SetOption #CURRENTSECTION# Fill "[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]','Fill')],#hoverAlpha#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Fill "[&MeasureSettingsScript:Gsub('[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]','Fill')]', ',#hoverAlpha#')]"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1

; Preserves the variable reference, but requires an additional option on the meter
[StyleShapeButtonHoverPreserve]
MouseOverAction=[!SetOption #CURRENTSECTION# Fill "Fill Color [#*[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]','FillRef')]*],#*hoverAlpha*#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Fill "Fill Color [#*[&MeasureSettingsScript:GetKey('[#CURRENTSECTION]','FillRef')]*]"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1

[StyleMouseRegionCloseButton]
LeftMouseUpAction=[!DeactivateConfig]
ToolTipText=Close

; ------------------------------
; GADGET ICONS / ELEMENTS

[StyleConfigButtonNew]
X=(#contentMarginRight# - [#CURRENTSECTION#:W])
Y=(#contentMargin# + 2)
Shape = Path Path1 | StrokeWidth 0| Extend Fill
Shape2 = Path Path2 | StrokeWidth 0
Shape3 = Combine Shape1 | XOR Shape2 | Scale 0.018,0.018,0,0
Path1 = 507.73, 109.1 | CurveTo 487.61, 103.59, 505.49, 100.07, 494.19, 97.01 | LineTo 413.25, 177.95 | LineTo 345.37, 166.64 | LineTo 334.06, 98.76 | LineTo 408.42, 24.4 | CurveTo 402.76, 4.24, 415.04, 17.78, 411.85, 6.5 | CurveTo 266.18, 42.17, 355.38, -7.5, 303.21, 5.15 | CurveTo 232.13, 189.37, 226.54, 81.81, 215.63, 139.27 | LineTo 18.74, 402.76 | CurveTo 18.74, 493.26, -6.25, 427.75, -6.25, 468.27 | CurveTo 109.24, 493.26, 43.73, 518.25, 84.25, 518.25 | LineTo 322.45, 280.05 | CurveTo 469.82, 245.83, 372.57, 296.76, 429.92, 285.73 | CurveTo 507.73, 109.1, 506.89, 208.76, 519.52, 156.51 | ClosePath 1
Path2 = 64, 472 | CurveTo 40, 448, 50.75, 472, 40, 461.25 | CurveTo 64, 424, 40, 434.74, 50.75, 424 | CurveTo 88, 448, 77.25, 424, 88, 434.74 | CurveTo 64, 472, 88, 461.25, 77.25, 472 | ClosePath 1
Fill=Fill Color #colorMain#
DynamicVariables=1
TransformationMatrix=#transformationMatrix#
Group=ConfigButton
Hidden=1

[StyleRefreshButton]
X=(#contentMarginRight# - 11)
Y=r
Shape = Path Path1 | StrokeWidth 0 | Extend Fill
Shape2 = Path Path2 | StrokeWidth 0
Shape3 = Combine Shape1 | XOR Shape2 | Scale 0.02,0.02,0,0 | Offset 0,2
Path1 = 440.65, 12.57 | LineTo 444.65, 95.34 | ArcTo 255.83, 8, 247.16, 247.16, 0, 1, 0 | CurveTo 12.29, 209.82, 134.73, 8, 33.91, 94.92 | ArcTo 24.09, 224, 12, 12, 0, 1, 0 | LineTo 73.14, 224 | ArcTo 84.81, 214.74, 12, 12, 0, 1, 0 | ArcTo 401.81, 157.8, 175.91, 175.91, 0, 0, 0 | LineTo 300.35, 152.94 | ArcTo 287.78, 164.94, 12, 12, 0, 1, 0 | LineTo 287.78, 212.35 | ArcTo 299.78, 224.35, 12, 12, 0, 1, 0 | LineTo 500, 224.35 | ArcTo 512, 212.35, 12, 12, 0, 1, 0 | LineTo 512, 12 | ArcTo 500, 0, 12, 12, 0, 1, 0 | LineTo 452.63, 0 | ArcTo 440.65, 12.57, 12, 12, 0, 1, 0 | ClosePath 1
Path2 = 255.83, 432 | ArcTo 109.83, 354.2, 175.61, 175.61, 0, 0, 0 | LineTo 211.63, 359.07 | ArcTo 224.2, 347.07, 12, 12, 0, 1, 0 | LineTo 224.2, 299.67 | ArcTo 212.2, 287.67, 12, 12, 0, 1, 0 | LineTo 12, 287.67 | ArcTo 0, 299.67, 12, 12, 0, 1, 0 | LineTo 0, 500 | ArcTo 12, 512, 12, 12, 0, 1, 0 | LineTo 59.35, 512 | ArcTo 71.35, 499.4, 12, 12, 0, 1, 0 | LineTo 67.2, 416.83 | ArcTo 255.83, 504, 247.17, 247.17, 0, 1, 0 | CurveTo 499.38, 302.18, 376.94, 504, 477.76, 417.08 | ArcTo 487.58, 288, 12, 12, 0, 1, 0 | LineTo 438.53, 288 | ArcTo 426.86, 297.26, 12, 12, 0, 1, 0 | ArcTo 255.83, 432, 175.86, 175.86, 0, 0, 0 | ClosePath 1
Fill=Fill Color #colorAccent#
TransformationMatrix=#transformationMatrix#

[StyleArrowIcon]
X=#contentMargin#
Y=5R
Shape = Path Path1 | StrokeWidth 0 | Scale 0.027,0.027,1,-157 | Offset 0,0.25 | Extend Extend
Extend= Rotate 0 | Fill Color #colorAccent#
Path1 = 177, 159.7 | LineTo 313, 295.7 | CurveTo 313, 329.6, 322.4, 305.1, 322.4, 320.3 | LineTo 290.4, 352.2 | CurveTo 256.5, 352.2, 281, 361.6, 265.8, 361.6 | LineTo 160, 255.9 | LineTo 63.6, 352.3 | CurveTo 29.7, 352.3, 54.2, 361.7, 39, 361.7 | LineTo 7, 329.7 | CurveTo 7, 295.8, -2.4, 320.3, -2.4, 305.1 | LineTo 143, 159.8 | CurveTo 177, 159.7, 152.4, 150.3, 167.6, 150.3 | ClosePath 1
TransformationMatrix=#transformationMatrix#

[StyleArrowIconInline]
X=#columnX#
Y=4r

[StyleBar]
SolidColor=#colorBarBg#
X=(#contentMargin#)
Y=#barTextOffset#R
W=(#contentWidth#)
w=(#contentWidth#)
h=#barHeight#
BarOrientation=Horizontal
DynamicVariables=1
Antialias=1
TransformationMatrix=#transformationMatrix#

[StyleHorizontalRule]
SolidColor=#colorBorder#
X=#contentMargin#
Y=(#rowSpacing# + 1)R
W=#contentWidth#
H=1
TransformationMatrix=#transformationMatrix#

; ------------------------------
; LINE GRAPH

; [StyleLineGraphBackground]
; Shape=Rectangle 0,0,[&[#CURRENTSECTION]:W],[&[#CURRENTSECTION]:H],#cornerRoundness# | StrokeWidth 0 | Fill Color #colorGraphBorder#
; Shape2=Rectangle 1,1,([&[#CURRENTSECTION]:W] - 2),([&[#CURRENTSECTION]:H] - 2),#cornerRoundness# | StrokeWidth 0 | Fill Color #colorGraphBg#
; ; Vertical
; Shape3=Rectangle (floor(([&[#CURRENTSECTION]:W] - 2) * 0.1)),1,0.5,([&[#CURRENTSECTION]:H] - 2) | Extend VerticalLines
; Shape4=Rectangle (floor(([&[#CURRENTSECTION]:W] - 2) * 0.2)),1,0.5,([&[#CURRENTSECTION]:H] - 2) | Extend VerticalLines
; Shape5=Rectangle (floor(([&[#CURRENTSECTION]:W] - 2) * 0.3)),1,0.5,([&[#CURRENTSECTION]:H] - 2) | Extend VerticalLines
; Shape6=Rectangle (floor(([&[#CURRENTSECTION]:W] - 2) * 0.4)),1,0.5,([&[#CURRENTSECTION]:H] - 2) | Extend VerticalLines
; Shape7=Rectangle (floor(([&[#CURRENTSECTION]:W] - 2) * 0.5)),1,0.5,([&[#CURRENTSECTION]:H] - 2) | Extend VerticalLines
; Shape8=Rectangle (ceil(([&[#CURRENTSECTION]:W] - 2) * 0.6)),1,0.5,([&[#CURRENTSECTION]:H] - 2) | Extend VerticalLines
; Shape9=Rectangle (ceil(([&[#CURRENTSECTION]:W] - 2) * 0.7)),1,0.5,([&[#CURRENTSECTION]:H] - 2) | Extend VerticalLines
; Shape10=Rectangle (ceil(([&[#CURRENTSECTION]:W] - 2) * 0.8)),1,0.5,([&[#CURRENTSECTION]:H] - 2) | Extend VerticalLines
; Shape11=Rectangle (ceil(([&[#CURRENTSECTION]:W] - 2) * 0.9)),1,0.5,([&[#CURRENTSECTION]:H] - 2) | Extend VerticalLines
; ; Horizontal
; Shape12=Rectangle 1,(floor(([&[#CURRENTSECTION]:H] - 2) * 0.2)),([&[#CURRENTSECTION]:W] - 2),1 | Extend HorizontalLines
; Shape13=Rectangle 1,(floor(([&[#CURRENTSECTION]:H] - 2) * 0.4)),([&[#CURRENTSECTION]:W] - 2),1 | Extend HorizontalLines
; Shape14=Rectangle 1,(ceil(([&[#CURRENTSECTION]:H] - 2) * 0.6)),([&[#CURRENTSECTION]:W] - 2),1 | Extend HorizontalLines
; Shape15=Rectangle 1,(ceil(([&[#CURRENTSECTION]:H] - 2) * 0.8)),([&[#CURRENTSECTION]:W] - 2),1 | Extend HorizontalLines
; HorizontalLines=Fill Color #colorGraphGrid#,(255 * ((#lineGraphBgType# % 2) = 1)) | StrokeWidth 0
; VerticalLines=Fill Color #colorGraphGrid#,(255 * (#lineGraphBgType# > 1)) | StrokeWidth 0
; X=(#contentMargin#)
; Y=((#showLineGraph# = 0) ? -1 : #contentMarginAbs#)R
; W=(#contentWidth#)
; H=#graphHeight#
; DynamicVariables=1
; Group=LineGraph
; Hidden=(#showLineGraph# = 0)
; TransformationMatrix=#transformationMatrix#

; [StyleLineGraphBackgroundOverlay]
; Shape=Rectangle 0,0,[&[#CURRENTSECTION]:W],[&[#CURRENTSECTION]:H],#cornerRoundness# | StrokeWidth 0 | Fill Color #colorGraphBorder#
; Shape2=Rectangle 1,1,([&[#CURRENTSECTION]:W] - 2),([&[#CURRENTSECTION]:H] - 2),#cornerRoundness# | StrokeWidth 0 | Fill Color #colorGraphBg#
; Shape3=Combine Shape | XOR Shape2
; X=-1r
; Y=-1r
; W=(#contentWidth#)
; H=#graphHeight#
; Group=LineGraph
; Hidden=(#showLineGraph# = 0)
; TransformationMatrix=#transformationMatrix#

; [StyleLineGraph]
; X=1r
; Y=1r
; W=(#contentWidth# - 2)
; H=(#graphHeight# - 2)
; Group=LineGraph
; Antialias=#lineGraphAa#
; DynamicVariables=1
; Hidden=(#showLineGraph# = 0)
; TransformationMatrix=#transformationMatrix#

; [StyleLineGraphBgAdjustor]
; X=#contentMargin#
; Y=((#showLineGraph# = 0) ? 0 : 1)R
; Hidden=(#showLineGraph# = 0)
; Group=LineGraph
; TransformationMatrix=#transformationMatrix#

; ------------------------------
; SETTINGS WINDOW ELEMENTS

[StyleCloseWindowButton]
X=(#contentMarginRight# - [#CURRENTSECTION#:W])
Y=#contentMargin#
Shape=Rectangle 2,2,9,9 | Extend Fill
Shape2=Path Path1 | StrokeWidth 0 | Fill Color #colorCloseButton#
Shape3=Path Path2 | StrokeWidth 0
Shape4=Combine Shape2 | XOR Shape3 | Scale 0.025,0.025,0,0 | Offset 0.12,0
Path1=464, 32 | LineTo 48, 32 | CurveTo 0, 80, 21.5, 32, 0, 53.5 | LineTo 0, 432 | CurveTo 48, 480, 0, 458.5, 21.5, 480 | LineTo 464, 480 | CurveTo 512, 432, 490.5, 480, 512, 458.5 | LineTo 512, 80 | CurveTo 464, 32, 512, 53.5, 490.5, 32 | ClosePath 1
Path2=380.4, 322.5 | CurveTo 380.4, 339.9, 385.2, 327.3, 385.2, 335.1 | LineTo 339.9, 380.4 | CurveTo 322.5, 380.4, 335.1, 385.2, 327.3, 385.2 | LineTo 256, 313.3 | LineTo 189.5, 380.4 | CurveTo 172.1, 380.4, 184.7, 385.2, 176.9, 385.2 | LineTo 131.6, 339.9 | CurveTo 131.6, 322.5, 126.8, 335.1, 126.8, 327.3 | LineTo 198.7, 256 | LineTo 131.6, 189.5 | CurveTo 131.6, 172.1, 126.8, 184.7, 126.8, 176.9 | LineTo 172.1, 131.6 | CurveTo 189.5, 131.6, 176.9, 126.8, 184.7, 126.8 | LineTo 256, 198.7 | LineTo 322.5, 131.6 | CurveTo 339.9, 131.6, 327.3, 126.8, 335.1, 126.8 | LineTo 380.4, 172.1 | CurveTo 380.4, 189.5, 385.2, 176.9, 385.2, 184.7 | LineTo 313.3, 256 | LineTo 380.4, 322.5 | ClosePath 1
DynamicVariables=1
TransformationMatrix=#transformationMatrix#
ToolTipText=Close
LeftMouseUpAction=[!DeactivateConfig]
Fill=Fill Color #colorMain#
HoverColor=#colorMain#

[StyleEditButton]
Shape=Rectangle 0,0,13,15 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Path Path3 | StrokeWidth 0
Shape5=Combine Shape2 | XOR Shape3 | XOR Shape4 | Scale 0.025,0.025,0,0 | Offset 0,0.5
Path1=402.6, 83.2 | LineTo 492.8, 173.4 | CurveTo 492.8, 187.2, 496.6, 177.2, 496.6, 183.4 | LineTo 274.4, 405.6 | LineTo 181.6, 415.9 | CurveTo 160.1, 394.4, 169.2, 417.3, 158.7, 406.8 | LineTo 170.4, 301.6 | LineTo 388.8, 83.2 | CurveTo 402.6, 83.2, 392.6, 79.4, 398.8, 79.4 | ClosePath 1
Path2=564.6, 60.3 | LineTo 515.8, 11.5 | CurveTo 460.6, 11.5, 500.6, -3.7, 475.9, -3.7 | LineTo 425.2, 46.9 | CurveTo 425.2, 60.7, 421.4, 50.7, 421.4, 56.9 | LineTo 515.4, 150.9 | CurveTo 529.2, 150.9, 519.2, 154.7, 525.4, 154.7 | LineTo 564.6, 115.5 | CurveTo 564.6, 60.3, 579.8, 100.2, 579.8, 75.5 | ClosePath 1
Path3=384, 346.2 | LineTo 384, 448 | LineTo 64, 448 | LineTo 64, 128 | LineTo 293.8, 128 | CurveTo 302.3, 124.5, 297, 128, 300, 126.7 | LineTo 342.3, 84.5 | CurveTo 333.8, 64, 349.9, 76.9, 344.5, 64 | LineTo 48, 64 | CurveTo 0, 112, 21.5, 64, 0, 85.5 | LineTo 0, 464 | CurveTo 48, 512, 0, 490.5, 21.5, 512 | LineTo 400, 512 | CurveTo 448, 464, 426.5, 512, 448, 490.5 | LineTo 448, 306.2 | CurveTo 427.5, 297.7, 448, 295.5, 435.1, 290.2 | LineTo 387.5, 337.7 | CurveTo 384, 346.2, 385.3, 340, 384, 343 | ClosePath 1
Fill=Fill Color #colorMain#
TransformationMatrix=#transformationMatrix#
ToolTipText=Edit settings file
X=-18r
Y=-1r

[StyleStringSettingsSkinTitle]
FontSize=11
FontWeight=700
StringAlign=Center
FontColor=#colorMain#
X=#contentMargin#
Y=#contentMargin#
Padding=0,-3,0,0
StringCase=Upper

[StyleStringSettingsGPUSkinTitle]
FontSize=11
FontWeight=700
FontColor=#colorMain#
;X=310
Y=#contentMargin#
Padding=0,-3,0,0
StringCase=Upper

[StyleStringSettingsSectionLabel]
FontSize=10
FontWeight=700
FontFace=#LocalFontFace8#
FontColor=#colorDim#
Stringcase=Upper
Padding=0,2,0,0
X=(#contentMargin# + 10)

[StyleStringSettingsSectionLabelGPU]
FontSize=10
FontWeight=700
FontFace=#LocalFontFace8#
FontColor=#colorDim#
Stringcase=Upper
Padding=0,2,0,0
;X=(#contentMargin# + 10)

[StyleStringSettingsLabel]
FontWeight=400
FontSize=9
Fontface=#LocalFontFace8#
;StringCase=Upper
X=(#contentMargin# + 10)
Y=7R

[StyleStringSettingsLabelGPU]
FontWeight=400
FontSize=9
Fontface=#LocalFontFace8#
;StringCase=Upper
X=(#contentMargin# + 280)
Y=7R

[StyleColorConfigHelpIcon]
Padding=-7,-4,0,0
ToolTipTitle=Color Customization
ToolTipText=Left-click a color to edit it with ColorPickerPlus. Right-click to reset a color to its default value. All color options are in RGB format.

[StyleInputBoxBackground]
Shape=Rectangle 0,0,[&[#CURRENTSECTION]:W],[&[#CURRENTSECTION]:H],(#cornerRoundness# * #scale#) | StrokeWidth 0 | Fill Color #colorBorder#
Shape2=Rectangle 1,1,([&[#CURRENTSECTION]:W] - 2),([&[#CURRENTSECTION]:H] - 2),(#cornerRoundness# * #scale#) | StrokeWidth 0 | Extend Fill
Fill=Fill Color #colorSubBg#
X=#contentMargin#
Y=3R
W=#contentWidth#
H=18
DynamicVariables=1
TransformationMatrix=#transformationMatrix#

[StyleInputBoxBackgroundGPU]
Shape=Rectangle 0,0,[&[#CURRENTSECTION]:W],[&[#CURRENTSECTION]:H],(#cornerRoundness# * #scale#) | StrokeWidth 0 | Fill Color #colorBorder#
Shape2=Rectangle 1,1,([&[#CURRENTSECTION]:W] - 2),([&[#CURRENTSECTION]:H] - 2),(#cornerRoundness# * #scale#) | StrokeWidth 0 | Extend Fill
Fill=Fill Color #colorSubBg#
;X=r
;#contentMargin#
Y=3R
W=175
;#contentWidth#
H=18
DynamicVariables=1
TransformationMatrix=#transformationMatrix#

[StyleInputBoxBackgroundDisk]
Shape=Rectangle 0,0,[&[#CURRENTSECTION]:W],[&[#CURRENTSECTION]:H],(#cornerRoundness# * #scale#) | StrokeWidth 0 | Fill Color #colorBorder#
Shape2=Rectangle 1,1,([&[#CURRENTSECTION]:W] - 2),([&[#CURRENTSECTION]:H] - 2),(#cornerRoundness# * #scale#) | StrokeWidth 0 | Extend Fill
Fill=Fill Color #colorSubBg#
;X=r
;#contentMargin#
Y=r
W=100
;#contentWidth#
H=18
DynamicVariables=1
TransformationMatrix=#transformationMatrix#

[StyleInputBoxBackgroundAdjacent]
X=5R
Y=-1r
W=(#contentWidth# - [&[#CURRENTSECTION]:X] + #contentMargin#)
DynamicVariables=1

[StyleInputBoxBackgroundAdjacentRightMargin]
W=(#contentWidth# - [&[#CURRENTSECTION]:X] + #contentMargin# - 21)

[StyleInputBoxBackgroundAdjacentRightAlign]
X=#contentMarginRight# - [[#CURRENTSECTION]:W] + 1
Y=r
DynamicVariables=1

[StyleInputBoxBackgroundAdjacentRightAlignMargin]
X=#contentMarginRight# - [[#CURRENTSECTION]:W] + 1 - 21

[StyleInputBox]
FontSize=#inputBoxFontSize#
FontColor=#colorInputText#
FontFace=#LocalFontFace8#
;FontWeight=600
X=4r
Y=3r
W=([&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'InputBox')]Background:W] - 6)
H=16
Padding=0,-1,0,-3
ClipString=1
DynamicVariables=1
Group=Settings
SolidColor=0,255,0,0
MouseOverAction=[!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','InputBox')]Background Fill "Fill Color #*colorSubBg*#,#*hoverAlpha*#"][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','InputBox')]Background][!Redraw]
MouseLeaveAction=[!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','InputBox')]Background Fill ""][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','InputBox')]Background][!Redraw]

[StyleInputBoxSuffix]
FontColor=#colorDim#
FontSize=#inputBoxFontSize#
X=5R
Y=r
Padding=0,-1,0,-1

[StyleInputBoxAdjustor]
X=r
Y=R
H=4

[StyleLargeRefreshButton]
X=4R
;(#contentMarginRight# - 11)
Y=r
Shape=Rectangle -1,0,15,15 | StrokeWidth 0 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Combine Shape2 | XOR Shape3 | Scale 0.025,0.025,0,0 | Offset 0,1.5
Path1=440.65, 12.57 | LineTo 444.65, 95.34 | ArcTo 255.83, 8, 247.16, 247.16, 0, 1, 0 | CurveTo 12.29, 209.82, 134.73, 8, 33.91, 94.92 | ArcTo 24.09, 224, 12, 12, 0, 1, 0 | LineTo 73.14, 224 | ArcTo 84.81, 214.74, 12, 12, 0, 1, 0 | ArcTo 401.81, 157.8, 175.91, 175.91, 0, 0, 0 | LineTo 300.35, 152.94 | ArcTo 287.78, 164.94, 12, 12, 0, 1, 0 | LineTo 287.78, 212.35 | ArcTo 299.78, 224.35, 12, 12, 0, 1, 0 | LineTo 500, 224.35 | ArcTo 512, 212.35, 12, 12, 0, 1, 0 | LineTo 512, 12 | ArcTo 500, 0, 12, 12, 0, 1, 0 | LineTo 452.63, 0 | ArcTo 440.65, 12.57, 12, 12, 0, 1, 0 | ClosePath 1
Path2=255.83, 432 | ArcTo 109.83, 354.2, 175.61, 175.61, 0, 0, 0 | LineTo 211.63, 359.07 | ArcTo 224.2, 347.07, 12, 12, 0, 1, 0 | LineTo 224.2, 299.67 | ArcTo 212.2, 287.67, 12, 12, 0, 1, 0 | LineTo 12, 287.67 | ArcTo 0, 299.67, 12, 12, 0, 1, 0 | LineTo 0, 500 | ArcTo 12, 512, 12, 12, 0, 1, 0 | LineTo 59.35, 512 | ArcTo 71.35, 499.4, 12, 12, 0, 1, 0 | LineTo 67.2, 416.83 | ArcTo 255.83, 504, 247.17, 247.17, 0, 1, 0 | CurveTo 499.38, 302.18, 376.94, 504, 477.76, 417.08 | ArcTo 487.58, 288, 12, 12, 0, 1, 0 | LineTo 438.53, 288 | ArcTo 426.86, 297.26, 12, 12, 0, 1, 0 | ArcTo 255.83, 432, 175.86, 175.86, 0, 0, 0 | ClosePath 1
Fill=Fill Color #colorAccent#
TransformationMatrix=#transformationMatrix#
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Shape4 "Combine Shape2 | XOR Shape3 | Scale 0.025,0.025,0,0 | Offset 0,1.5 | Rotate 15"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Shape4 "Combine Shape2 | XOR Shape3 | Scale 0.025,0.025,0,0 | Offset 0,1.5 | Rotate 0"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[!SetOption #CURRENTSECTION# Fill "Fill Color #colorAccent#,#hoverAlpha#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!SetOption #CURRENTSECTION# Fill "Fill Color #colorAccent#"][!UpdateMeter #CURRENTSECTION#][!Redraw][!Refresh "#currentGadget#"]
ToolTipText=Apply changes

; ------------------------------
; SETTINGS BUTTONS

[StyleSettingsButtonLabel]
X=R
Y=r
;FontWeight=500
FontSize=9
Group=Settings

[StyleSettingsButtonGPULabel]
X=R
Y=r
;FontWeight=500
FontSize=9
Group=Settings

[StyleSettingsButtonMouseRegion]
X=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:X]
Y=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:Y]
W=([&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:W] + [&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label:W] + 2)
H=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:H]
DynamicVariables=1
Group=Settings
MouseOverAction=[!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "[&MeasureSettingsScript:GetKey('[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon','Fill')],#hoverAlpha#"][!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label FontColor "[&MeasureSettingsScript:GetKey('[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label','FontColor')],#hoverAlpha#"][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label][!Redraw]
MouseLeaveAction=[!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "[&MeasureSettingsScript:Gsub('[&MeasureSettingsScript:GetKey('[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon','Fill')]', ',#hoverAlpha#')]"][!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label FontColor "[&MeasureSettingsScript:Gsub('[&MeasureSettingsScript:GetKey('[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label','FontColor')]', ',#hoverAlpha#')]"][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label][!Redraw]

[StyleSettingsButtonMouseRegionGPU]
X=[&[&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:X]
Y=[&[&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:Y]
W=([&[&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:W] + [&[&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Label:W] + 2)
H=[&[&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:H]
DynamicVariables=1
Group=Settings
MouseOverAction=[!SetOption [&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "[&MeasureSettingsScriptGPU:GetKey('[&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon','Fill')],#hoverAlpha#"][!SetOption [&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Label FontColor "[&MeasureSettingsScriptGPU:GetKey('[&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Label','FontColor')],#hoverAlpha#"][!UpdateMeter [&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Label][!Redraw]
MouseLeaveAction=[!SetOption [&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "[&MeasureSettingsScriptGPU:Gsub('[&MeasureSettingsScriptGPU:GetKey('[&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon','Fill')]', ',#hoverAlpha#')]"][!SetOption [&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Label FontColor "[&MeasureSettingsScriptGPU:Gsub('[&MeasureSettingsScript:GetKey('[&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Label','FontColor')]', ',#hoverAlpha#')]"][!UpdateMeter [&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Label][!Redraw]

[StyleSettingsButtonMouseRegionDISK]
X=[&[&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:X]
Y=[&[&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:Y]
W=([&[&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:W] + [&[&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Label:W] + 2)
H=[&[&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:H]
DynamicVariables=1
Group=Settings
MouseOverAction=[!SetOption [&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "[&MeasureSettingsScriptDISK:GetKey('[&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon','Fill')],#hoverAlpha#"][!SetOption [&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Label FontColor "[&MeasureSettingsScriptDISK:GetKey('[&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Label','FontColor')],#hoverAlpha#"][!UpdateMeter [&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Label][!Redraw]
MouseLeaveAction=[!SetOption [&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "[&MeasureSettingsScriptDISK:Gsub('[&MeasureSettingsScriptDISK:GetKey('[&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon','Fill')]', ',#hoverAlpha#')]"][!SetOption [&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Label FontColor "[&MeasureSettingsScriptDISK:Gsub('[&MeasureSettingsScript:GetKey('[&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Label','FontColor')]', ',#hoverAlpha#')]"][!UpdateMeter [&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Label][!Redraw]

[StyleSettingsButtonMouseRegionPreserve]
X=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:X]
Y=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:Y]
W=([&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:W] + [&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label:W] + 2)
H=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:H]
DynamicVariables=1
Group=Settings
MouseOverAction=[!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "Fill Color [#*[&MeasureSettingsScript:GetKey('[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon','FillRef')]*],#*hoverAlpha*#"][!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label FontColor "[&MeasureSettingsScript:GetKey('[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label','FontColor')],#hoverAlpha#"][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label][!Redraw]
MouseLeaveAction=[!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "Fill Color [#*[&MeasureSettingsScript:GetKey('[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon','FillRef')]*]"][!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label FontColor "[&MeasureSettingsScript:Gsub('[&MeasureSettingsScript:GetKey('[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label','FontColor')]', ',#hoverAlpha#')]"][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Label][!Redraw]

[StyleSettingsButtonMouseRegionPreserveGPU]
X=[&[&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:X]
Y=[&[&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:Y]
W=([&[&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:W] + [&[&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Label:W] + 2)
H=[&[&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:H]
DynamicVariables=1
Group=Settings
MouseOverAction=[!SetOption [&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "Fill Color [#*[&MeasureSettingsScriptGPU:GetKey('[&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon','FillRef')]*],#*hoverAlpha*#"][!SetOption [&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Label FontColor "[&MeasureSettingsScriptGPU:GetKey('[&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Label','FontColor')],#hoverAlpha#"][!UpdateMeter [&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Label][!Redraw]
MouseLeaveAction=[!SetOption [&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "Fill Color [#*[&MeasureSettingsScriptGPU:GetKey('[&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon','FillRef')]*]"][!SetOption [&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Label FontColor "[&MeasureSettingsScriptGPU:Gsub('[&MeasureSettingsScriptGPU:GetKey('[&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Label','FontColor')]', ',#hoverAlpha#')]"][!UpdateMeter [&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScriptGPU:Gsub('[#CURRENTSECTION]','MouseRegion')]Label][!Redraw]

[StyleSettingsButtonMouseRegionPreserveDISK]
X=[&[&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:X]
Y=[&[&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:Y]
W=([&[&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:W] + [&[&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Label:W] + 2)
H=[&[&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:H]
DynamicVariables=1
Group=Settings
MouseOverAction=[!SetOption [&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "Fill Color [#*[&MeasureSettingsScriptDISK:GetKey('[&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon','FillRef')]*],#*hoverAlpha*#"][!SetOption [&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Label FontColor "[&MeasureSettingsScriptDISK:GetKey('[&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Label','FontColor')],#hoverAlpha#"][!UpdateMeter [&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Label][!Redraw]
MouseLeaveAction=[!SetOption [&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "Fill Color [#*[&MeasureSettingsScriptDISK:GetKey('[&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon','FillRef')]*]"][!SetOption [&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Label FontColor "[&MeasureSettingsScriptDISK:Gsub('[&MeasureSettingsScriptDISK:GetKey('[&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Label','FontColor')]', ',#hoverAlpha#')]"][!UpdateMeter [&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScriptDISK:Gsub('[#CURRENTSECTION]','MouseRegion')]Label][!Redraw]

[StyleSettingsButton]
DynamicVariables=1
TransformationMatrix=#transformationMatrix#
Group=Settings
Fill=Fill Color #colorAccent#
X=(#contentMargin# + 10)
Y=4R

[StyleSettingsButtonGPU]
DynamicVariables=1
TransformationMatrix=#transformationMatrix#
Group=Settings
Fill=Fill Color #colorAccent#
X=(#contentMargin# + 260)
Y=4R

[StyleSettingsButtonDISK]
DynamicVariables=1
TransformationMatrix=#transformationMatrix#
Group=Settings
Fill=Fill Color #colorAccent#
X=(#contentMargin# + 515)
Y=4R

[StyleSettingsButtonInline]
X=5R
Y=r

[StyleSettingsButtonCheckOn]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | Scale 0.025,0.025,0,0 | Offset 0,1.5
Path1=400, 480 | LineTo 48, 480 | CurveTo 0, 432, 21.49, 480, 0, 458.51 | LineTo 0, 80 | CurveTo 48, 32, 0, 53.49, 21.49, 32 | LineTo 400, 32 | CurveTo 448, 80, 426.51, 32, 448, 53.49 | LineTo 448, 432 | CurveTo 400, 480, 448, 458.51, 426.51, 480 | ClosePath 1
Path2=195.314, 381.941 | LineTo 379.314, 197.941 | CurveTo 379.314, 175.314, 385.562, 191.693, 385.562, 181.562 | LineTo 356.687, 152.687 | CurveTo 334.059, 152.687, 350.439, 146.439, 340.308, 146.438 | LineTo 184, 302.745 | LineTo 113.941, 232.686 | CurveTo 91.313, 232.686, 107.693, 226.438, 97.562, 226.438 | LineTo 68.686, 255.313 | CurveTo 68.686, 277.94, 62.438, 261.561, 62.438, 271.692 | LineTo 172.686, 381.94 | CurveTo 195.314, 381.941, 178.935, 388.19, 189.065, 388.19 | ClosePath 1
Padding=0,0,3,3

[StyleSettingsButtonCheckOff]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | Scale 0.025,0.025,0,0 | Offset 0,1.5
Path1=400, 32 | LineTo 48, 32 | CurveTo 0, 80, 21.5, 32, 0, 53.5 | LineTo 0, 432 | CurveTo 48, 480, 0, 458.5, 21.5, 480 | LineTo 400, 480 | CurveTo 448, 432, 426.5, 480, 448, 458.5 | LineTo 448, 80 | CurveTo 400, 32, 448, 53.5, 426.5, 32 | ClosePath 1
Path2=394, 432 | LineTo 54, 432 | CurveTo 48, 426, 50.7, 432, 48, 429.3 | LineTo 48, 86 | CurveTo 54, 80, 48, 82.7, 50.7, 80 | LineTo 394, 80 | CurveTo 400, 86, 397.3, 80, 400, 82.7 | LineTo 400, 426 | CurveTo 394, 432, 400, 429.3, 397.3, 432 | ClosePath 1
Padding=0,0,3,3

[StyleSettingsButtonRadioOn]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | Scale 0.025,0.025,0,0 | Offset -1,1.5
Path1=256, 8 | CurveTo 8, 256, 119.033, 8, 8, 119.033 | CurveTo 256, 504, 8, 392.967, 119.033, 504 | CurveTo 504, 256, 392.967, 504, 504, 392.967 | CurveTo 256, 8, 504, 119.033, 392.967, 8 | ClosePath 1
Path2=336, 256 | CurveTo 256, 336, 336, 300.112, 300.112, 336 | CurveTo 176, 256, 211.888, 336, 176, 300.112 | CurveTo 256, 176, 176, 211.888, 211.888, 176 | CurveTo 336, 256, 300.112, 176, 336, 211.888 | ClosePath 1
Padding=0,0,4,3

[StyleSettingsButtonRadioOff]
Shape=Path Path1 | StrokeWidth 0 | Extend Fill
Shape2=Path Path2 | StrokeWidth 0
Shape3=Combine Shape1 | XOR Shape2 | Scale 0.025,0.025,0,0 | Offset -1,1.5
Path1=256, 8 | CurveTo 8, 256, 119, 8, 8, 119 | CurveTo 256, 504, 8, 393, 119, 504 | CurveTo 504, 256, 393, 504, 504, 393 | CurveTo 256, 8, 504, 119, 393, 8 | ClosePath 1
Path2=256, 456 | CurveTo 56, 256, 145.5, 456, 56, 366.5 | CurveTo 256, 56, 56, 145.5, 145.5, 56 | CurveTo 456, 256, 366.5, 56, 456, 145.5 | CurveTo 256, 456, 456, 366.5, 366.5, 456 | ClosePath 1\
Padding=0,0,4,3

[StyleSettingsButtonPivotLeft]
Shape=Path Path1 | StrokeWidth 0 | Scale 0.025,0.025,0,0 | Offset -11,-176.4 | Rotate -90 | Extend Fill
Path1=288.662, 352 | LineTo 31.338, 352 | CurveTo 17.196, 317.858, 13.52, 352, 4.597, 330.457 | LineTo 145.858, 189.196 | CurveTo 174.142, 189.196, 153.668, 181.386, 166.332, 181.386 | LineTo 302.804, 317.858 | CurveTo 288.662, 352, 315.404, 330.457, 306.48, 352 | ClosePath 1
Fill=Fill Color #colorAccent#
X=10R
Y=-1r
; SolidColor=255,255,255,50

[StyleSettingsButtonPivotValue]
FontSize=9
StringCase=Upper
StringAlign=Center
X=([#CURRENTSECTION#:W] / 2 + 5)R
Y=r
DynamicVariables=1
Group=Settings
Padding=0,1,0,0

[StyleSettingsButtonPivotRight]
Shape=Path Path1 | StrokeWidth 0 | Scale 0.025,0.025,0,0 | Offset -11,-176.5 | Rotate 90 | Extend Fill
Path1=288.662, 352 | LineTo 31.338, 352 | CurveTo 17.196, 317.858, 13.52, 352, 4.597, 330.457 | LineTo 145.858, 189.196 | CurveTo 174.142, 189.196, 153.668, 181.386, 166.332, 181.386 | LineTo 302.804, 317.858 | CurveTo 288.662, 352, 315.404, 330.457, 306.48, 352 | ClosePath 1
Fill=Fill Color #colorAccent#
X=([&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'RightIcon')]Value:XW] - ceil([&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'RightIcon')]Value:W] / 2) - [&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'RightIcon')]LeftIcon:XW])r
Y=r
; SolidColor=255,255,255,50
DynamicVariables=1

[StyleSettingsButtonPivotLeftMouseRegion]
X=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:X]
Y=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon:Y]
W=(([&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'LeftMouseRegion')]Value:X] + ([&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'LeftMouseRegion')]Value:W] / 2)) - [#CURRENTSECTION#:X])
H=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'LeftMouseRegion')]Value:H]
MouseOverAction=[!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "Fill Color #*colorAccent*#,#*hoverAlpha*#"][!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','LeftMouseRegion')]Value FontColor "#*colorMain*#,#*hoverAlpha*#"][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','LeftMouseRegion')]Value][!Redraw]
MouseLeaveAction=[!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "Fill Color #*colorAccent*#"][!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','LeftMouseRegion')]Value FontColor "#*colorMain*#"][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','LeftMouseRegion')]Value][!Redraw]
; SolidColor=255,0,0,100

[StyleSettingsButtonPivotRightMouseRegion]
X=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'RightMouseRegion')]LeftMouseRegion:XW]
Y=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'RightMouseRegion')]Value:Y]
W=([&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'RightMouseRegion')]LeftMouseRegion:W] + 4)
H=[&[&MeasureSettingsScript:Gsub('[#CURRENTSECTION]', 'RightMouseRegion')]Value:H]
MouseOverAction=[!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "Fill Color #*colorAccent*#,#*hoverAlpha*#"][!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','RightMouseRegion')]Value FontColor "#*colorMain*#,#*hoverAlpha*#"][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','RightMouseRegion')]Value][!Redraw]
MouseLeaveAction=[!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon Fill "Fill Color #*colorAccent*#"][!SetOption [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','RightMouseRegion')]Value FontColor "#*colorMain*#"][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','MouseRegion')]Icon][!UpdateMeter [&MeasureSettingsScript:Gsub('[#CURRENTSECTION]','RightMouseRegion')]Value][!Redraw]
; SolidColor=0,255,0,100

[StyleSettingsButtonColorIcon]
Shape=Rectangle 0,0,12,12,2 | StrokeWidth 0 | Offset 0,2 | Extend Fill
Padding=0,0,5,3
X=r

[StyleSettingsButtonGPUColorIcon]
Shape=Rectangle 0,0,12,12,2 | StrokeWidth 0 | Offset 0,2 | Extend Fill
Padding=0,0,5,3
X=r

[StyleSettingsButtonColorIconBorder]
Shape=Rectangle 0,0,12,12,2 | StrokeWidth 0 | Offset 0,2 | Fill Color #colorBorder#
Shape2=Rectangle 1,1,10,10,2 | StrokeWidth 0 | Offset 0,2 | Extend Fill

[StyleIconButtonIcon]
X=r
Y=6R
W=16
H=16
Fill=Fill Color #colorAccent#
; SolidColor=0,255,0,150
TransformationMatrix=#transformationMatrix#

[StyleIconButtonLabel]
FontSize=9
FontWeight=600
X=5R
Y=r

; Shapes
[StyleShapeRmLogo]
Shape = Path Path1 | StrokeWidth 0 | Extend Fill
Shape2 = Path Path2 | StrokeWidth 0
Shape3 = Combine Shape | XOR Shape2 | Scale 0.34,0.33,0,0 | Offset 1.5,-2
Path1 = 35, 37.722 | CurveTo 19, 52.622, 35, 45.922, 27.8, 52.622 | CurveTo 3, 37.722, 10.2, 52.622, 3, 45.922 | CurveTo 19, 4.622, 3, 29.522, 19, 4.622 | CurveTo 35, 37.722, 19, 4.622, 35, 29.522 | ClosePath 1
Path2 = 19.127, 35.82 | CurveTo 7.945, 35.793, 10.75, 30.074, 7.945, 35.793 | ArcTo 7.669, 37.026, 2.907, 2.907, 0, 1, 0 | CurveTo 19.223, 47.408, 7.669, 42.773, 12.868, 47.408 | CurveTo 30.777, 37.026, 25.578, 47.408, 30.777, 42.773 | CurveTo 30.681, 35.821, 30.777, 36.655, 30.681, 36.284 | CurveTo 19.127, 35.821, 30.681, 35.821, 27.407, 41.568 | ClosePath 1

[StyleShapeHwinfoLogo]
Shape = Path Path1 | StrokeWidth 0 | Extend Fill
Shape2 = Path Path2 | StrokeWidth 0
Shape3 = Path Path3 | StrokeWidth 0
Shape4 = Path Path4 | StrokeWidth 0
Shape5 = Path Path5 | StrokeWidth 0
Shape6 = Path Path6 | StrokeWidth 0
Shape7 = Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | Scale 0.14,0.14,0,0 | Offset 0.775,1
Path1 = 7.5, 1.9 | CurveTo 2.5, 6, 5.9, 2.9, 3.6, 4.7 | CurveTo 0.5, 50, 0.6, 8.1, 0.5, 9.6 | LineTo 0.5, 91.8 | LineTo 3, 94.5 | CurveTo 51, 100, 8.2, 100.1, 7.7, 100 | CurveTo 99, 94.5, 94.3, 100, 93.8, 100.1 | LineTo 101.5, 91.8 | LineTo 101.5, 8.2 | LineTo 99, 5.5 | CurveTo 50.8, 0, 93.8, -0.1, 94.3, 0 | CurveTo 7.5, 1.9, 13.3, 0, 10.3, 0.1 | ClosePath 1
Path2 = 35, 29 | LineTo 35, 50 | LineTo 22, 50 | LineTo 22, 8 | LineTo 35, 8 | LineTo 35, 29 | ClosePath 1
Path3 = 51.9, 20.4 | CurveTo 57, 38.5, 56.1, 22.6, 57, 25.9 | LineTo 57, 50 | LineTo 45, 50 | LineTo 45, 34.5 | CurveTo 47, 19, 45, 19.5, 45.1, 19 | CurveTo 51.9, 20.4, 48.2, 19, 50.3, 19.6 | ClosePath 1
Path4 = 35, 78.5 | LineTo 35, 94 | LineTo 32.2, 94 | CurveTo 22, 73.5, 24.9, 94, 22, 88.2 | LineTo 22, 63 | LineTo 35, 63 | LineTo 35, 78.5 | ClosePath 1
Path5 = 57, 74.5 | CurveTo 55.8, 88.5, 57, 81.2, 56.5, 87 | CurveTo 47, 94, 54.5, 91.4, 50.3, 94 | CurveTo 45, 78.5, 45.1, 94, 45, 93.5 | LineTo 45, 63 | LineTo 57, 63 | LineTo 57, 74.5 | ClosePath 1
Path6 = 79, 75.6 | CurveTo 76.1, 91.1, 79, 88.1, 79, 88.2 | CurveTo 70.1, 94, 74.1, 93, 72.1, 94 | LineTo 67, 94 | LineTo 67, 63 | LineTo 79, 63 | LineTo 79, 75.6 | ClosePath 1

[StyleShapeHelpIcon]
Shape=Path Path1 | StrokeWidth 0 | Fill Color #colorMain# | Scale 0.0305,0.0305,0,0
Shape2=Path Path1 | StrokeWidth 0 | Fill Color #colorHelpButton#
Shape3=Path Path2 | StrokeWidth 0
Shape4=Path Path3 | StrokeWidth 0
Shape5=Combine Shape2 | XOR Shape3 | XOR Shape4 | Scale 0.0255,0.0255,0,0 | Offset 9,9
Path1=256, 8 | CurveTo 8, 256, 119.043, 8, 8, 119.083 | CurveTo 256, 504, 8, 392.997, 119.043, 504 | CurveTo 504, 256, 392.957, 504, 504, 392.997 | CurveTo 256, 8, 504, 119.083, 392.957, 8 | ClosePath 1
; Info icon
Path2=256, 118 | CurveTo 298, 160, 279.196, 118, 298, 136.804 | CurveTo 256, 202, 298, 183.196, 279.196, 202 | CurveTo 214, 160, 232.804, 202, 214, 183.196 | CurveTo 256, 118, 214, 136.804, 232.804, 118 | ClosePath 1
Path3=312, 372 | CurveTo 300, 384, 312, 378.627, 306.627, 384 | LineTo 212, 384 | CurveTo 200, 372, 205.373, 384, 200, 378.627 | LineTo 200, 348 | CurveTo 212, 336, 200, 341.373, 205.373, 336 | LineTo 224, 336 | LineTo 224, 272 | LineTo 212, 272 | CurveTo 200, 260, 205.373, 272, 200, 266.627 | LineTo 200, 236 | CurveTo 212, 224, 200, 229.373, 205.373, 224 | LineTo 276, 224 | CurveTo 288, 236, 282.627, 224, 288, 229.373 | LineTo 288, 336 | LineTo 300, 336 | CurveTo 312, 348, 306.627, 336, 312, 341.373 | LineTo 312, 372 | ClosePath 1
; Question icon
Path2 = 262.655, 90 | CurveTo 146.106, 153.758, 208.158, 90, 173.4, 112.957 | CurveTo 148.821, 170.016, 142.57, 159.044, 143.753, 166.173 | LineTo 183.52, 196.326 | CurveTo 200.185, 194.204, 188.725, 200.273, 196.141, 199.334 | CurveTo 257.488, 158.407, 218.049, 171.546, 230.298, 158.407 | CurveTo 303.186, 191.365, 277.917, 158.407, 303.186, 171.555 | CurveTo 270.652, 225.341, 303.186, 206.341, 290.823, 214.032 | CurveTo 216, 296, 247.128, 238.528, 216, 254.941 | LineTo 216, 300 | CurveTo 228, 312, 216, 306.627, 221.373, 312 | LineTo 284, 312 | CurveTo 296, 300, 290.627, 312, 296, 306.627 | LineTo 296, 298.667 | CurveTo 379.186, 192, 296, 270.205, 379.186, 269.02 | CurveTo 262.655, 90, 379.186, 133.998, 319.021, 90 | ClosePath 1
Path3 = 256, 338 | CurveTo 210, 384, 230.635, 338, 210, 358.635 | CurveTo 256, 430, 210, 409.364, 230.635, 430 | CurveTo 302, 384, 281.365, 430, 302, 409.364 | CurveTo 256, 338, 302, 358.635, 281.365, 338 | ClosePath 1
X=4R
;(#contentMarginRight# - [#CURRENTSECTION#:W] + 1)
Y=r
TransformationMatrix=#transformationMatrix#
DynamicVariables=1
Padding=-7,-7,0,0
ToolTipIcon=Info
ToolTipTitle=Title text
ToolTipText=Body text
ToolTipWidth=300

[StyleShapeHelpIconInputBox]
Padding=-7,-10,0,-3

[StyleShapeHelpIconInputBoxLabel]
Padding=-7,-7,0,-1

[StyleShapeHelpIconSectionLabel]
Padding=-7,-4,0,0

[StyleShapeBookIcon]
Shape=Rectangle 0,0,14,15 | StrokeWidth 0 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Path Path3 | StrokeWidth 0
Shape5=Path Path4 | StrokeWidth 0
Shape6=Combine Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | Scale 0.028,0.028,0,0 | Offset 1,0.5
Path1=448, 360 | LineTo 448, 24 | CurveTo 424, 0, 448, 10.7, 437.3, 0 | LineTo 96, 0 | CurveTo 0, 96, 43, 0, 0, 43 | LineTo 0, 416 | CurveTo 96, 512, 0, 469, 43, 512 | LineTo 424, 512 | CurveTo 448, 488, 437.3, 512, 448, 501.3 | LineTo 448, 472 | CurveTo 439.1, 453.3, 448, 464.5, 444.5, 457.7 | CurveTo 439.1, 378.6, 434.9, 437.9, 434.9, 394 | CurveTo 448, 360, 444.5, 374.3, 448, 367.5 | ClosePath 1
Path2=128, 134 | CurveTo 134, 128, 128, 130.7, 130.7, 128 | LineTo 346, 128 | CurveTo 352, 134, 349.3, 128, 352, 130.7 | LineTo 352, 154 | CurveTo 346, 160, 352, 157.3, 349.3, 160 | LineTo 134, 160 | CurveTo 128, 154, 130.7, 160, 128, 157.3 | LineTo 128, 134 | ClosePath 1
Path3=128, 198 | CurveTo 134, 192, 128, 194.7, 130.7, 192 | LineTo 346, 192 | CurveTo 352, 198, 349.3, 192, 352, 194.7 | LineTo 352, 218 | CurveTo 346, 224, 352, 221.3, 349.3, 224 | LineTo 134, 224 | CurveTo 128, 218, 130.7, 224, 128, 221.3 | LineTo 128, 198 | ClosePath 1
Path4=381.4, 448 | LineTo 96, 448 | CurveTo 64, 416, 78.3, 448, 64, 433.7 | CurveTo 96, 384, 64, 398.4, 78.4, 384 | LineTo 381.4, 384 | CurveTo 381.4, 448, 379.5, 401.1, 379.5, 430.9 | ClosePath 1
X=4R
;(#contentMarginRight# - [#CURRENTSECTION#:W])
Y=3r
TransformationMatrix=#transformationMatrix#
Fill=Fill Color #colorAccent#
DynamicVariables=1

[StyleShapeBookIconAdjacent]
X=-20r

[StyleShapeBookIconSettingsButton]
Y=1r
Padding=0,0,0,1

[StyleShapeBookIconSectionLabel]
Y=1r

[StyleShapeEditIcon]
Shape=Rectangle 0,0,13,15 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Path Path3 | StrokeWidth 0
Shape5=Combine Shape2 | XOR Shape3 | XOR Shape4 | Scale 0.025,0.025,0,0 | Offset 0,0.5
Path1=402.6, 83.2 | LineTo 492.8, 173.4 | CurveTo 492.8, 187.2, 496.6, 177.2, 496.6, 183.4 | LineTo 274.4, 405.6 | LineTo 181.6, 415.9 | CurveTo 160.1, 394.4, 169.2, 417.3, 158.7, 406.8 | LineTo 170.4, 301.6 | LineTo 388.8, 83.2 | CurveTo 402.6, 83.2, 392.6, 79.4, 398.8, 79.4 | ClosePath 1
Path2=564.6, 60.3 | LineTo 515.8, 11.5 | CurveTo 460.6, 11.5, 500.6, -3.7, 475.9, -3.7 | LineTo 425.2, 46.9 | CurveTo 425.2, 60.7, 421.4, 50.7, 421.4, 56.9 | LineTo 515.4, 150.9 | CurveTo 529.2, 150.9, 519.2, 154.7, 525.4, 154.7 | LineTo 564.6, 115.5 | CurveTo 564.6, 60.3, 579.8, 100.2, 579.8, 75.5 | ClosePath 1
Path3=384, 346.2 | LineTo 384, 448 | LineTo 64, 448 | LineTo 64, 128 | LineTo 293.8, 128 | CurveTo 302.3, 124.5, 297, 128, 300, 126.7 | LineTo 342.3, 84.5 | CurveTo 333.8, 64, 349.9, 76.9, 344.5, 64 | LineTo 48, 64 | CurveTo 0, 112, 21.5, 64, 0, 85.5 | LineTo 0, 464 | CurveTo 48, 512, 0, 490.5, 21.5, 512 | LineTo 400, 512 | CurveTo 448, 464, 426.5, 512, 448, 490.5 | LineTo 448, 306.2 | CurveTo 427.5, 297.7, 448, 295.5, 435.1, 290.2 | LineTo 387.5, 337.7 | CurveTo 384, 346.2, 385.3, 340, 384, 343 | ClosePath 1
Fill=Fill Color #colorAccent#
TransformationMatrix=#transformationMatrix#
ToolTipText=Edit settings file

[StyleShapeSearchIcon]
Shape=Rectangle 0,0,16,16 | StrokeWidth 0 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Path Path3 | StrokeWidth 0
Shape5=Path Path4 | StrokeWidth 0
Shape6=Combine Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | Scale 0.03,0.03,0,0
Path1=505.04, 442.66 | LineTo 405.33, 342.97 | CurveTo 388.33, 335.97, 400.83, 338.47, 394.73, 335.97 | LineTo 372.03, 335.97 | CurveTo 416.03, 207.98, 399.63, 300.67, 416.03, 256.28 | CurveTo 208.02, 0, 416.03, 93.09, 322.92, 0 | CurveTo 0, 207.98, 93.12, 0, 0, 93.09 | CurveTo 208.02, 415.96, 0, 322.87, 93.11, 415.96 | CurveTo 336.03, 371.96, 256.32, 415.96, 300.73, 399.56 | LineTo 336.03, 388.26 | CurveTo 343.03, 405.26, 336.03, 394.66, 338.53, 400.76 | LineTo 442.74, 504.95 | CurveTo 476.64, 504.95, 452.14, 514.35, 467.34, 514.35 | LineTo 504.94, 476.65 | CurveTo 505.04, 442.66, 514.34, 467.25, 514.34, 452.06 | ClosePath 1
Path2=208.02, 351.96 | CurveTo 64.02, 207.98, 128.48, 351.96, 64.02, 287.62 | CurveTo 208.02, 64, 64.02, 128.45, 128.37, 64 | CurveTo 352.02, 207.98, 287.56, 64, 352.02, 128.34 | CurveTo 208.02, 351.96, 352.02, 287.51, 287.67, 351.96 | ClosePath 1
Path3=208.04, 112 | CurveTo 134.2, 185.83, 167.26, 112, 134.2, 145.05 | CurveTo 200.95, 300.69, 134.2, 218.79, 182.46, 278.88 | ArcTo 215.13, 300.69, 9.24, 9.24, 0, 1, 0 | CurveTo 281.88, 185.83, 233.62, 278.88, 281.88, 218.8 | CurveTo 208.04, 112, 281.88, 145.05, 248.82, 112 | ClosePath 1
Path4=208.04, 208 | CurveTo 184.04, 184, 194.78, 208, 184.04, 197.25 | CurveTo 208.04, 160, 184.04, 170.74, 194.79, 160 | CurveTo 232.04, 184, 221.29, 160, 232.04, 170.74 | CurveTo 208.04, 208, 232.04, 197.25, 221.29, 208 | ClosePath 1
Fill=Fill Color #colorAccent#
X=(#contentMarginRight# - [#CURRENTSECTION#:W])
Y=-2r
TransformationMatrix=#transformationMatrix#

[StyleSoundFileIcon]
Shape=Rectangle 0,0,18,16 | StrokeWidth 0 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Combine Shape2 | XOR Shape3 | Scale 0.03,0.03,0,0 | Offset 0,0
Path1=572.694, 292.093 | LineTo 500.27, 416.248 | ArcTo 444.989, 448, 63.997, 63.997, 0, 0, 0 | LineTo 45.025, 448 | CurveTo 24.294, 411.907, 26.502, 448, 14.961, 427.907 | LineTo 96.718, 287.752 | ArcTo 152, 256, 64, 64, 0, 0, 0 | LineTo 551.964, 256 | CurveTo 572.694, 292.093, 570.487, 256, 582.028, 276.093 | ClosePath 1
Path2=152, 224 | LineTo 480, 224 | LineTo 480, 176 | CurveTo 432, 128, 480, 149.49, 458.51, 128 | LineTo 272, 128 | LineTo 208, 64 | LineTo 48, 64 | CurveTo 0, 112, 21.49, 64, 0, 85.49 | LineTo 0, 390.046 | LineTo 69.077, 271.628 | CurveTo 152, 224, 86.214, 242.25, 117.989, 224 | ClosePath 1
Fill=Fill Color #colorAccent#
ToolTipText=Choose sound file
X=5R
Y=r

[StyleSoundPlayIcon]
Shape=Path Path1 | StrokeWidth 0 | Scale 0.02,0.02,0,0 | Offset 0,3 | Extend Fill
Path1=424.4, 214.7 | LineTo 72.4, 6.6 | CurveTo 0, 47.9, 43.8, -10.3, 0, 6.1 | LineTo 0, 464 | CurveTo 72.4, 505.3, 0, 501.5, 40.7, 524.1 | LineTo 424.4, 297.3 | CurveTo 424.4, 214.7, 455.8, 278.8, 455.9, 233.2 | ClosePath 1
Fill=Fill Color #colorAccent#
X=8R
Y=r
Padding=0,0,0,3
ToolTipText=Play sound

[StyleShapePoweredBy]
Shape = Path Path1 | StrokeWidth 0 | Extend Fill
Shape2 = Path Path2 | StrokeWidth 0
Shape3 = Path Path3 | StrokeWidth 0
Shape4 = Path Path4 | StrokeWidth 0
Shape5 = Path Path5 | StrokeWidth 0
Shape6 = Path Path6 | StrokeWidth 0
Shape7 = Path Path7 | StrokeWidth 0
Shape8 = Path Path8 | StrokeWidth 0
Shape9 = Path Path9 | StrokeWidth 0
Shape10 = Path Path10 | StrokeWidth 0
Shape11 = Path Path11 | StrokeWidth 0
Shape12 = Path Path12 | StrokeWidth 0
Shape13 = Path Path13 | StrokeWidth 0
Shape14 = Path Path14 | StrokeWidth 0
Shape15 = Path Path15 | StrokeWidth 0
Shape16 = Path Path16 | StrokeWidth 0
Shape17 = Path Path17 | StrokeWidth 0
Shape18 = Path Path18 | StrokeWidth 0
Shape19 = Path Path19 | StrokeWidth 0
Shape20 = Path Path20 | StrokeWidth 0
Shape21 = Path Path21 | StrokeWidth 0
Shape22 = Path Path22 | StrokeWidth 0
Shape23 = Path Path23 | StrokeWidth 0
Shape24 = Path Path24 | StrokeWidth 0
Shape25 = Path Path25 | StrokeWidth 0
Shape26 = Path Path26 | StrokeWidth 0
Shape27 = Path Path27 | StrokeWidth 0
Shape28 = Combine Shape1 | XOR Shape2 | XOR Shape3 | XOR Shape4 | XOR Shape5 | XOR Shape6 | XOR Shape7 | XOR Shape8 | XOR Shape9 | XOR Shape10 | XOR Shape11 | XOR Shape12 | XOR Shape13 | XOR Shape14 | XOR Shape15 | XOR Shape16 | XOR Shape17 | XOR Shape18 | XOR Shape19 | XOR Shape20 | XOR Shape21 | XOR Shape22 | XOR Shape23 | XOR Shape24 | XOR Shape25 | XOR Shape26 | XOR Shape27 | Scale 0.055,0.055,0,0 | Offset 0,-5
Path1 = 372.1, 163.3 | CurveTo 327.3, 237.3, 366.8, 180.6, 348, 211.6 | CurveTo 321, 245.5, 323.8, 241.6, 321, 245.3 | CurveTo 325.8, 243.6, 321, 245.8, 323.1, 245 | CurveTo 404, 220.6, 349.2, 231.8, 376.3, 223.8 | CurveTo 416.7, 218.7, 410.7, 219.8, 416.4, 218.9 | CurveTo 376.7, 158.7, 417.2, 218.1, 381, 164 | LineTo 374.4, 155.9 | LineTo 372.1, 163.3 | ClosePath 1
Path2 = 415.4, 236.2 | CurveTo 380, 288, 399.6, 254.9, 388.4, 271.2 | CurveTo 368.5, 314.8, 374.5, 298.8, 367.9, 314.2 | CurveTo 384.1, 310.6, 368.7, 315, 375.7, 313.1 | CurveTo 400.1, 306, 392.5, 308.1, 399.7, 306 | CurveTo 393, 322.2, 400.5, 306, 397.3, 313.3 | CurveTo 371.5, 383.8, 381.5, 346.1, 374.6, 365.8 | CurveTo 368, 419.2, 369.7, 393.8, 368, 411.4 | LineTo 368, 424.9 | LineTo 379, 419.8 | CurveTo 390.4, 415.1, 385.1, 417, 390.2, 414.9 | CurveTo 389.4, 421.5, 390.7, 415.3, 390.2, 418.2 | CurveTo 381.8, 466, 387.3, 430.5, 383.3, 454.1 | CurveTo 382.3, 541.3, 379.9, 481.6, 380.2, 525.3 | CurveTo 390, 581.8, 384, 553.7, 387.7, 573.5 | CurveTo 405.2, 584, 391.3, 586.8, 391.1, 586.7 | CurveTo 483.1, 542.1, 435.5, 578.1, 460.5, 564.7 | CurveTo 528.7, 437.9, 512, 513.1, 527.1, 478.6 | CurveTo 485.8, 317.7, 530.2, 400.4, 517.6, 365.1 | CurveTo 461.5, 283, 482.4, 312.6, 471.5, 297 | CurveTo 433.5, 242.7, 451.5, 269, 438.9, 250.9 | CurveTo 423, 228, 428.1, 234.6, 423.4, 228 | CurveTo 415.4, 236.2, 422.7, 228, 419.2, 231.7 | ClosePath 1
Path3 = 302.5, 267.1 | CurveTo 222.4, 439, 243.3, 336.2, 220.2, 385.7 | CurveTo 224.9, 463.4, 222.7, 447.2, 223.8, 457.8 | CurveTo 345.6, 584.1, 237.4, 524.6, 284.3, 571.6 | CurveTo 388, 586.6, 355.3, 586.1, 388, 588 | CurveTo 380.4, 573.3, 388, 586.3, 384.6, 580.3 | CurveTo 355.6, 521.1, 369.6, 555.4, 360.8, 536.9 | CurveTo 345.4, 475.3, 351.3, 507.7, 346.6, 487 | CurveTo 344.5, 468.3, 345.1, 472.1, 344.7, 469 | CurveTo 336, 471.7, 344.2, 467.5, 341.2, 468.7 | CurveTo 327.1, 475.4, 331.4, 474.3, 327.5, 475.9 | CurveTo 317.8, 435.5, 325.8, 474.1, 320.4, 450.5 | CurveTo 315.5, 394.3, 315.9, 424.2, 315.6, 418.7 | CurveTo 314.3, 366, 315.5, 373.5, 315.2, 366 | CurveTo 305.3, 369.4, 313.7, 366, 309.6, 367.5 | CurveTo 295.3, 373.4, 301, 371.2, 296.5, 373 | LineTo 293, 374.1 | LineTo 293, 358.3 | CurveTo 307.1, 268.8, 293, 325.3, 297.1, 299.3 | CurveTo 309.7, 259.4, 308.7, 263.8, 309.9, 259.6 | CurveTo 302.5, 267.1, 309.6, 259.2, 306.3, 262.7 | ClosePath 1
Path4 = 1637, 325.1 | LineTo 1637, 367.2 | LineTo 1631.5, 362.2 | CurveTo 1592.6, 349.2, 1620.7, 352.3, 1609.3, 348.5 | CurveTo 1563.7, 358.7, 1580.4, 349.8, 1573.4, 352.1 | CurveTo 1538.3, 415.5, 1546.2, 370.6, 1537.1, 390.8 | CurveTo 1577.5, 472.5, 1539.5, 442.9, 1554.4, 464.5 | CurveTo 1608.9, 474, 1584.1, 474.8, 1601.5, 475.7 | CurveTo 1633.6, 459.7, 1617.8, 472.1, 1627.4, 466.5 | LineTo 1639, 453.7 | LineTo 1639, 472 | LineTo 1667, 472 | LineTo 1667, 283 | LineTo 1637, 283 | LineTo 1637, 325.1 | ClosePath 1
Path5 = 1616.1, 376 | CurveTo 1631.7, 390.1, 1622.9, 379.4, 1628.2, 384.2 | CurveTo 1627.1, 439.3, 1641.4, 406.3, 1639.5, 426.2 | CurveTo 1603.8, 449.8, 1619.8, 447, 1614.5, 449.4 | CurveTo 1589.7, 447.7, 1596.2, 450.1, 1594.4, 449.9 | CurveTo 1573.2, 431.8, 1582.1, 444.3, 1576.8, 439.1 | CurveTo 1594.5, 373.9, 1561.6, 408.2, 1572, 379.8 | CurveTo 1616.1, 376, 1599.8, 372.5, 1611.4, 373.6 | ClosePath 1
Path6 = 1767, 377.5 | LineTo 1767, 472 | LineTo 1794.9, 472 | LineTo 1795.2, 462.7 | LineTo 1795.5, 453.5 | LineTo 1797.9, 457.4 | CurveTo 1817.8, 472.1, 1800.9, 462.3, 1810.3, 469.2 | CurveTo 1852, 473.5, 1825.8, 475.2, 1842.9, 475.9 | CurveTo 1893.6, 429.5, 1872.2, 468.3, 1888.3, 451.3 | CurveTo 1893.7, 394, 1895.9, 420.1, 1896, 402.7 | CurveTo 1852.5, 350.5, 1888, 372.5, 1872, 355.6 | CurveTo 1824.2, 350, 1845.8, 348.8, 1830.7, 348.5 | CurveTo 1802, 362.2, 1817, 351.7, 1807.2, 357.1 | CurveTo 1796.6, 367, 1799.3, 364.8, 1796.9, 367 | CurveTo 1796, 325, 1796.3, 367, 1796, 348.1 | LineTo 1796, 283 | LineTo 1767, 283 | LineTo 1767, 377.5 | ClosePath 1
Path7 = 1844.2, 375.7 | CurveTo 1864.7, 415, 1857.9, 381.8, 1866, 397.2 | CurveTo 1855.3, 439, 1864, 424.9, 1861, 432.7 | CurveTo 1832.4, 449.8, 1848, 447.1, 1843.3, 449.4 | CurveTo 1817.8, 447.8, 1824.2, 450.2, 1822.6, 450 | CurveTo 1798, 425.3, 1808, 443.3, 1802.1, 436.6 | CurveTo 1799.3, 394.8, 1794.9, 416.7, 1795.5, 403.2 | CurveTo 1821.3, 374.4, 1803.6, 385.2, 1812, 377.4 | CurveTo 1844.2, 375.7, 1827.1, 372.5, 1838.3, 373.2 | ClosePath 1
Path8 = 2536, 377.5 | LineTo 2536, 472 | LineTo 2565, 472 | LineTo 2565, 441.5 | CurveTo 2565.8, 411, 2565, 424.7, 2565.4, 411 | CurveTo 2590.1, 441.5, 2566.3, 411, 2577.2, 424.7 | LineTo 2613.5, 471.9 | LineTo 2633.4, 472 | CurveTo 2651.9, 470.3, 2652.1, 472, 2653.2, 471.9 | CurveTo 2624.8, 437.8, 2651.1, 469.3, 2638.9, 454.7 | CurveTo 2599, 406.5, 2610.6, 420.9, 2599, 406.8 | CurveTo 2632.9, 370.1, 2599, 405.7, 2609.6, 394.3 | LineTo 2650.2, 352 | LineTo 2630.9, 352 | LineTo 2611.5, 352.1 | LineTo 2589.1, 377 | CurveTo 2565.9, 402, 2576.8, 390.8, 2566.3, 402 | CurveTo 2565, 342.5, 2565.4, 402, 2565, 375.5 | LineTo 2565, 283 | LineTo 2536, 283 | LineTo 2536, 377.5 | ClosePath 1
Path9 = 2877, 377.5 | LineTo 2877, 472 | LineTo 2906, 472 | LineTo 2906, 441.5 | CurveTo 2906.8, 411, 2906, 424.7, 2906.4, 411 | CurveTo 2931.1, 441.5, 2907.3, 411, 2918.2, 424.7 | LineTo 2954.5, 471.9 | LineTo 2974.4, 472 | CurveTo 2992.9, 470.3, 2993.1, 472, 2994.2, 471.9 | CurveTo 2965.8, 437.8, 2992.1, 469.3, 2979.9, 454.7 | CurveTo 2940, 406.5, 2951.6, 420.9, 2940, 406.8 | CurveTo 2973.9, 370.1, 2940, 405.7, 2950.6, 394.3 | LineTo 2991.2, 352 | LineTo 2971.9, 352 | LineTo 2952.5, 352.1 | LineTo 2930.1, 377 | CurveTo 2906.9, 402, 2917.8, 390.8, 2907.3, 402 | CurveTo 2906, 342.5, 2906.4, 402, 2906, 375.5 | LineTo 2906, 283 | LineTo 2877, 283 | LineTo 2877, 377.5 | ClosePath 1
Path10 = 2773.1, 293.1 | CurveTo 2729, 342.4, 2746.3, 299.1, 2729, 318.4 | CurveTo 2757.5, 386.4, 2729, 362.4, 2738.8, 377.6 | CurveTo 2778.9, 394.5, 2760.2, 387.7, 2769.9, 391.4 | CurveTo 2799.2, 402.1, 2787.9, 397.6, 2797.1, 401 | CurveTo 2812.7, 414.7, 2804.6, 404.9, 2811.1, 410.9 | CurveTo 2812.5, 433.4, 2814.5, 419, 2814.4, 428.9 | CurveTo 2797.4, 447, 2810.2, 438.9, 2804, 444.5 | CurveTo 2767, 446.9, 2788.9, 450.3, 2776, 450.2 | CurveTo 2746.7, 433.8, 2759.2, 443.9, 2749.7, 437.8 | CurveTo 2743.7, 431, 2745.6, 432.3, 2744.2, 431 | CurveTo 2722, 451.7, 2742.3, 431, 2722, 450.3 | CurveTo 2742.5, 467.4, 2722, 453.8, 2734.8, 463.7 | CurveTo 2782.5, 475.5, 2756.2, 474.1, 2763.3, 475.5 | CurveTo 2807.6, 472.7, 2798.2, 475.4, 2800.1, 475.2 | CurveTo 2840.5, 445.8, 2822.6, 467.7, 2834.3, 458.1 | CurveTo 2845.8, 417.1, 2845, 436.8, 2846.3, 429.8 | CurveTo 2833.1, 388, 2845.4, 403.6, 2842.7, 397.5 | CurveTo 2796.9, 369.2, 2824.8, 379.7, 2818.6, 376.5 | CurveTo 2774.4, 360.7, 2787.3, 365.9, 2777.1, 362.1 | CurveTo 2761.4, 338.2, 2765, 355.9, 2760.1, 347.5 | CurveTo 2776, 320.1, 2762.5, 330, 2767.1, 324.3 | CurveTo 2792, 317.5, 2780.8, 317.8, 2782.8, 317.5 | CurveTo 2810.1, 321.2, 2802.2, 317.5, 2802.9, 317.6 | CurveTo 2821.2, 328.4, 2814.2, 323.2, 2819.2, 326.5 | LineTo 2824.8, 331.9 | LineTo 2835, 320.7 | LineTo 2845.2, 309.6 | LineTo 2841.4, 306.2 | CurveTo 2813, 293, 2835.8, 301.4, 2822.8, 295.4 | CurveTo 2773.1, 293.1, 2801.9, 290.4, 2784.9, 290.4 | ClosePath 1
Path11 = 663, 383.4 | LineTo 663, 472 | LineTo 694, 472 | LineTo 694, 399.3 | LineTo 713.8, 398.7 | CurveTo 741, 396.6, 724.6, 398.3, 736.9, 397.4 | CurveTo 786.7, 341.6, 772.5, 390.7, 788.8, 371.1 | CurveTo 760.6, 302.4, 785.3, 322.9, 776.8, 310.1 | CurveTo 700.8, 295.3, 748.1, 296.4, 742.8, 295.8 | LineTo 663, 294.8 | LineTo 663, 383.4 | ClosePath 1
Path12 = 724.1, 321.9 | CurveTo 749.9, 331.6, 738.3, 323, 744.4, 325.3 | CurveTo 749.2, 362.3, 757.2, 339.9, 756.9, 354.2 | CurveTo 710.3, 372, 742.4, 369.5, 732.3, 372 | LineTo 694, 372 | LineTo 694, 321 | LineTo 703.3, 321 | CurveTo 724.1, 321.9, 708.3, 321, 717.7, 321.5 | ClosePath 1
Path13 = 2117, 383.6 | LineTo 2117, 472.2 | LineTo 2156.8, 471.7 | CurveTo 2217, 465.9, 2198.7, 471.2, 2201.1, 471 | CurveTo 2274, 407.5, 2245.4, 456.7, 2267, 434.5 | CurveTo 2273.3, 355.2, 2277.9, 392.5, 2277.6, 370.1 | CurveTo 2211.7, 299.1, 2265.3, 327.1, 2242.9, 306.8 | CurveTo 2151.8, 295, 2197.9, 295.7, 2187.9, 295 | LineTo 2117, 295 | LineTo 2117, 383.6 | ClosePath 1
Path14 = 2191.5, 323.5 | CurveTo 2205.8, 326.4, 2197, 324.3, 2203.4, 325.6 | CurveTo 2242.7, 387.4, 2231.9, 335.7, 2244.1, 355.9 | CurveTo 2225.7, 427.6, 2241.9, 405.8, 2237.2, 416.9 | CurveTo 2167.3, 444, 2212.7, 439.6, 2197.3, 444 | LineTo 2148, 444 | LineTo 2148, 322 | LineTo 2164.8, 322 | CurveTo 2191.5, 323.5, 2174, 322, 2186, 322.7 | ClosePath 1
Path15 = 853.8, 350.5 | CurveTo 806, 411.5, 825, 357.8, 806, 381.9 | CurveTo 853.5, 473.1, 806, 440.9, 824.7, 465.2 | CurveTo 893, 472.1, 864.1, 476, 883.1, 475.5 | CurveTo 929.5, 440.5, 909.5, 466.4, 922.5, 455.2 | CurveTo 936, 411.5, 934.7, 429.7, 936, 423.9 | CurveTo 929.9, 383.3, 936, 399.3, 934.7, 393.4 | CurveTo 894.3, 352.3, 922.9, 368.7, 910.5, 357.9 | CurveTo 873, 349.4, 887.6, 350, 884.6, 349.6 | CurveTo 853.8, 350.5, 863.7, 349.1, 857.7, 349.5 | ClosePath 1
Path16 = 885.3, 375.9 | CurveTo 905.7, 415, 899, 382.5, 907.1, 398.1 | CurveTo 890.4, 444.3, 904.7, 427.3, 899, 438.2 | CurveTo 870.9, 449.9, 883.9, 448.9, 880.6, 449.8 | CurveTo 857.1, 447.4, 863.6, 450, 861.6, 449.6 | CurveTo 840.8, 430.4, 849.5, 443.6, 844.6, 438.4 | CurveTo 837.5, 411.5, 837.6, 423.8, 837.5, 423 | CurveTo 840.1, 393.9, 837.5, 400.6, 837.7, 399 | CurveTo 861.3, 374.4, 844.7, 384.2, 852.1, 377.4 | CurveTo 885.3, 375.9, 867.3, 372.4, 879.8, 373.2 | ClosePath 1
Path17 = 1206.5, 350.6 | CurveTo 1161.4, 399, 1183.6, 356.2, 1165.8, 375.1 | CurveTo 1168.8, 446.9, 1158.3, 415.1, 1161.2, 434 | CurveTo 1205.6, 473, 1175.7, 458.8, 1190.3, 469.1 | CurveTo 1255.2, 468.9, 1220.8, 476.9, 1242.9, 475.1 | CurveTo 1272.8, 455.2, 1261.5, 465.8, 1269.2, 459.7 | LineTo 1275.9, 451.3 | LineTo 1266.9, 444.1 | CurveTo 1256.6, 436.4, 1262, 440.2, 1257.3, 436.7 | CurveTo 1252.7, 439.2, 1255.8, 436.1, 1254.1, 437.3 | CurveTo 1220.8, 450.6, 1246.7, 446.9, 1232.9, 451.9 | CurveTo 1190.7, 425.2, 1205.9, 449.1, 1193.2, 438.3 | LineTo 1190.1, 422 | LineTo 1281, 422 | LineTo 1281.1, 419.2 | CurveTo 1239.5, 350.5, 1282.9, 383, 1267.6, 357.7 | CurveTo 1206.5, 350.6, 1232, 348.6, 1214.6, 348.7 | ClosePath 1
Path18 = 1232.9, 372.6 | CurveTo 1250.7, 394.6, 1242.6, 375.4, 1249.6, 384.2 | LineTo 1251.3, 400 | LineTo 1189.8, 400 | LineTo 1190.5, 396.7 | CurveTo 1193.7, 388.2, 1190.9, 395, 1192.3, 391.1 | CurveTo 1232.9, 372.6, 1199.9, 375.1, 1217.6, 368 | ClosePath 1
Path19 = 1362, 350.6 | CurveTo 1340.7, 369.5, 1353.5, 353.7, 1345.2, 361 | CurveTo 1339, 362.2, 1339.1, 372.4, 1339.1, 372.2 | LineTo 1339, 352 | LineTo 1310, 352 | LineTo 1310, 472 | LineTo 1339.9, 472 | LineTo 1340.2, 435.7 | LineTo 1340.5, 399.5 | LineTo 1343.1, 393.9 | CurveTo 1357.2, 378.3, 1346, 387.7, 1352, 381.1 | CurveTo 1370.7, 376.5, 1359.7, 376.9, 1362.8, 376.5 | LineTo 1380.9, 376.5 | LineTo 1381.5, 371.5 | CurveTo 1381.8, 358, 1381.9, 368.7, 1382, 362.7 | LineTo 1381.5, 349.5 | LineTo 1374, 349.3 | CurveTo 1362, 350.6, 1369.2, 349.1, 1364.9, 349.6 | ClosePath 1
Path20 = 1440.5, 350.6 | CurveTo 1395.4, 399, 1417.6, 356.2, 1399.8, 375.1 | CurveTo 1402.8, 446.9, 1392.3, 415.1, 1395.2, 434 | CurveTo 1439.6, 473, 1409.7, 458.8, 1424.3, 469.1 | CurveTo 1489.2, 468.9, 1454.8, 476.9, 1476.9, 475.1 | CurveTo 1506.8, 455.2, 1495.5, 465.8, 1503.2, 459.7 | LineTo 1509.9, 451.3 | LineTo 1500.9, 444.1 | CurveTo 1490.6, 436.4, 1496, 440.2, 1491.3, 436.7 | CurveTo 1486.7, 439.2, 1489.8, 436.1, 1488.1, 437.3 | CurveTo 1454.8, 450.6, 1480.7, 446.9, 1466.9, 451.9 | CurveTo 1424.7, 425.2, 1439.9, 449.1, 1427.2, 438.3 | LineTo 1424.1, 422 | LineTo 1515, 422 | LineTo 1515.1, 419.2 | CurveTo 1473.5, 350.5, 1516.9, 383, 1501.6, 357.7 | CurveTo 1440.5, 350.6, 1466, 348.6, 1448.6, 348.7 | ClosePath 1
Path21 = 1466.9, 372.6 | CurveTo 1484.7, 394.6, 1476.6, 375.4, 1483.6, 384.2 | LineTo 1485.3, 400 | LineTo 1423.8, 400 | LineTo 1424.5, 396.7 | CurveTo 1427.7, 388.2, 1424.9, 395, 1426.3, 391.1 | CurveTo 1466.9, 372.6, 1433.9, 375.1, 1451.6, 368 | ClosePath 1
Path22 = 2335.6, 351.1 | CurveTo 2321.5, 356, 2331.3, 352.1, 2325, 354.3 | CurveTo 2305, 367.5, 2314.6, 359.3, 2305, 366 | CurveTo 2320, 385, 2305, 368.8, 2318.9, 385 | CurveTo 2323.7, 382.6, 2320.5, 385, 2322.1, 383.9 | CurveTo 2344, 372.9, 2328, 378.9, 2338, 374.2 | CurveTo 2373.9, 379.3, 2354.4, 370.7, 2367.6, 373.5 | CurveTo 2380, 393.1, 2377.1, 382.3, 2380, 388.7 | LineTo 2380, 396.7 | LineTo 2366.7, 397.4 | CurveTo 2301.3, 421.8, 2330.3, 399.3, 2310, 406.8 | CurveTo 2298.2, 435.6, 2299, 425.7, 2298.5, 427.8 | CurveTo 2306.1, 460.4, 2297.7, 447.5, 2299.3, 452.7 | CurveTo 2329.9, 473.6, 2312.1, 467, 2320.1, 471.5 | CurveTo 2375.6, 461.8, 2348, 477.4, 2365.1, 473 | CurveTo 2380.5, 457, 2378, 459.2, 2380.3, 457 | CurveTo 2381, 464.5, 2380.8, 457, 2381, 460.4 | LineTo 2381, 472 | LineTo 2407.8, 472 | LineTo 2408.5, 456.7 | CurveTo 2406.6, 383.2, 2409.6, 433.3, 2408.4, 390.8 | CurveTo 2373.3, 350.6, 2402.3, 366.1, 2391.3, 355.2 | CurveTo 2335.6, 351.1, 2364.6, 348.3, 2345.8, 348.6 | ClosePath 1
Path23 = 2379.8, 423.7 | CurveTo 2347.1, 451.8, 2378.4, 442.6, 2366.5, 452.8 | CurveTo 2328, 437.2, 2334.3, 451.2, 2328, 446.4 | CurveTo 2335.5, 424.4, 2328, 431.3, 2330.2, 427.6 | CurveTo 2373.9, 417.1, 2343.8, 419.6, 2354.4, 417.6 | LineTo 2380.3, 417 | LineTo 2379.8, 423.7 | ClosePath 1
Path24 = 2496, 350.6 | CurveTo 2474.7, 369.5, 2487.5, 353.7, 2479.2, 361 | CurveTo 2473, 362.2, 2473.1, 372.4, 2473.1, 372.2 | LineTo 2473, 352 | LineTo 2444, 352 | LineTo 2444, 472 | LineTo 2473.9, 472 | LineTo 2474.2, 435.7 | LineTo 2474.5, 399.5 | LineTo 2477.1, 393.9 | CurveTo 2491.2, 378.3, 2480, 387.7, 2486, 381.1 | CurveTo 2504.7, 376.5, 2493.7, 376.9, 2496.8, 376.5 | LineTo 2514.9, 376.5 | LineTo 2515.5, 371.5 | CurveTo 2515.8, 358, 2515.9, 368.7, 2516, 362.7 | LineTo 2515.5, 349.5 | LineTo 2508, 349.3 | CurveTo 2496, 350.6, 2503.2, 349.1, 2498.9, 349.6 | ClosePath 1
Path25 = 956.1, 372.2 | CurveTo 976.8, 432, 959.9, 383.4, 969.3, 410.3 | LineTo 990.6, 471.5 | LineTo 1021.4, 471.5 | LineTo 1034.5, 431 | CurveTo 1048.1, 389, 1041.7, 408.7, 1047.8, 389.8 | CurveTo 1050.3, 392.5, 1048.5, 388.1, 1049.3, 389.5 | CurveTo 1064, 434.7, 1051.2, 395.2, 1057.3, 414.3 | LineTo 1076.1, 472 | LineTo 1106.5, 472 | LineTo 1119.4, 434.7 | CurveTo 1140.1, 374.7, 1126.5, 414.3, 1135.8, 387.3 | LineTo 1148, 351.9 | LineTo 1132.3, 352.2 | LineTo 1116.6, 352.5 | LineTo 1104.1, 394.7 | CurveTo 1091, 437, 1097.2, 418, 1091.3, 437 | CurveTo 1066.2, 356.7, 1090.5, 437, 1075.6, 388.6 | LineTo 1064.8, 352 | LineTo 1048.7, 352.2 | LineTo 1032.6, 352.5 | LineTo 1020, 394.8 | CurveTo 1006.8, 437.5, 1013, 418, 1007.1, 437.3 | CurveTo 994, 395, 1006.6, 437.7, 1000.8, 418.6 | LineTo 981.5, 352 | LineTo 949.1, 352 | LineTo 956.1, 372.2 | ClosePath 1
Path26 = 1906.3, 352.7 | CurveTo 1957, 472.3, 1908.1, 355.7, 1957, 471.2 | CurveTo 1945.8, 498.6, 1957, 474.6, 1948.5, 494.7 | CurveTo 1922.3, 505.1, 1941.6, 504.9, 1931.4, 507.7 | CurveTo 1918.6, 508.3, 1919.2, 504.2, 1919.2, 504.2 | CurveTo 1917.9, 530.4, 1917.2, 518.9, 1916.8, 529.7 | CurveTo 1927.3, 531.7, 1918.5, 530.8, 1922.7, 531.4 | CurveTo 1953.9, 527.7, 1937, 532.4, 1947.2, 530.9 | CurveTo 1973.2, 507, 1960.8, 524.5, 1968.9, 515.8 | CurveTo 2033.7, 353.2, 1976, 501.4, 2008.7, 418.2 | CurveTo 2018.5, 352.2, 2034.1, 352.2, 2030.9, 352 | LineTo 2002.7, 352.5 | LineTo 1988.1, 395.7 | CurveTo 1973, 439, 1980.1, 419.5, 1973.3, 439 | CurveTo 1956, 395.7, 1972.7, 439, 1965.1, 419.5 | LineTo 1939.5, 352.5 | LineTo 1922.7, 352.2 | CurveTo 1906.3, 352.7, 1913.4, 352.1, 1906.1, 352.3 | ClosePath 1
Path27 = 2994.3, 352.7 | CurveTo 3045, 472.3, 2996.1, 355.7, 3045, 471.2 | CurveTo 3033.8, 498.6, 3045, 474.6, 3036.5, 494.7 | CurveTo 3010.3, 505.1, 3029.6, 504.9, 3019.4, 507.7 | CurveTo 3006.6, 508.3, 3007.2, 504.2, 3007.2, 504.2 | CurveTo 3005.9, 530.4, 3005.2, 518.9, 3004.8, 529.7 | CurveTo 3015.3, 531.7, 3006.5, 530.8, 3010.7, 531.4 | CurveTo 3041.9, 527.7, 3025, 532.4, 3035.2, 530.9 | CurveTo 3061.2, 507, 3048.8, 524.5, 3056.9, 515.8 | CurveTo 3121.7, 353.2, 3064, 501.4, 3096.7, 418.2 | CurveTo 3106.5, 352.2, 3122.1, 352.2, 3118.9, 352 | LineTo 3090.7, 352.5 | LineTo 3076.1, 395.7 | CurveTo 3061, 439, 3068.1, 419.5, 3061.3, 439 | CurveTo 3044, 395.7, 3060.7, 439, 3053.1, 419.5 | LineTo 3027.5, 352.5 | LineTo 3010.7, 352.2 | CurveTo 2994.3, 352.7, 3001.4, 352.1, 2994.1, 352.3 | ClosePath 1
Fill=Fill Color #colorAccent#

; Dummy Meters (to avoid log errors)
[0Icon]
Meter=Image

[0Label]
Meter=Image

[0Value]
Meter=Image

[0LeftIcon]
Meter=Image

[0LeftMouseRegion]
Meter=Image

[0RightIcon]
Meter=Image

[0Background]
Meter=Image



