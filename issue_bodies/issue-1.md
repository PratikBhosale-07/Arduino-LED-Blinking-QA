## Severity
**High**

## Problem
The Arduino LED does not behave correctly because the LED pin is configured as `INPUT` rather than `OUTPUT`.

## Steps to reproduce
1. Upload the baseline sketch.
2. Observe the built-in LED.
3. Compare the behaviour with the QA acceptance criterion.

## Expected result
The LED should respond correctly to digital output commands.

## Actual result
The LED does not reliably follow the intended digital output behaviour.

## 5-Why root-cause analysis
1. **Why** does the LED not blink correctly?  
   Because the LED pin is not configured for digital output.
2. **Why** is it not configured for output?  
   Because `pinMode(LED_PIN, INPUT)` is used.
3. **Why** is the wrong mode used?  
   The baseline implementation contains an incorrect pin configuration.
4. **Why** was the incorrect configuration not detected earlier?  
   The initial QA check did not explicitly verify the pin mode against the hardware requirement.
5. **Why** was that check missing?  
   The initial test plan did not include a dedicated pin-configuration acceptance criterion.

### Root cause
`LED_PIN` was configured as `INPUT` instead of `OUTPUT`.

### Corrective action
Change `pinMode(LED_PIN, INPUT)` to `pinMode(LED_PIN, OUTPUT)` and verify the LED response.

### Verification to record
Run **TC-01** and **TC-02** and add the actual test result in the issue comment.