# QA Test Cases

| ID | Test | Expected Result | Acceptance Evidence |
|---|---|---|---|
| TC-01 | Compile and upload final sketch | No compilation/upload error | Arduino IDE result |
| TC-02 | Observe LED timing | ON â‰ˆ 1 s; OFF â‰ˆ 1 s | Physical observation/measurement |
| TC-03 | Open Serial Monitor at 9600 baud | Readable status output | Serial Monitor screenshot |
| TC-04 | Compare LED state with serial message | ON -> "LED ON"; OFF -> "LED OFF" | Serial + LED evidence |
| TC-05 | Run for ~30 s | Timing remains consistent | Repeated-cycle observation |