## Severity
**Medium**

## Problem
Serial status logging is unreliable because the sketch does not initialize serial communication.

## Steps to reproduce
1. Upload the baseline sketch.
2. Open Serial Monitor.
3. Observe that the program does not explicitly initialize the UART interface.

## Expected result
Serial communication should be initialized at a documented baud rate and produce readable status messages.

## Actual result
`Serial.println()` is used without an explicit `Serial.begin()` initialization.

## 5-Why root-cause analysis
1. **Why** is serial logging unreliable/unavailable?  
   Because the serial interface is not initialized in `setup()`.
2. **Why** is initialization missing?  
   The baseline implementation omitted `Serial.begin()`.
3. **Why** was the omission not detected?  
   Serial communication was not included as an explicit acceptance criterion in the first version.
4. **Why** was it not an acceptance criterion?  
   The initial implementation treated serial output as an informal debug aid rather than a documented QA status channel.
5. **Why** should initialization be explicit?  
   The communication interface needs a known configuration so test observations are reproducible.

### Root cause
`Serial.begin()` was missing from `setup()`.

### Corrective action
Add `Serial.begin(9600)` and verify readable Serial Monitor output at 9600 baud.

### Verification to record
Run **TC-03** and **TC-04**.