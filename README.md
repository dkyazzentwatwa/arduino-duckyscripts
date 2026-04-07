# arduino-duckyscripts

# Arduino DuckyScript Payloads

Convert DuckyScript payloads to Arduino/ESP32 code for microcontrollers with HID support.

## Introduction

This project provides a collection of converted DuckyScript payloads for Arduino and ESP32 microcontrollers with Human Interface Device (HID) support. DuckyScript is a scripting language used for keystroke injection, originally associated with the USB Rubber Ducky. By converting payloads to Arduino/ESP32 code, you can emulate keyboard and mouse input using affordable hardware.

## Features

- 51 converted DuckyScript payloads for macOS targets
- Compatible with Arduino boards (Pro Micro, Leonardo, Due) and ESP32-S3
- Emulate keyboard and mouse actions via USB
- Easily customize and modify payloads for specific requirements

## Supported Hardware

### Arduino HID Boards
- Arduino Pro Micro (ATmega32U4)
- Arduino Leonardo
- Arduino Due

### ESP32-S3
- Requires ESP32 board definitions with TinyUSB support
- Native USB HID capability

## Getting Started

### Prerequisites

- Arduino IDE or PlatformIO installed on your system
- Supported microcontroller board with HID support

### Installation

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/dkyazzentwatwa/arduino-duckyscripts.git
   ```

2. Open the project directory in your preferred code editor or Arduino IDE.

### ESP32-S3 Setup

1. Install ESP32 board definitions in Arduino IDE
2. Select your ESP32-S3 board from Tools > Board
3. Enable USB CDC on boot: Tools > USB CDC on Boot > Enabled
4. Use the TinyUSB library for HID keyboard emulation

## Payload Inventory

### Recon (18 payloads)
| Payload | Description |
|---------|-------------|
| `networkrecon.ino` | Network reconnaissance |
| `networkreconplus.ino` | Extended network recon |
| `public-ip-finder.ino` | Retrieve public IP address |
| `public-ip-to-iphone.ino` | Send public IP to iPhone |
| `arp-table-to-iphone.ino` | Export ARP table to iPhone |
| `nmap-scan-to-iphone.ino` | Run nmap and export to iPhone |
| `portscan.ino` | Basic port scanning |
| `reverse-shell.ino` | Establish reverse shell |
| `infinite-reverse-shell.ino` | Persistent reverse shell |
| `socat-shell.ino` | Socat-based shell |
| `voice-logger.ino` | Audio recording via voice memos |
| `web-scraper.ino` | Web data extraction |
| `sysnet-info.ino` | System network info |
| `macos-system-log-to-iphone.ino` | Export system logs |
| `copy-all-jpeg.ino` | Copy JPEG files from system |
| `sentinelstrike.ino` | Security testing payload |

### Obscurity (13 payloads)
| Payload | Description |
|---------|-------------|
| `mac-cloak.ino` | Hide macOS network activity |
| `mac-cloak-reverse.ino` | Restore network visibility |
| `mac-netghost.ino` | Network ghosting |
| `mac-netghost-restore.ino` | Restore network state |
| `darknet-angel.ino` | Tor-based connectivity |
| `darknet-restore.ino` | Restore from darknet mode |
| `silent-server.ino` | Stealth server setup |
| `tcp-randomizer.ino` | Randomize TCP parameters |
| `shadowsocks-proxy-ninja.ino` | Shadowsocks proxy |
| `shadowsocks-reverse.ino` | Reverse Shadowsocks |
| `netwirk-fragmentation.ino` | Network fragmentation |
| `network-padding-fury.ino` | Traffic padding |
| `file-encryption.ino` | File encryption |

### Execution (18 payloads)
| Payload | Description |
|---------|-------------|
| `copypasta.ino` | Text injection |
| `cookies-2-dropbox.ino` | Export cookies to Dropbox |
| `icloud-to-dropbox.ino` | iCloud data to Dropbox |
| `imessage-2-dropbox.ino` | iMessage export |
| `docs-desktop-to-dropbox.ino` | Document exfiltration |
| `dropbox-2-desktop-boom.ino` | Dropbox to desktop sync |
| `doomsday-desktop-delete.ino` | Desktop cleanup |
| `delete-pasta.ino` | Recursive deletion |
| `file-load-tester.ino` | File stress testing |
| `load-tester-mega-folder-create.ino` | Folder creation stress test |
| `eapol-handshake-2-dropbox.ino` | WPA handshake capture |
| `macos-website-redirect.ino` | DNS redirect |
| `darkstorm-bruteforce-ip.ino` | Brute force testing |
| `remote-shell.ino` | Remote shell execution |
| `neversleep.ino` | Prevent sleep mode |
| `mouse_jiggler.ino` | Mouse movement simulation |
| `textedit-basic.ino` | TextEdit automation |
| `system-disruption-loop.ino` | System stress |
| `bluetooth-on.ino` | Enable Bluetooth |

### GoodUSB (2 payloads)
| Payload | Description |
|---------|-------------|
| `multi-open-apps.ino` | Open multiple applications |
| `live-chart-crypto.ino` | Crypto price display |

## Usage

Open any `.ino` file in the Arduino IDE:

```cpp
#include "HIDKeyboard.h"

HIDKeyboard keyboard;

void setup() {
  delay(5000); // Wait for target to recognize keyboard
  keyboard.begin();
}

void loop() {
  keyboard.println("Hello World");
  delay(1000);
}
```

For ESP32-S3, use TinyUSB's `USBHIDKeyboard`:

```cpp
#include "USBHIDKeyboard.h"

USBHIDKeyboard keyboard;

void setup() {
  delay(3000);
  keyboard.begin();
}

void loop() {
  keyboard.println("Hello from ESP32-S3!");
  delay(1000);
}
```

## Contributing

Contributions are welcome! If you have ideas, suggestions, or improvements, feel free to open an issue or submit a pull request.

## License

This project is licensed under the Apache 2.0 License - see the LICENSE file for details.

## Acknowledgments

- Arduino platform and HID libraries
- USB Rubber Ducky project
- ESP32 TinyUSB community