# TEST PLAN:
## High Level Test plan:
| ID    | Description                             | Expected O/P | Actual O/P |
|-------|-----------------------------------------| ------------ | ---------- |
| H_01  |Working of STM32F4-Discovery |SUCCESS       |SUCCESS     |   
| H_02  |Glowing LEDs as per the requirements |SUCCESS       |SUCCESS     |
| H_03  |User Button Working                      |UNSUCCESSFUL        |SUCCESS     |   


## Low Level Test Plan:
| ID    | Description                                | Expected O/P | Actual O/P | 
|-------|--------------------------------------------| ------------ | -----------| 
| L_01  |Red LED ON when user button pressed for 2 Seconds                                                     | PASSED       |SUCCESS     | 
| L_02  |Blue, Green, Orange LEDs turn ON sequentially in 1Hz frequency when user button pressed first time    | PASSED       |SUCCESS     |
| L_03  |Blue, Green, Orange LEDs turn ON sequentially in 4Hz frequency when user button pressed second time   | PASSED       |SUCCESS     |
| L_04  |Blue, Green, Orange LEDs turn ON sequentially in 1Hz frequency when user button pressed third time    | PASSED       |SUCCESS     |
| L_05  |Process continues with pressing of user button LEDs glow in 1Hz, 4Hz, 8Hz frequencies respectively    | PASSED       |SUCCESS     | 
| L_06  |Red LED OFF when user button pressed for 2 Seconds                                                    | PASSED       |SUCCESS     | 