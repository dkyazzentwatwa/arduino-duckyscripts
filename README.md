# arduino-duckyscripts

Modernized macOS HID payload collection for **creator-style demos** and reversible automation scenes.

## Project Status

- Active track: `macos/creator-pack` (maintained)
- Legacy track: existing category folders under `macos/` (deprecated/historical)

Read [SAFETY.md](./SAFETY.md) before using anything in this repository.

## Creator Reboot (Primary)

The active pack is designed for viral short-form clips (IG/TikTok/Reels):

- camera-first sequences
- dramatic but reversible behavior
- no persistence, credential theft, or exfiltration
- 60-90 second story pacing

Creator scripts live in [`macos/creator-pack`](./macos/creator-pack).

### Creator Pack Payloads

| Payload | Description | Runtime | UNDO |
|---|---|---:|---|
| `cinematic-fake-breach.ino` | Fake terminal breach sequence with visual reveal | ~75s | `pkill -f reel_ >/dev/null 2>&1 || true` |
| `glitch-desktop-takeover.ino` | Dark/light flicker + app choreography montage | ~80s | `osascript -e 'tell application "System Events" to set dark mode of appearance preferences to false'; killall Terminal` |
| `matrix-rain-studio.ino` | Matrix-like green rain b-roll generator | ~70s | `pkill -f reel_matrix >/dev/null 2>&1 || true` |
| `notification-storm-lite.ino` | Controlled notification burst for reaction clips | ~65s | `defaults delete com.apple.notificationcenterui doNotDisturb >/dev/null 2>&1 || true` |
| `autotype-drama-scene.ino` | Writes and opens dramatic monologue scene text | ~85s | `rm -f ~/Desktop/reel_drama_scene.txt` |
| `beat-sync-terminal.ino` | Beat-aligned terminal pulses (8/16/32 bars) | ~70s | `pkill -f reel_beat >/dev/null 2>&1 || true` |
| `app-chaos-montage.ino` | Multi-app rapid montage for "possessed Mac" feel | ~78s | `killall Calculator Chess Music Preview Safari Terminal >/dev/null 2>&1 || true` |
| `ascii-chaos-console.ino` | Dense ASCII/symbol rain with fake status bursts | ~88s | `pkill -f reel_ascii >/dev/null 2>&1 || true` |
| `reveal-and-reset.ino` | Finale script that resets and reveals simulation | ~60s | Included in script |

## Shared API (Dual-Board)

`macos/creator-pack/creator_input.h` provides shared helpers used by all creator scripts:

- `openSpotlight()`
- `openTerminal()`
- `typeCmd()`
- `enter()`
- `waitPreset(WAIT_SLOW | WAIT_REEL | WAIT_TURBO)`
- `panicResetHint()`

Runtime targets:

- Arduino HID boards (`Keyboard.h`)
- ESP32-S3 TinyUSB (`USBHIDKeyboard.h`)

## Legacy/Deprecated Folders

The following folders are retained for historical reference and are not part of the maintained creator track:

- `macos/credentials`
- `macos/exfiltration`
- `macos/network-attacks`
- `macos/persistence`
- `macos/recon`
- `macos/execution`
- `macos/obscurity`
- `macos/goodusb`

These legacy payloads may include stale assumptions, broken compatibility, or unsafe patterns.

## Getting Started

1. Open a creator payload from `macos/creator-pack` in Arduino IDE.
2. Select your board/runtime:
   - Arduino HID board (Pro Micro/Leonardo/Due style)
   - ESP32-S3 with TinyUSB HID support
3. Upload and run on a test Mac you own.
4. Keep the listed `UNDO` command ready before recording.

## Contributing

Contributions should target the creator pack and follow the reversible contract in `SAFETY.md`.

## License

Apache 2.0. See `LICENSE`.
