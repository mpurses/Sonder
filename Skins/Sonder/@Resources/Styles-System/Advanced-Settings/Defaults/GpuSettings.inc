[Variables]
showGpuName=1
showMemoryClock=1
showFanInfo=1
showMemoryController=1
showVideoClock=1
showCoreVoltage=1
showLineGraph=1
showTempGraph=1

gpuName=auto

useManualMaxVram=0
maxVram=5192
maxGpuTemp=100

colorCoreUsage=255,246,42
colorMemoryUsage=107,198,250
colorFanUsage=107,238,98
colorMemoryController=255,204,0
colorTempGraph=200,0,0

; ===== HWiNFO =====

; 
; GPU 0
; 
; GPU Clock [HWiNFO-GPU0-Clock]
HWiNFO-GPU0-Clock-SensorId=0xe0002000
HWiNFO-GPU0-Clock-SensorInstance=0x0
HWiNFO-GPU0-Clock-EntryId=0x6000000
; GPU Temperature [HWiNFO-GPU0-Temp]
HWiNFO-GPU0-Temp-SensorId=#HWiNFO-GPU0-Clock-SensorId#
HWiNFO-GPU0-Temp-SensorInstance=#HWiNFO-GPU0-Clock-SensorInstance#
HWiNFO-GPU0-Temp-EntryId=0x1000000
; GPU Load [HWiNFO-GPU0-CoreLoad]
HWiNFO-GPU0-CoreLoad-SensorId=#HWiNFO-GPU0-Clock-SensorId#
HWiNFO-GPU0-CoreLoad-SensorInstance=#HWiNFO-GPU0-Clock-SensorInstance#
HWiNFO-GPU0-CoreLoad-EntryId=0x7000000
; Memory Clock Frequency [HWiNFO-GPU0-MemoryClock]
HWiNFO-GPU0-MemoryClock-SensorId=#HWiNFO-GPU0-Clock-SensorId#
HWiNFO-GPU0-MemoryClock-SensorInstance=#HWiNFO-GPU0-Clock-SensorInstance#
HWiNFO-GPU0-MemoryClock-EntryId=0x6000004
; Memory Usage [HWiNFO-GPU0-MemoryUsage]
HWiNFO-GPU0-MemoryUsage-SensorId=#HWiNFO-GPU0-Clock-SensorId#
HWiNFO-GPU0-MemoryUsage-SensorInstance=#HWiNFO-GPU0-Clock-SensorInstance#
HWiNFO-GPU0-MemoryUsage-EntryId=0x7000008
; Memory Allocated [HWiNFO-GPU0-MemoryAlloc]
HWiNFO-GPU0-MemoryAlloc-SensorId=#HWiNFO-GPU0-Clock-SensorId#
HWiNFO-GPU0-MemoryAlloc-SensorInstance=#HWiNFO-GPU0-Clock-SensorInstance#
HWiNFO-GPU0-MemoryAlloc-EntryId=0x80000fc
; Fan Speed [HWiNFO-GPU0-FanSpeed]
HWiNFO-GPU0-FanSpeed-SensorId=#HWiNFO-GPU0-Clock-SensorId#
HWiNFO-GPU0-FanSpeed-SensorInstance=#HWiNFO-GPU0-Clock-SensorInstance#
HWiNFO-GPU0-FanSpeed-EntryId=0x3000000
; Fan Usage [HWiNFO-GPU0-FanUsage]
HWiNFO-GPU0-FanUsage-SensorId=#HWiNFO-GPU0-Clock-SensorId#
HWiNFO-GPU0-FanUsage-SensorInstance=#HWiNFO-GPU0-Clock-SensorInstance#
HWiNFO-GPU0-FanUsage-EntryId=0x8000000
; Video Clock Frequency [HWiNFO-GPU0-VideoClock]
HWiNFO-GPU0-VideoClock-SensorId=#HWiNFO-GPU0-Clock-SensorId#
HWiNFO-GPU0-VideoClock-SensorInstance=#HWiNFO-GPU0-Clock-SensorInstance#
HWiNFO-GPU0-VideoClock-EntryId=0x6000005
; Memory Controller Usage [HWiNFO-GPU0-MemController]
HWiNFO-GPU0-MemController-SensorId=#HWiNFO-GPU0-Clock-SensorId#
HWiNFO-GPU0-MemController-SensorInstance=#HWiNFO-GPU0-Clock-SensorInstance#
HWiNFO-GPU0-MemController-EntryId=0x7000001
; Core Voltage [HWiNFO-GPU0-CoreVoltage]
HWiNFO-GPU0-CoreVoltage-SensorId=#HWiNFO-GPU0-Clock-SensorId#
HWiNFO-GPU0-CoreVoltage-SensorInstance=#HWiNFO-GPU0-Clock-SensorInstance#
HWiNFO-GPU0-CoreVoltage-EntryId=0x2000000
; 
; GPU 1
; 
; GPU Clock [HWiNFO-GPU1-Clock]
HWiNFO-GPU1-Clock-SensorId=0xe0002000
HWiNFO-GPU1-Clock-SensorInstance=0x0
HWiNFO-GPU1-Clock-EntryId=0x6000000
; GPU Temperature [HWiNFO-GPU1-Temp]
HWiNFO-GPU1-Temp-SensorId=#HWiNFO-GPU1-Clock-SensorId#
HWiNFO-GPU1-Temp-SensorInstance=#HWiNFO-GPU1-Clock-SensorInstance#
HWiNFO-GPU1-Temp-EntryId=0x1000000
; GPU Load [HWiNFO-GPU1-CoreLoad]
HWiNFO-GPU1-CoreLoad-SensorId=#HWiNFO-GPU1-Clock-SensorId#
HWiNFO-GPU1-CoreLoad-SensorInstance=#HWiNFO-GPU1-Clock-SensorInstance#
HWiNFO-GPU1-CoreLoad-EntryId=0x7000000
; Memory Clock Frequency [HWiNFO-GPU1-MemoryClock]
HWiNFO-GPU1-MemoryClock-SensorId=#HWiNFO-GPU1-Clock-SensorId#
HWiNFO-GPU1-MemoryClock-SensorInstance=#HWiNFO-GPU1-Clock-SensorInstance#
HWiNFO-GPU1-MemoryClock-EntryId=0x6000004
; Memory Usage [HWiNFO-GPU1-MemoryUsage]
HWiNFO-GPU1-MemoryUsage-SensorId=#HWiNFO-GPU1-Clock-SensorId#
HWiNFO-GPU1-MemoryUsage-SensorInstance=#HWiNFO-GPU1-Clock-SensorInstance#
HWiNFO-GPU1-MemoryUsage-EntryId=0x7000008
; Memory Allocated [HWiNFO-GPU1-MemoryAlloc]
HWiNFO-GPU1-MemoryAlloc-SensorId=#HWiNFO-GPU1-Clock-SensorId#
HWiNFO-GPU1-MemoryAlloc-SensorInstance=#HWiNFO-GPU1-Clock-SensorInstance#
HWiNFO-GPU1-MemoryAlloc-EntryId=0x80000fc
; Fan Speed [HWiNFO-GPU1-FanSpeed]
HWiNFO-GPU1-FanSpeed-SensorId=#HWiNFO-GPU1-Clock-SensorId#
HWiNFO-GPU1-FanSpeed-SensorInstance=#HWiNFO-GPU1-Clock-SensorInstance#
HWiNFO-GPU1-FanSpeed-EntryId=0x3000000
; Fan Usage [HWiNFO-GPU1-FanUsage]
HWiNFO-GPU1-FanUsage-SensorId=#HWiNFO-GPU1-Clock-SensorId#
HWiNFO-GPU1-FanUsage-SensorInstance=#HWiNFO-GPU1-Clock-SensorInstance#
HWiNFO-GPU1-FanUsage-EntryId=0x8000000
; Video Clock Frequency [HWiNFO-GPU1-VideoClock]
HWiNFO-GPU1-VideoClock-SensorId=#HWiNFO-GPU1-Clock-SensorId#
HWiNFO-GPU1-VideoClock-SensorInstance=#HWiNFO-GPU1-Clock-SensorInstance#
HWiNFO-GPU1-VideoClock-EntryId=0x6000005
; Memory Controller Usage [HWiNFO-GPU1-MemController]
HWiNFO-GPU1-MemController-SensorId=#HWiNFO-GPU1-Clock-SensorId#
HWiNFO-GPU1-MemController-SensorInstance=#HWiNFO-GPU1-Clock-SensorInstance#
HWiNFO-GPU1-MemController-EntryId=0x7000001
; Core Voltage [HWiNFO-GPU1-CoreVoltage]
HWiNFO-GPU1-CoreVoltage-SensorId=#HWiNFO-GPU1-Clock-SensorId#
HWiNFO-GPU1-CoreVoltage-SensorInstance=#HWiNFO-GPU1-Clock-SensorInstance#
HWiNFO-GPU1-CoreVoltage-EntryId=0x2000000
; 
; GPU 2
; 
; GPU Clock [HWiNFO-GPU2-Clock]
HWiNFO-GPU2-Clock-SensorId=0xe0002000
HWiNFO-GPU2-Clock-SensorInstance=0x0
HWiNFO-GPU2-Clock-EntryId=0x6000000
; GPU Temperature [HWiNFO-GPU2-Temp]
HWiNFO-GPU2-Temp-SensorId=#HWiNFO-GPU2-Clock-SensorId#
HWiNFO-GPU2-Temp-SensorInstance=#HWiNFO-GPU2-Clock-SensorInstance#
HWiNFO-GPU2-Temp-EntryId=0x1000000
; GPU Load [HWiNFO-GPU2-CoreLoad]
HWiNFO-GPU2-CoreLoad-SensorId=#HWiNFO-GPU2-Clock-SensorId#
HWiNFO-GPU2-CoreLoad-SensorInstance=#HWiNFO-GPU2-Clock-SensorInstance#
HWiNFO-GPU2-CoreLoad-EntryId=0x7000000
; Memory Clock Frequency [HWiNFO-GPU2-MemoryClock]
HWiNFO-GPU2-MemoryClock-SensorId=#HWiNFO-GPU2-Clock-SensorId#
HWiNFO-GPU2-MemoryClock-SensorInstance=#HWiNFO-GPU2-Clock-SensorInstance#
HWiNFO-GPU2-MemoryClock-EntryId=0x6000004
; Memory Usage [HWiNFO-GPU2-MemoryUsage]
HWiNFO-GPU2-MemoryUsage-SensorId=#HWiNFO-GPU2-Clock-SensorId#
HWiNFO-GPU2-MemoryUsage-SensorInstance=#HWiNFO-GPU2-Clock-SensorInstance#
HWiNFO-GPU2-MemoryUsage-EntryId=0x7000008
; Memory Allocated [HWiNFO-GPU2-MemoryAlloc]
HWiNFO-GPU2-MemoryAlloc-SensorId=#HWiNFO-GPU2-Clock-SensorId#
HWiNFO-GPU2-MemoryAlloc-SensorInstance=#HWiNFO-GPU2-Clock-SensorInstance#
HWiNFO-GPU2-MemoryAlloc-EntryId=0x80000fc
; Fan Speed [HWiNFO-GPU2-FanSpeed]
HWiNFO-GPU2-FanSpeed-SensorId=#HWiNFO-GPU2-Clock-SensorId#
HWiNFO-GPU2-FanSpeed-SensorInstance=#HWiNFO-GPU2-Clock-SensorInstance#
HWiNFO-GPU2-FanSpeed-EntryId=0x3000000
; Fan Usage [HWiNFO-GPU2-FanUsage]
HWiNFO-GPU2-FanUsage-SensorId=#HWiNFO-GPU2-Clock-SensorId#
HWiNFO-GPU2-FanUsage-SensorInstance=#HWiNFO-GPU2-Clock-SensorInstance#
HWiNFO-GPU2-FanUsage-EntryId=0x8000000
; Video Clock Frequency [HWiNFO-GPU2-VideoClock]
HWiNFO-GPU2-VideoClock-SensorId=#HWiNFO-GPU2-Clock-SensorId#
HWiNFO-GPU2-VideoClock-SensorInstance=#HWiNFO-GPU2-Clock-SensorInstance#
HWiNFO-GPU2-VideoClock-EntryId=0x6000005
; Memory Controller Usage [HWiNFO-GPU2-MemController]
HWiNFO-GPU2-MemController-SensorId=#HWiNFO-GPU2-Clock-SensorId#
HWiNFO-GPU2-MemController-SensorInstance=#HWiNFO-GPU2-Clock-SensorInstance#
HWiNFO-GPU2-MemController-EntryId=0x7000001
; Core Voltage [HWiNFO-GPU2-CoreVoltage]
HWiNFO-GPU2-CoreVoltage-SensorId=#HWiNFO-GPU2-Clock-SensorId#
HWiNFO-GPU2-CoreVoltage-SensorInstance=#HWiNFO-GPU2-Clock-SensorInstance#
HWiNFO-GPU2-CoreVoltage-EntryId=0x2000000
; 
; GPU 3
; 
; GPU Clock [HWiNFO-GPU3-Clock]
HWiNFO-GPU3-Clock-SensorId=0xe0002000
HWiNFO-GPU3-Clock-SensorInstance=0x0
HWiNFO-GPU3-Clock-EntryId=0x6000000
; GPU Temperature [HWiNFO-GPU3-Temp]
HWiNFO-GPU3-Temp-SensorId=#HWiNFO-GPU3-Clock-SensorId#
HWiNFO-GPU3-Temp-SensorInstance=#HWiNFO-GPU3-Clock-SensorInstance#
HWiNFO-GPU3-Temp-EntryId=0x1000000
; GPU Load [HWiNFO-GPU3-CoreLoad]
HWiNFO-GPU3-CoreLoad-SensorId=#HWiNFO-GPU3-Clock-SensorId#
HWiNFO-GPU3-CoreLoad-SensorInstance=#HWiNFO-GPU3-Clock-SensorInstance#
HWiNFO-GPU3-CoreLoad-EntryId=0x7000000
; Memory Clock Frequency [HWiNFO-GPU3-MemoryClock]
HWiNFO-GPU3-MemoryClock-SensorId=#HWiNFO-GPU3-Clock-SensorId#
HWiNFO-GPU3-MemoryClock-SensorInstance=#HWiNFO-GPU3-Clock-SensorInstance#
HWiNFO-GPU3-MemoryClock-EntryId=0x6000004
; Memory Usage [HWiNFO-GPU3-MemoryUsage]
HWiNFO-GPU3-MemoryUsage-SensorId=#HWiNFO-GPU3-Clock-SensorId#
HWiNFO-GPU3-MemoryUsage-SensorInstance=#HWiNFO-GPU3-Clock-SensorInstance#
HWiNFO-GPU3-MemoryUsage-EntryId=0x7000008
; Memory Allocated [HWiNFO-GPU3-MemoryAlloc]
HWiNFO-GPU3-MemoryAlloc-SensorId=#HWiNFO-GPU3-Clock-SensorId#
HWiNFO-GPU3-MemoryAlloc-SensorInstance=#HWiNFO-GPU3-Clock-SensorInstance#
HWiNFO-GPU3-MemoryAlloc-EntryId=0x80000fc
; Fan Speed [HWiNFO-GPU3-FanSpeed]
HWiNFO-GPU3-FanSpeed-SensorId=#HWiNFO-GPU3-Clock-SensorId#
HWiNFO-GPU3-FanSpeed-SensorInstance=#HWiNFO-GPU3-Clock-SensorInstance#
HWiNFO-GPU3-FanSpeed-EntryId=0x3000000
; Fan Usage [HWiNFO-GPU3-FanUsage]
HWiNFO-GPU3-FanUsage-SensorId=#HWiNFO-GPU3-Clock-SensorId#
HWiNFO-GPU3-FanUsage-SensorInstance=#HWiNFO-GPU3-Clock-SensorInstance#
HWiNFO-GPU3-FanUsage-EntryId=0x8000000
; Video Clock Frequency [HWiNFO-GPU3-VideoClock]
HWiNFO-GPU3-VideoClock-SensorId=#HWiNFO-GPU3-Clock-SensorId#
HWiNFO-GPU3-VideoClock-SensorInstance=#HWiNFO-GPU3-Clock-SensorInstance#
HWiNFO-GPU3-VideoClock-EntryId=0x6000005
; Memory Controller Usage [HWiNFO-GPU3-MemController]
HWiNFO-GPU3-MemController-SensorId=#HWiNFO-GPU3-Clock-SensorId#
HWiNFO-GPU3-MemController-SensorInstance=#HWiNFO-GPU3-Clock-SensorInstance#
HWiNFO-GPU3-MemController-EntryId=0x7000001
; Core Voltage [HWiNFO-GPU3-CoreVoltage]
HWiNFO-GPU3-CoreVoltage-SensorId=#HWiNFO-GPU3-Clock-SensorId#
HWiNFO-GPU3-CoreVoltage-SensorInstance=#HWiNFO-GPU3-Clock-SensorInstance#
HWiNFO-GPU3-CoreVoltage-EntryId=0x2000000

[HWiNFO-Config-GPU-0]
HWiNFO-GPU0-Clock=GPU Clock (MHz)
HWiNFO-GPU0-Temp=GPU Temperature (degrees)
HWiNFO-GPU0-CoreLoad=GPU Core Load (%)
HWiNFO-GPU0-MemoryClock=GPU Memory Clock Frequency (MHz)
HWiNFO-GPU0-MemoryUsage=GPU Memory Usage (%)
HWiNFO-GPU0-MemoryAlloc=GPU Memory Allocated (MB)
HWiNFO-GPU0-FanSpeed=GPU Fan Speed (RPM)
HWiNFO-GPU0-FanUsage=GPU Fan Usage (%)
HWiNFO-GPU0-VideoClock=Video Clock Frequency (MHz)
HWiNFO-GPU0-MemController=Memory Controller Usage (%)
HWiNFO-GPU0-CoreVoltage=GPU Core Voltage (volts)

[HWiNFO-Config-GPU-1]
HWiNFO-GPU1-Clock=GPU Clock (MHz)
HWiNFO-GPU1-Temp=GPU Temperature (degrees)
HWiNFO-GPU1-CoreLoad=GPU Core Load (%)
HWiNFO-GPU1-MemoryClock=GPU Memory Clock Frequency (MHz)
HWiNFO-GPU1-MemoryUsage=GPU Memory Usage (%)
HWiNFO-GPU1-MemoryAlloc=GPU Memory Allocated (MB)
HWiNFO-GPU1-FanSpeed=GPU Fan Speed (RPM)
HWiNFO-GPU1-FanUsage=GPU Fan Usage (%)
HWiNFO-GPU1-VideoClock=Video Clock Frequency (MHz)
HWiNFO-GPU1-MemController=Memory Controller Usage (%)
HWiNFO-GPU1-CoreVoltage=GPU Core Voltage (volts)

[HWiNFO-Config-GPU-2]
HWiNFO-GPU2-Clock=GPU Clock (MHz)
HWiNFO-GPU2-Temp=GPU Temperature (degrees)
HWiNFO-GPU2-CoreLoad=GPU Core Load (%)
HWiNFO-GPU2-MemoryClock=GPU Memory Clock Frequency (MHz)
HWiNFO-GPU2-MemoryUsage=GPU Memory Usage (%)
HWiNFO-GPU2-MemoryAlloc=GPU Memory Allocated (MB)
HWiNFO-GPU2-FanSpeed=GPU Fan Speed (RPM)
HWiNFO-GPU2-FanUsage=GPU Fan Usage (%)
HWiNFO-GPU2-VideoClock=Video Clock Frequency (MHz)
HWiNFO-GPU2-MemController=Memory Controller Usage (%)
HWiNFO-GPU2-CoreVoltage=GPU Core Voltage (volts)

[HWiNFO-Config-GPU-3]
HWiNFO-GPU3-Clock=GPU Clock (MHz)
HWiNFO-GPU3-Temp=GPU Temperature (degrees)
HWiNFO-GPU3-CoreLoad=GPU Core Load (%)
HWiNFO-GPU3-MemoryClock=GPU Memory Clock Frequency (MHz)
HWiNFO-GPU3-MemoryUsage=GPU Memory Usage (%)
HWiNFO-GPU3-MemoryAlloc=GPU Memory Allocated (MB)
HWiNFO-GPU3-FanSpeed=GPU Fan Speed (RPM)
HWiNFO-GPU3-FanUsage=GPU Fan Usage (%)
HWiNFO-GPU3-VideoClock=Video Clock Frequency (MHz)
HWiNFO-GPU3-MemController=Memory Controller Usage (%)
HWiNFO-GPU3-CoreVoltage=GPU Core Voltage (volts)
