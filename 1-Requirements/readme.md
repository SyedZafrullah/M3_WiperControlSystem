# Software Requirements
- STM32CubeIDE.

# Components Requirements
- STM32F4-Discovery Board.

# Packages Requirements
## Xpack Packages:
**Windows Build Tools:**
The xPack Windows Build Tools is a standalone Windows binary distribution of GNU make and a few of other tools required by the Eclipse Embedded CDT (formerly GNU MCU/ARM Eclipse) project, but the binaries can also be used in generic build environments.

**OpenOCD:**
Open On-Chip Debugger (OpenOCD) is a free, open-source project that aims to provide debugging, in-system programming, and boundary scan using a debug adapter. The adapter is a hardware module that provides the right signals for the target to understand.

**QEMU:**
The xPack QEMU Arm is a standalone cross-platform binary distribution of QEMU, with several extensions for Arm Cortex-M devices.

# High Level Requirements
| ID | Description | Status |
|----|-------------|--------|
| HLR1 | Working of STM32F4-Discovery | Implemented |
| HLR2 | LEDs Glows sequentially| Implemented |
| HLR3 | With pressing of User Push Button Frequency of Glowing LEDs changes | Implemented | 	

# Low Level Requirements
| ID | Description | Status |
|----|-------------|--------|
| LLR1 | when user button pressed for 2 seconds Red LED turn ON | Implemented |
| LLR2 | with first pressing of user button LEDs Glow sequentially in 1Hz frequency | Implemented |
| LLR3 | with second pressing of user button LEDs Glow sequentially in 4Hz frequency | Implemeted |
| LLR4 | with third pressing of user button LEDs Glow sequentially in 8Hz frequency | Implemeted |
| LLR5 | when user button pressed for 2 seconds Red LED turn OFF | Implemented |