# GitHub-Based QA Documentation and Problem Solving

## Project
Arduino LED Blinking with Serial QA Status Logging

## Academic activity
MIT Academy of Engineering â€” Project Management, Activity 2 (CO2)

## Purpose
This repository demonstrates a traceable QA workflow for an embedded-system example using GitHub Issues, branches, commits, Pull Requests, a Project board, and a Wiki.

## Hardware
- Arduino Uno (or compatible board)
- Built-in LED on digital pin 13, or external LED with suitable resistor
- USB cable

## Repository structure
- `src/LED_Blinking_QA_Baseline.ino` â€” intentionally imperfect baseline
- `src/LED_Blinking_QA.ino` â€” working file corrected progressively through QA fixes
- `docs/QA_Test_Cases.md` â€” QA test cases and acceptance criteria
- `.github/ISSUE_TEMPLATE/qa-bug.md` â€” reusable QA issue template

## QA lifecycle
Issue -> root cause -> branch -> commit -> Pull Request -> review/comment -> merge -> verification -> close.

## Expected final behaviour
1. LED ON for approximately 1 second.
2. LED OFF for approximately 1 second.
3. Serial Monitor at 9600 baud.
4. Serial output reports the actual LED state.

## Academic evidence note
Repository URLs, issue/PR numbers, screenshots, dates and physical test observations must be populated from the actual execution of the activity. No fabricated evidence is included.