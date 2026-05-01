#ifndef CREATOR_INPUT_H
#define CREATOR_INPUT_H

#include <Arduino.h>

#if __has_include(<USBHIDKeyboard.h>)
#include <USBHIDKeyboard.h>
static USBHIDKeyboard creatorKeyboard;
inline void beginKeyboard() {
  delay(3000);
  creatorKeyboard.begin();
  delay(250);
}
inline void endKeyboard() {
  creatorKeyboard.end();
}
inline void keyCombo(uint8_t modifier, uint8_t key) {
  creatorKeyboard.press(modifier);
  creatorKeyboard.press(key);
  delay(80);
  creatorKeyboard.releaseAll();
}
inline void typeText(const char *text) {
  creatorKeyboard.print(text);
}
#elif __has_include(<Keyboard.h>)
#include <Keyboard.h>
inline void beginKeyboard() {
  delay(3000);
  Keyboard.begin();
  delay(250);
}
inline void endKeyboard() {
  Keyboard.end();
}
inline void keyCombo(uint8_t modifier, uint8_t key) {
  Keyboard.press(modifier);
  Keyboard.press(key);
  delay(80);
  Keyboard.releaseAll();
}
inline void typeText(const char *text) {
  Keyboard.print(text);
}
#else
#error "No supported keyboard HID library found."
#endif

enum WaitMode {
  WAIT_SLOW,
  WAIT_REEL,
  WAIT_TURBO
};

inline void enter() {
  #if __has_include(<USBHIDKeyboard.h>)
  creatorKeyboard.press(KEY_RETURN);
  delay(60);
  creatorKeyboard.release(KEY_RETURN);
  #else
  Keyboard.press(KEY_RETURN);
  delay(60);
  Keyboard.release(KEY_RETURN);
  #endif
}

inline void waitPreset(WaitMode mode) {
  switch (mode) {
    case WAIT_SLOW:
      delay(1200);
      break;
    case WAIT_REEL:
      delay(700);
      break;
    case WAIT_TURBO:
      delay(350);
      break;
  }
}

inline void typeCmd(const char *cmd) {
  typeText(cmd);
  enter();
}

inline void openSpotlight() {
  keyCombo(KEY_LEFT_GUI, ' ');
  delay(450);
}

inline void openTerminal() {
  openSpotlight();
  typeText("terminal");
  delay(350);
  enter();
  delay(900);
}

inline void panicResetHint() {
  typeCmd("echo 'PANIC RESET: pkill -f reel_ || true; killall Terminal >/dev/null 2>&1 || true'");
}

#endif
