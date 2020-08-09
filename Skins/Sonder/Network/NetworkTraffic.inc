; Network In (Download)
[MeasureNetInEthernetBytes]
Measure=NetIn
Interface=#interfaceEthernet#
Group=NetInOut | MeasureEthernet
DynamicVariables=1

[MeasureNetInEthernetBytesTotal]
Measure=NetIn
Interface=#interfaceEthernet#
Cumulative=1
Group=NetInOut | MeasureEthernet
DynamicVariables=1

[MeasureNetInEthernetBytesSessionTotalBase]
Measure=Calc
Formula=MeasureNetInEthernetBytesTotal
UpdateDivider=-1
Group=NetInOut | MeasureEthernet | NetInOutBytesSessionTotalBase
DynamicVariables=1

[MeasureNetInEthernetBytesSessionTotal]
Measure=Calc
Formula=max(0, MeasureNetInEthernetBytesTotal - MeasureNetInEthernetBytesSessionTotalBase)
Group=NetInOut | MeasureEthernet
DynamicVariables=1

[MeasureNetInWirelessBytes]
Measure=NetIn
Interface=#interfaceWireless#
Group=NetInOut | MeasureWireless
DynamicVariables=1

[MeasureNetInWirelessBytesTotal]
Measure=NetIn
Interface=#interfaceWireless#
Cumulative=1
Group=NetInOut | MeasureWireless
DynamicVariables=1

[MeasureNetInWirelessBytesSessionTotalBase]
Measure=Calc
Formula=MeasureNetInWirelessBytesTotal
UpdateDivider=-1
Group=NetInOut | MeasureWireless | NetInOutBytesSessionTotalBase
DynamicVariables=1

[MeasureNetInWirelessBytesSessionTotal]
Measure=Calc
Formula=max(0, MeasureNetInWirelessBytesTotal - MeasureNetInWirelessBytesSessionTotalBase)
Group=NetInOut | MeasureWireless
DynamicVariables=1

[MeasureNetInOtherBytes]
Measure=NetIn
Interface=#interfaceOther#
Group=NetInOut | MeasureOther
DynamicVariables=1

[MeasureNetInOtherBytesTotal]
Measure=NetIn
Interface=#interfaceOther#
Cumulative=1
Group=NetInOut | MeasureOther
DynamicVariables=1

[MeasureNetInOtherBytesSessionTotalBase]
Measure=Calc
Formula=MeasureNetInOtherBytesTotal
UpdateDivider=-1
Group=NetInOut | MeasureOther | NetInOutBytesSessionTotalBase
DynamicVariables=1

[MeasureNetInOtherBytesSessionTotal]
Measure=Calc
Formula=max(0, MeasureNetInOtherBytesTotal - MeasureNetInOtherBytesSessionTotalBase)
Group=NetInOut | MeasureOther
DynamicVariables=1

[MeasureNetInBestBytes]
Measure=NetIn
Interface=[MeasureBestAdapterName]
Group=NetInOut | MeasureBest
DynamicVariables=1
Disabled=1

[MeasureNetInBestBytesTotal]
Measure=NetIn
Interface=[MeasureBestAdapterName]
Cumulative=1
Group=NetInOut | MeasureBest
DynamicVariables=1
Disabled=1

[MeasureNetInBestBytesSessionTotalBase]
Measure=Calc
Formula=MeasureNetInBestBytesTotal
UpdateDivider=-1
Group=NetInOut | MeasureBest | NetInOutBytesSessionTotalBase
DynamicVariables=1
Disabled=1

[MeasureNetInBestBytesSessionTotal]
Measure=Calc
Formula=max(0, MeasureNetInBestBytesTotal - MeasureNetInBestBytesSessionTotalBase)
Group=NetInOut | MeasureBest
DynamicVariables=1
Disabled=1

; Network Out (Upload)
[MeasureNetOutEthernetBytes]
Measure=NetOut
Interface=#interfaceEthernet#
Group=NetInOut | MeasureEthernet
DynamicVariables=1

[MeasureNetOutEthernetBytesTotal]
Measure=NetOut
Interface=#interfaceEthernet#
Cumulative=1
Group=NetInOut | MeasureEthernet
DynamicVariables=1

[MeasureNetOutEthernetBytesSessionTotalBase]
Measure=Calc
Formula=MeasureNetOutEthernetBytesTotal
UpdateDivider=-1
Group=NetInOut | MeasureEthernet | NetInOutBytesSessionTotalBase
DynamicVariables=1

[MeasureNetOutEthernetBytesSessionTotal]
Measure=Calc
Formula=MeasureNetOutEthernetBytesTotal - MeasureNetOutEthernetBytesSessionTotalBase
Group=NetInOut | MeasureEthernet
DynamicVariables=1

[MeasureNetOutWirelessBytes]
Measure=NetOut
Interface=#interfaceWireless#
Group=NetInOut | MeasureWireless
DynamicVariables=1

[MeasureNetOutWirelessBytesTotal]
Measure=NetOut
Interface=#interfaceWireless#
Cumulative=1
Group=NetInOut | MeasureWireless
DynamicVariables=1

[MeasureNetOutWirelessBytesSessionTotalBase]
Measure=Calc
Formula=MeasureNetOutWirelessBytesTotal
UpdateDivider=-1
Group=NetInOut | MeasureWireless | NetInOutBytesSessionTotalBase
DynamicVariables=1

[MeasureNetOutWirelessBytesSessionTotal]
Measure=Calc
Formula=MeasureNetOutWirelessBytesTotal - MeasureNetOutWirelessBytesSessionTotalBase
Group=NetInOut | MeasureWireless
DynamicVariables=1

[MeasureNetOutOtherBytes]
Measure=NetOut
Interface=#interfaceOther#
Group=NetInOut | MeasureOther
DynamicVariables=1

[MeasureNetOutOtherBytesTotal]
Measure=NetOut
Interface=#interfaceOther#
Cumulative=1
Group=NetInOut | MeasureOther
DynamicVariables=1

[MeasureNetOutOtherBytesSessionTotalBase]
Measure=Calc
Formula=MeasureNetOutOtherBytesTotal
UpdateDivider=-1
Group=NetInOut | MeasureOther | NetInOutBytesSessionTotalBase
DynamicVariables=1

[MeasureNetOutOtherBytesSessionTotal]
Measure=Calc
Formula=MeasureNetOutOtherBytesTotal - MeasureNetOutOtherBytesSessionTotalBase
Group=NetInOut | MeasureOther
DynamicVariables=1

[MeasureNetOutBestBytes]
Measure=NetOut
Interface=[MeasureBestAdapterName]
Group=NetInOut | MeasureBest
DynamicVariables=1
Disabled=1

[MeasureNetOutBestBytesTotal]
Measure=NetOut
Interface=[MeasureBestAdapterName]
Cumulative=1
Group=NetInOut | MeasureBest
DynamicVariables=1
Disabled=1

[MeasureNetOutBestBytesSessionTotalBase]
Measure=Calc
Formula=MeasureNetOutBestBytesTotal
UpdateDivider=-1
Group=NetInOut | MeasureBest | NetInOutBytesSessionTotalBase
DynamicVariables=1
Disabled=1

[MeasureNetOutBestBytesSessionTotal]
Measure=Calc
Formula=MeasureNetOutBestBytesTotal - MeasureNetOutBestBytesSessionTotalBase
Group=NetInOut | MeasureBest
DynamicVariables=1
Disabled=1