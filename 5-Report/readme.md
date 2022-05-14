# Introduction

The Wiper Control System is used to control the operational speed of a wiper to  wash the Windshield of cars and other heavy vehicles like buses and trucks in accordance with rain conditions. It has been implemented by using STM32F407VG Microcontroller in a workspace software named STM32CubeIDE using C programming. We can install this system in cars or buses or trucks to clean the Windshield. The main application of the system is to prevent the vehicles from accidents during rainy climates where the driver may forget to operate the windshield so this system operates the windshield.The speed of the windshield can also be varied depending upon the amount of rain. This is same as varying the frequencies of LEDs by pressing user button. Accurate sensing information allows the processor to operate the system so that the electronic modules can optimize their performance and maximize their reliability no matter in any working conditions.

# Working

In this project we have used a STM32F4-Discovery Board which already consists of LEDs of various colours like Red, Blue, Green, Orange. The working of this wiper control system is visualised by working of this LEDs at different frequency ranges. At first the Red LED is ON when the user button is pressed and held for 2 seconds. This represents the system is ON, this is the Ignition Key Position at Acc in Wiper Control System. With the system in ON condition the Blue, Green and Orange LEDs turns ON one at a time with the set frequency, The frequency changes on every alternate key press, 3 frequency levels with 1, 4 and 8 Hz. With variation in frequency the Blue, Green, Orange LEDs turns on at faster time intervals. This represents the Wiper ON in Wiper Control System. The LED glow pattern stops during the 4th press. This represents the Wiper OFF in Wiper Control System. By the next press of user button the process is repeated with sequencial LED glow pattern. Finally the Red LED is OFF when the user button is pressed and held for 2 seconds. This represents the system is OFF, this is the Ignition Key Position at Lock in Wiper Control System.

# Features
- Low Cost.
- Works with variation in input signal.
- Robust System.

# Research/State of Art

Mostly used in vehicles like car or bus or trucks to operate the WindShield Wiper during rainy conditions or washing. It can also be used in Industriesfor high level robotic applications like robotic arm and for packing purposes. It takes an analog input which is manual and in some cases may be automatic by using sensors. Today’s modern vehicles are smart! Automobiles today have the ability to prevent front and rear end collisions; they help drivers accelerate and stop safely on cold and icy weather conditions;  an often overlooked smart system is the vehicle’s climate control. Most vehicles today can let you set the climate controls to automatic. Automatically the system works when it senses the windshield is covered with water.

# **SWOT Analysis:**

**Strength:**

- Cost effective.
- Water proof.

**Weakness:**
- Mostly applicable in countries with atleast minimum possiblity of rain.

**Opportunities:**

- By implementing in vehicles like cars, buses and trucks.
- By implementing in Industries for robotic applications.

**Threats:**
- High electrical resistance could cause the sensor to overheat.
- Economical crisis.

# **4W and 1H:**

**Why:**
To work as Windshield Wiping system in vehicles

**What:**
Windshield Wiping system for vehicles. 

**Where:**
Automobiles and Industries.

**When:**
In vehicles as Windshield Wiper. In Industries for robotic applications.

**How:**
By installing the system in Automobiles and Industries.


# High Level Requirements
| ID | Description | Status |
|----|-------------|--------|
| HLR1 | Working of STM32F4-Discovery | Implemented |
| HLR2 | Working of user button | Implemented | 	
| HLR3 | LEDs Glows sequentially| Implemented |

# Low Level Requirements
| ID | Description | Status |
|----|-------------|--------|
| LLR1 | when user button pressed for 2 seconds Red LED turn ON | Implemented |
| LLR2 | with first pressing of user button LEDs Glow sequentially in 1Hz frequency | Implemented |
| LLR3 | with second pressing of user button LEDs Glow sequentially in 4Hz frequency | Implemeted |
| LLR4 | with third pressing of user button LEDs Glow sequentially in 8Hz frequency | Implemeted |
| LLR5 | when user button pressed for 2 seconds Red LED turn OFF | Implemented |
