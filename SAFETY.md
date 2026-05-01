# Safety and Authorized Use

This repository contains HID automation examples for **owned devices** and **explicitly consented demos** only.

## Required Rules

- Use only on machines you own or are formally authorized to test.
- Use only for visible, reversible, non-stealth demonstrations.
- Do not use payloads for credential theft, persistence, exfiltration, impersonation, or unauthorized access.
- Do not bypass OS security prompts, privacy settings, or account boundaries.

## Legacy Payload Notice

Older payloads in `macos/credentials`, `macos/exfiltration`, `macos/network-attacks`, `macos/persistence`, and parts of `macos/recon`/`macos/execution` are kept for historical context and are **not actively maintained**.

Treat those folders as `Legacy/Deprecated` content.

## Creator Pack Standard

All active creator payloads must:

- include metadata (`Title`, `Vibe`, `RuntimeSec`, `BoardSupport`, `Undo`, `CameraNotes`)
- include a clear `Undo` path in comments and docs
- avoid destructive or stealth behavior
- avoid credential/data collection

If a payload cannot be undone quickly, do not include it in the active creator catalog.
