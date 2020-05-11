[Variables]
;#SizeRatio#-Everything will be scaled properly based on the SizeRatio, meaning this value controls the size of the switch and everything else.
SizeRatio=200

;#SwitchBackgroundColorOn#-This value will determine the color of the background when bluetooth is on.
SwitchBackgroundColorOn=132,242,255

;#SwitchBackgroundColorOff#-This value will determine the color of the background when bluetooth is off.
;Transition between #SwitchBackgroundColorOff# and #SwitchBackgroundColorOn# will be animated as long as animations are not disabled (see #AnimationsOrNo#).
SwitchBackgroundColorOff=156,166,183

;#FlipColorOn#-This value will determine the color of the circle when bluetooth is on.
FlipColorOn=146,222,148

;#FlipColorOff#-This value will determine the color of the circle when bluetooth is off.
;Transition between #FlipColorOff# and #FlipColorOn# will be animated as long as animations are not disabled (see #AnimationsOrNo#).
FlipColorOff=255,30,134

;#TextFont#-The text font to be used for the ON OFF text. to use custom font put the .tff file under "@Resources\Fonts\" and then use his name as this value.
TextFont=Magnum

;#TextColorOn#-"ON" text color.
TextColorOn=0,0,0

;#TextColorOn#-"OFF" text color.
TextColorOff=0,0,0

;#AnimationTween#-The type of tween that will be used to animate everything. A list with all possible tweens can be found here-https://easings.net
AnimationTween=incubic

;#AnimationDuration#-The duration for the animation. don't take this value under 200, or else it will look bad and glitchy. if you are not intrested in animations take a look at #AnimationsOrNo#. the duration of the animation won't effect the time it takes to turn on and off the bluetooth
AnimationDuration=450

;#AnimationsOrNo1#-If you don't want animations change #AnimationsOrNo1# from #animations1# to #noanimations1#. Make sure to do the same thing with #AnimationsOrNo2#
AnimationsOrNo1=#animations1#

;#AnimationsOrNo1#-If you don't want animations change #AnimationsOrNo2# from #animations2# to #noanimations2#. Make sure to do the same thing with #AnimationsOrNo1#
AnimationsOrNo2=#animations2#

;#OpenDevicesAfterBluetoothTurnedOn#-When this is set to #BT_OpenBluetoothDevices# after turnning bluetooth on the bluetooth deviced section in settings will be opened too. If you don't want it to open the settings just start the line with a-; to comment it out.
;OpenDevicesAfterBluetoothTurnedOn=#BT_OpenBluetoothDevices#

;Skin refresh is required to apply the settings