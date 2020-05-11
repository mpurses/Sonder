; ----------------------------------------------------------------------------------------------------
; COLORPICKERPLUS ICONS
; These are shape meters converted from FontAwesome SVG files, using the VectorConverter skin.
; https://forum.rainmeter.net/viewtopic.php?f=27&t=25334

; ------------------------------
; HEADER ICONS

[StyleIcon_Ellipsis]
Shape=Rectangle 0,0,[#CURRENTSECTION#:W],[#CURRENTSECTION#:H] | StrokeWidth 0 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Path Path3 | StrokeWidth 0
Shape5=Combine Shape2 | XOR Shape3 | XOR Shape4 | Scale 0.0243056,0.0243056,0,0 | Offset 0.75,0
Path1=328, 256 | CurveTo 256, 328, 328, 295.8, 295.8, 328 | CurveTo 184, 256, 216.2, 328, 184, 295.8 | CurveTo 256, 184, 184, 216.2, 216.2, 184 | CurveTo 328, 256, 295.8, 184, 328, 216.2 | ClosePath 1
Path2=432, 184 | CurveTo 360, 256, 392.2, 184, 360, 216.2 | CurveTo 432, 328, 360, 295.8, 392.2, 328 | CurveTo 504, 256, 471.8, 328, 504, 295.8 | CurveTo 432, 184, 504, 216.2, 471.8, 184 | ClosePath 1
Path3=80, 184 | CurveTo 8, 256, 40.2, 184, 8, 216.2 | CurveTo 80, 328, 8, 295.8, 40.2, 328 | CurveTo 152, 256, 119.8, 328, 152, 295.8 | CurveTo 80, 184, 152, 216.2, 119.8, 184 | ClosePath 1

[StyleIcon_WindowMinimize]
Meter=Shape
Shape=Rectangle 0,0,[#CURRENTSECTION#:W],[#CURRENTSECTION#:H] | StrokeWidth 0 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Scale 0.0243056,0.0243056,0,0 | Offset 0.75,-344 | Extend Fill
Path1=464, 352 | LineTo 48, 352 | CurveTo 0, 400, 21.5, 352, 0, 373.5 | LineTo 0, 432 | CurveTo 48, 480, 0, 458.5, 21.5, 480 | LineTo 464, 480 | CurveTo 512, 432, 490.5, 480, 512, 458.5 | LineTo 512, 400 | CurveTo 464, 352, 512, 373.5, 490.5, 352 | ClosePath 1

[StyleIcon_WindowRestore]
Shape=Rectangle 0,0,[#CURRENTSECTION#:W],[#CURRENTSECTION#:H] | StrokeWidth 0 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Path Path3 | StrokeWidth 0
Shape5=Combine Shape2 | XOR Shape3 | XOR Shape4 | Scale 0.0243056,0.0243056,0,0 | Offset 0.75,0
Path1=512, 48 | LineTo 512, 336 | CurveTo 464, 384, 512, 362.5, 490.5, 384 | LineTo 416, 384 | LineTo 416, 176 | CurveTo 336, 96, 416, 131.9, 380.1, 96 | LineTo 128, 96 | LineTo 128, 48 | CurveTo 176, 0, 128, 21.5, 149.5, 0 | LineTo 464, 0 | CurveTo 512, 48, 490.5, 0, 512, 21.5 | ClosePath 1
Path2=384, 176 | LineTo 384, 464 | CurveTo 336, 512, 384, 490.5, 362.5, 512 | LineTo 48, 512 | CurveTo 0, 464, 21.5, 512, 0, 490.5 | LineTo 0, 176 | CurveTo 48, 128, 0, 149.5, 21.5, 128 | LineTo 336, 128 | CurveTo 384, 176, 362.5, 128, 384, 149.5 | ClosePath 1
Path3=316, 204 | CurveTo 304, 192, 316, 197.4, 310.6, 192 | LineTo 76, 192 | CurveTo 64, 204, 69.4, 192, 64, 197.4 | LineTo 64, 256 | LineTo 316, 256 | LineTo 316, 204 | ClosePath 1

[StyleIcon_WindowClose]
Shape=Rectangle 0,0,[#CURRENTSECTION#:W],[#CURRENTSECTION#:H] | StrokeWidth 0 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Combine Shape2 | XOR Shape3 | Scale 0.0243056,0.0243056,0,0 | Offset 0.75,0
Path1=464, 32 | LineTo 48, 32 | CurveTo 0, 80, 21.5, 32, 0, 53.5 | LineTo 0, 432 | CurveTo 48, 480, 0, 458.5, 21.5, 480 | LineTo 464, 480 | CurveTo 512, 432, 490.5, 480, 512, 458.5 | LineTo 512, 80 | CurveTo 464, 32, 512, 53.5, 490.5, 32 | ClosePath 1
Path2=380.4, 322.5 | CurveTo 380.4, 339.9, 385.2, 327.3, 385.2, 335.1 | LineTo 339.9, 380.4 | CurveTo 322.5, 380.4, 335.1, 385.2, 327.3, 385.2 | LineTo 256, 313.3 | LineTo 189.5, 380.4 | CurveTo 172.1, 380.4, 184.7, 385.2, 176.9, 385.2 | LineTo 131.6, 339.9 | CurveTo 131.6, 322.5, 126.8, 335.1, 126.8, 327.3 | LineTo 198.7, 256 | LineTo 131.6, 189.5 | CurveTo 131.6, 172.1, 126.8, 184.7, 126.8, 176.9 | LineTo 172.1, 131.6 | CurveTo 189.5, 131.6, 176.9, 126.8, 184.7, 126.8 | LineTo 256, 198.7 | LineTo 322.5, 131.6 | CurveTo 339.9, 131.6, 327.3, 126.8, 335.1, 126.8 | LineTo 380.4, 172.1 | CurveTo 380.4, 189.5, 385.2, 176.9, 385.2, 184.7 | LineTo 313.3, 256 | LineTo 380.4, 322.5 | ClosePath 1

; ------------------------------
; TOOLBAR ICONS

[StyleIcon_Copy]
Shape=Rectangle 0,0,[#CURRENTSECTION#:W],[#CURRENTSECTION#:H] | StrokeWidth 0 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Path Path3 | StrokeWidth 0
Shape5=Combine Shape2 | XOR Shape3 | XOR Shape4 | Scale 0.03125,0.03125,0,0 | Offset 2,0
Path1=320, 448 | LineTo 320, 488 | CurveTo 296, 512, 320, 501.255, 309.255, 512 | LineTo 24, 512 | CurveTo 0, 488, 10.745, 512, 0, 501.255 | LineTo 0, 120 | CurveTo 24, 96, 0, 106.745, 10.745, 96 | LineTo 96, 96 | LineTo 96, 392 | CurveTo 152, 448, 96, 422.879, 121.121, 448 | LineTo 320, 448 | ClosePath 1
Path2=320, 104 | LineTo 320, 0 | LineTo 152, 0 | CurveTo 128, 24, 138.745, 0, 128, 10.745 | LineTo 128, 392 | CurveTo 152, 416, 128, 405.255, 138.745, 416 | LineTo 424, 416 | CurveTo 448, 392, 437.255, 416, 448, 405.255 | LineTo 448, 128 | LineTo 344, 128 | CurveTo 320, 104, 330.8, 128, 320, 117.2 | ClosePath 1
Path3=440.971, 72.971 | LineTo 375.029, 7.029 | ArcTo 358.059, 0, 24, 24, 0, 1, 0 | LineTo 352, 0 | LineTo 352, 96 | LineTo 448, 96 | LineTo 448, 89.941 | ArcTo 440.971, 72.971, 24, 24, 0, 1, 0 | ClosePath 1

[StyleIcon_Eyedropper]
Meter=Shape
Shape=Rectangle 0,0,[#CURRENTSECTION#:W],[#CURRENTSECTION#:H] | StrokeWidth 0 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Combine Shape2 | XOR Shape3 | Scale 0.03125,0.03125,0,0 | Offset 1,0
Path1=50.75, 333.25 | CurveTo 32, 378.51, 38.75, 345.25, 32, 361.53 | LineTo 32, 424 | LineTo 0, 480 | LineTo 32, 512 | LineTo 88, 480 | LineTo 133.49, 480 | CurveTo 178.74, 461.26, 150.46, 480, 166.74, 473.26 | LineTo 305.38, 334.64 | LineTo 177.38, 206.64 | LineTo 50.75, 333.25 | ClosePath 1
Path2=483.88, 28.12 | CurveTo 348.13, 28.12, 446.41, -9.38, 385.6, -9.38 | LineTo 271.04, 105.21 | LineTo 257.94, 92.11 | CurveTo 224, 92.11, 248.5, 82.67, 233.29, 82.8 | LineTo 183.03, 133.08 | CurveTo 183.03, 167.02, 173.66, 142.45, 173.66, 157.65 | LineTo 344.97, 328.96 | CurveTo 378.91, 328.96, 354.41, 338.4, 369.62, 338.27 | LineTo 419.88, 288 | CurveTo 419.88, 254.06, 429.25, 278.63, 429.25, 263.43 | LineTo 406.78, 240.96 | LineTo 483.87, 163.87 | CurveTo 483.88, 28.12, 521.38, 126.39, 521.38, 65.61 | ClosePath 1

[StyleIcon_Sliders]
Shape=Rectangle 0,0,[#CURRENTSECTION#:W],[#CURRENTSECTION#:H] | StrokeWidth 0 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Path Path3 | StrokeWidth 0
Shape5=Combine Shape2 | XOR Shape3 | XOR Shape4 | Scale 0.03125,0.03125,0,0 | Offset 1,0
Path1=496, 384 | LineTo 160, 384 | LineTo 160, 368 | CurveTo 144, 352, 160, 359.2, 152.8, 352 | LineTo 112, 352 | CurveTo 96, 368, 103.2, 352, 96, 359.2 | LineTo 96, 384 | LineTo 16, 384 | CurveTo 0, 400, 7.2, 384, 0, 391.2 | LineTo 0, 432 | CurveTo 16, 448, 0, 440.8, 7.2, 448 | LineTo 96, 448 | LineTo 96, 464 | CurveTo 112, 480, 96, 472.8, 103.2, 480 | LineTo 144, 480 | CurveTo 160, 464, 152.8, 480, 160, 472.8 | LineTo 160, 448 | LineTo 496, 448 | CurveTo 512, 432, 504.8, 448, 512, 440.8 | LineTo 512, 400 | CurveTo 496, 384, 512, 391.2, 504.8, 384 | ClosePath 1
Path2=496, 224 | LineTo 416, 224 | LineTo 416, 208 | CurveTo 400, 192, 416, 199.2, 408.8, 192 | LineTo 368, 192 | CurveTo 352, 208, 359.2, 192, 352, 199.2 | LineTo 352, 224 | LineTo 16, 224 | CurveTo 0, 240, 7.2, 224, 0, 231.2 | LineTo 0, 272 | CurveTo 16, 288, 0, 280.8, 7.2, 288 | LineTo 352, 288 | LineTo 352, 304 | CurveTo 368, 320, 352, 312.8, 359.2, 320 | LineTo 400, 320 | CurveTo 416, 304, 408.8, 320, 416, 312.8 | LineTo 416, 288 | LineTo 496, 288 | CurveTo 512, 272, 504.8, 288, 512, 280.8 | LineTo 512, 240 | CurveTo 496, 224, 512, 231.2, 504.8, 224 | ClosePath 1
Path3=496, 64 | LineTo 288, 64 | LineTo 288, 48 | CurveTo 272, 32, 288, 39.2, 280.8, 32 | LineTo 240, 32 | CurveTo 224, 48, 231.2, 32, 224, 39.2 | LineTo 224, 64 | LineTo 16, 64 | CurveTo 0, 80, 7.2, 64, 0, 71.2 | LineTo 0, 112 | CurveTo 16, 128, 0, 120.8, 7.2, 128 | LineTo 224, 128 | LineTo 224, 144 | CurveTo 240, 160, 224, 152.8, 231.2, 160 | LineTo 272, 160 | CurveTo 288, 144, 280.8, 160, 288, 152.8 | LineTo 288, 128 | LineTo 496, 128 | CurveTo 512, 112, 504.8, 128, 512, 120.8 | LineTo 512, 80 | CurveTo 496, 64, 512, 71.2, 504.8, 64 | ClosePath 1

[StyleIcon_Refresh]
Shape=Rectangle 0,0,[#CURRENTSECTION#:W],[#CURRENTSECTION#:H] | StrokeWidth 0 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Combine Shape2 | XOR Shape3 | Scale 0.03125,0.03125,0,0 | Offset 1,0
Path1=370.72, 133.28 | CurveTo 255.848, 88, 339.458, 104.008, 298.888, 87.962 | CurveTo 93.057, 214.85, 178.39, 88.068, 111.52, 141.178 | CurveTo 81.406, 224, 91.713, 220.213, 86.935, 224 | LineTo 24.103, 224 | CurveTo 12.296, 209.824, 16.605, 224, 10.909, 217.193 | CurveTo 256, 8, 33.933, 94.924, 134.813, 8 | CurveTo 427.315, 76.685, 322.448, 8, 382.791, 34.136 | LineTo 463.03, 40.97 | CurveTo 504, 57.941, 478.149, 25.851, 504, 36.559 | LineTo 504, 192 | CurveTo 480, 216, 504, 205.255, 493.255, 216 | LineTo 345.941, 216 | CurveTo 328.97, 175.029, 324.559, 216, 313.851, 190.149 | LineTo 370.72, 133.28 | ClosePath 1
Path2=32, 296 | LineTo 166.059, 296 | CurveTo 183.03, 336.971, 187.441, 296, 198.149, 321.851 | LineTo 141.28, 378.721 | CurveTo 256.156, 424.001, 172.542, 407.994, 213.115, 424.04 | CurveTo 418.943, 297.152, 333.574, 423.931, 400.471, 370.857 | CurveTo 430.594, 288.002, 420.287, 291.789, 425.065, 288.002 | LineTo 487.898, 288.002 | CurveTo 499.705, 302.178, 495.396, 288.002, 501.092, 294.809 | CurveTo 256, 504, 478.067, 417.076, 377.187, 504 | CurveTo 84.685, 435.315, 189.552, 504, 129.209, 477.864 | LineTo 48.97, 471.03 | CurveTo 8, 454.059, 33.851, 486.149, 8, 475.441 | LineTo 8, 320 | CurveTo 32, 296, 8, 306.745, 18.745, 296 | ClosePath 1

[StyleIcon_Save]
Shape=Rectangle 0,0,[#CURRENTSECTION#:W],[#CURRENTSECTION#:H] | StrokeWidth 0 | Fill Color #colorBg#
Shape2=Path Path1 | StrokeWidth 0 | Extend Fill
Shape3=Path Path2 | StrokeWidth 0
Shape4=Path Path3 | StrokeWidth 0
Shape5=Combine Shape2 | XOR Shape3 | XOR Shape4 | Scale 0.03125,0.03125,0,0 | Offset 2,0
Path1=433.941, 129.941 | LineTo 350.059, 46.059 | ArcTo 316.118, 32, 48, 48, 0, 1, 0 | LineTo 48, 32 | CurveTo 0, 80, 21.49, 32, 0, 53.49 | LineTo 0, 432 | CurveTo 48, 480, 0, 458.51, 21.49, 480 | LineTo 400, 480 | CurveTo 448, 432, 426.51, 480, 448, 458.51 | LineTo 448, 163.882 | ArcTo 433.941, 129.941, 48, 48, 0, 1, 0 | ClosePath 1
Path2=224, 416 | CurveTo 160, 352, 188.654, 416, 160, 387.346 | CurveTo 224, 288, 160, 316.654, 188.654, 288 | CurveTo 288, 352, 259.346, 288, 288, 316.654 | CurveTo 224, 416, 288, 387.346, 259.346, 416 | ClosePath 1
Path3=320, 111.48 | LineTo 320, 212 | CurveTo 308, 224, 320, 218.627, 314.627, 224 | LineTo 76, 224 | CurveTo 64, 212, 69.373, 224, 64, 218.627 | LineTo 64, 108 | CurveTo 76, 96, 64, 101.373, 69.373, 96 | LineTo 304.52, 96 | CurveTo 313.005, 99.515, 307.703, 96, 310.755, 97.264 | LineTo 316.485, 102.995 | ArcTo 320, 111.48, 11.996, 11.996, 0, 0, 0 | ClosePath 1

; ------------------------------
; OTHER ICONS

[StyleIcon_Cursor]
Meter=Shape
Shape=Path Path1 | StrokeWidth 1 | Scale 0.18,0.18,0,0 | Offset 0.25,0 | Stroke Color 220,220,220,255 | Fill Color 255,255,255
Path1=21, 10 | LineTo 41, 45 | LineTo 1, 45 | ClosePath 1
