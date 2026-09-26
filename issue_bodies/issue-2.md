## Severity
**Medium**

## Problem
The baseline sketch keeps the LED OFF for 2 seconds instead of the required 1 second, producing an asymmetric blink pattern.

## Steps to reproduce
1. Upload the baseline sketch.
2. Observe the LED timing over several cycles.
3. Compare measured ON/OFF intervals with the requirement.

## Expected result
LED ON â‰ˆ 1 s and LED OFF â‰ˆ 1 s.

## Actual result
LED ON â‰ˆ 1 s and LED OFF â‰ˆ 2 s.

## 5-Why root-cause analysis
1. **Why** is the blink cycle asymmetric?  
   Because the OFF delay is 2000 ms.
2. **Why** is the OFF delay 2000 ms?  
   The baseline code uses `delay(2000)` for the OFF period.
3. **Why** is the value incorrect?  
   The timing requirement was not represented by one shared parameter.
4. **Why** was a shared parameter not used?  
   The baseline implementation used separate hard-coded delays.
5. **Why** is hard-coded timing a QA concern?  
   It makes consistency checks harder and increases the chance of mismatched values.

### Root cause
The OFF state used a hard-coded 2000 ms delay instead of the required 1000 ms.

### Corrective action
Introduce `BLINK_INTERVAL_MS = 1000` and use it for both ON and OFF periods.

### Verification to record
Run **TC-02** and **TC-05** and record the measured/observed result.