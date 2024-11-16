# MSP430 7-Segment Counter  

## Overview  
This project demonstrates a **7-segment counter** implemented using the **MSP430 microcontroller** . The MSP430 is designed for energy-efficient applications and features a powerful 16-bit RISC CPU, 16-bit registers, and optimized low-power modes. This project utilizes the MSP430's GPIO pins to drive a 7-segment display, incrementing the count value from 0 to 9 in a loop.  

## Features  
- **Microcontroller**: MSP430 (Ultra-low-power, 16-bit RISC architecture).  
- **Counter Range**: 0 to 9 displayed on a 7-segment display.  
- **Energy Efficiency**: Utilizes MSP430's low-power modes to minimize power consumption.  
- **Scalable Design**: Can be extended for additional digits or customized counting patterns.  

## Components Used  
1. **MSP430 Microcontroller**: Controls the counter logic and drives the 7-segment display.  
2. **7-Segment Display**: Common cathode or common anode, depending on configuration.  
3. **Current-Limiting Resistors**: Protect the 7-segment display segments.  
4. **Push Button (Optional)**: To reset or manually increment the counter.  
5. **Power Supply**: Provides the necessary voltage for the MSP430 and the display.  

## Functionality  
1. The MSP430's GPIO pins are configured to drive each segment of the 7-segment display.  
2. The microcontroller iterates through numbers 0 to 9, turning on the respective segments to display each number.  
3. Optional features include a reset button or manual increment through an interrupt-based push button.  
4. The device operates in an energy-efficient manner by utilizing the MSP430's low-power modes when idle.  

## Simulation Video
https://github.com/user-attachments/assets/8b2c0b37-8e40-4231-b79a-4b4a032b311a


## Code Description  
The code uses the MSP430's 16-bit CPU to control the segments dynamically. Each digit is represented by a bitmask for the 7-segment display. A timer or loop is used to increment the counter periodically.  

## How to Use  
1. Connect the 7-segment display to the MSP430 microcontroller as per the pin mapping.  
2. Program the MSP430 with the provided firmware using an MSP430 programmer.  
3. Power on the circuit to see the 7-segment display counting from 0 to 9 in a loop.  
4. (Optional) Press the reset button to reset the counter or increment manually.  

