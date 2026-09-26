## Severity
**Medium**

## Problem
The Serial Monitor message does not match the actual LED state after the LED is switched OFF.

## Steps to reproduce
1. Upload the baseline sketch.
2. Open Serial Monitor.
3. Observe the physical LED and serial messages together.

## Expected result
The serial message should report the actual state immediately after each state change.

## Actual result
After setting the LED LOW, the sketch prints `LED ON`.

## 5-Why root-cause analysis
1. **Why** is the status message incorrect?  
   Because `LED ON` is printed after `digitalWrite(LED_PIN, LOW)`.
2. **Why** is `LED ON` printed?  
   The serial text is hard-coded and does not match the following state.
3. **Why** was the mismatch not detected?  
   The QA test did not compare the serial message with the physical state.
4. **Why** was the comparison omitted?  
   The baseline test plan focused on blinking but not traceability of status output.
5. **Why** should the output be verified?  
   A monitoring message is only useful when it accurately represents system state.

### Root cause
The OFF-state serial message incorrectly says `LED ON`.

### Corrective action
Print `LED ON` after switching HIGH and `LED OFF` after switching LOW.

### Verification to record
Run **TC-04** and confirm message/state alignment.