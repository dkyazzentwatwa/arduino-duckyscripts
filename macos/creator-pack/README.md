# macOS Creator Pack

Camera-first payloads for short-form content. These scripts are built for dramatic visuals, storytelling pacing, and reversible outcomes.

## Shared Runtime Layer

All creator payloads in this folder use `creator_input.h` with a shared API:

- `openSpotlight()`
- `openTerminal()`
- `typeCmd()`
- `enter()`
- `waitPreset()` with `WAIT_SLOW`, `WAIT_REEL`, `WAIT_TURBO`
- `panicResetHint()`

Board support is dual-target:

- Arduino HID (`Keyboard.h`)
- ESP32-S3 TinyUSB (`USBHIDKeyboard.h`)

## Reel-Ready Scripts

| Script | Runtime | Shot Notes | UNDO |
|---|---:|---|---|
| `cinematic-fake-breach.ino` | ~75s | Tight terminal opening, pull back on final reveal | `pkill -f reel_ >/dev/null 2>&1 || true` |
| `glitch-desktop-takeover.ino` | ~80s | Full-screen capture, quick app-cut montage | `osascript -e 'tell application "System Events" to set dark mode of appearance preferences to false'; killall Terminal` |
| `matrix-rain-studio.ino` | ~70s | Static b-roll, high contrast framing | `pkill -f reel_matrix >/dev/null 2>&1 || true` |
| `notification-storm-lite.ino` | ~65s | Face-cam reaction + top-right notification area | `defaults delete com.apple.notificationcenterui doNotDisturb >/dev/null 2>&1 || true` |
| `autotype-drama-scene.ino` | ~85s | Story build, then reveal in TextEdit | `rm -f ~/Desktop/reel_drama_scene.txt` |
| `beat-sync-terminal.ino` | ~70s | Start on beat drop, slow-mo second half | `pkill -f reel_beat >/dev/null 2>&1 || true` |
| `app-chaos-montage.ino` | ~78s | Jump cuts per app switch for momentum | `killall Calculator Chess Music Preview Safari Terminal >/dev/null 2>&1 || true` |
| `ascii-chaos-console.ino` | ~88s | Tight terminal shot; dense ASCII + status bursts | `pkill -f reel_ascii >/dev/null 2>&1 || true` |
| `reveal-and-reset.ino` | ~60s | Ending reveal that confirms simulation | payload itself is reset |

## Reversible Contract

Every script must keep its `UNDO` command visible in:

1. script metadata comments
2. this README

## Content Safety Boundaries

This creator pack is for visual simulation and choreography only:

- no persistence
- no credential collection
- no data exfiltration
- no stealth execution
