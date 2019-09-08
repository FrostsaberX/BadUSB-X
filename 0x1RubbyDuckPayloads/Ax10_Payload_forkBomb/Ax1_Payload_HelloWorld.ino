void setup() {
  Keyboard.begin();
  delay(3000);//延时
  Keyboard.press(KEY_LEFT_GUI);
  delay(200); 
  Keyboard.print("r");
  delay(200); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(200); 
  //=========================Run==========================
  Keyboard.println("NOTEPAD");
  Keyboard.println("hELLO wORLD!!!");
  //======================================================
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//结束键盘通讯 
}

void loop() {
}
