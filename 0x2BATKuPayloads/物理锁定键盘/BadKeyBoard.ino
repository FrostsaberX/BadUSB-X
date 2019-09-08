void setup() {
  // put your setup code here, to run once:
delay(10000);
}

void loop() {
  // put your main code here, to run repeatedly:
Keyboard.press(KEY_CAPS_LOCK);
Keyboard.release(KEY_CAPS_LOCK);
Keyboard.press(219);
Keyboard.release(219);
}
