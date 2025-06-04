This project is a high-power DC-AC inverter circuit designed to convert 12V DC to an AC output suitable for powering small AC loads. 

How does it work?
It uses an Arduino Nano to generate PWM signals for the H-bridge inverter stage, which is built from four IRFZ44 MOSFETs to handle significant currents. Battery voltage is continuously monitored to protect against deep discharge, and optocouplers (PC817) isolate the microcontroller from high-power switching, ensuring reliable and safe operation. The project also includes a DC-DC step-down converter (MC34063-based) to provide a stable 5V supply for control electronics. This inverter is ideal for educational demonstrations, small AC applications, or as a foundation for future off-grid power systems.

The output I got was a stable 11V AC voltage at 50Hz frequency. The whole project was made using reference from a youtube video I watched including the circuit diagram. 
