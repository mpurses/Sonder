set shell = CreateObject("WScript.Shell")
'shell.Run "cmd.exe /c echo • | clip", 0, TRUE
shell.SendKeys"- "
