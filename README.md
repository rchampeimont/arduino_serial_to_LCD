# arduino_serial_to_LCD
The Arduino code in the "serial_to_LCD" folder reads data from the Arduino serial port and displays it on the LCD screen (HD44780 compatible). It works both with the virtual serial port through the USB cable and a direct connection to the RX pin.

How to connect the LCD screen:
![Photo of LCD connections](/circuit/photo_LCD_connection.jpg?raw=true)

# Virtual serial port with USB
The simplest way to send serial data to the Arduino is to use the serial monitor in the Arduino IDE and the USB cable.

# Real serial port (RS232)
## Computer TX to Arduino RX
For the challenge, I wanted to send data from my computer's real serial port (RS232 9-pin connector). For that, I created an adaptor circuit because the voltages on a computer serial port are different from what the Arduino expects. Don't connect the computer TX pin to the Arduino RX pin directly, it would fry your Arduino according to the documentation (https://www.arduino.cc/reference/en/language/functions/communication/serial/). 

You can watch my YouTube video where I show the circuit working: https://www.youtube.com/watch?v=u4Crk8dcw9A

This adaptor circuit translates -12V (logical 1 in RS232) to 5V and +12V (logical 0) to 0V.

Diagram:
![Circuit diagram](/circuit/diagram.jpg?raw=true)
I have represented the Arduino RX pin as a diode and resistor just to think about the circuit, but the actual hardware inside is probably different.

Photo:
![Circuit photo](/circuit/photo_annotated.jpg?raw=true)

## Arduino TX to computer RX
Altough it is not used by this program, I also created the circuit to perform serial communication in the reverse direction, ie. from Arduino TX pin to computer RS232 RX pin.

This adaptor circuit translates 0V to 5V (understood as logical 0 in RS232) and 5V to -9V (understood as logical 1 in RS232).

Diagram:
![Circuit diagram](/circuit/diagram_TX.jpg?raw=true)
I have represented the Arduino TX pin as a switch to +5V/GND just to think about the circuit, but the actual hardware inside is probably different.

Photo:
![Circuit photo](/circuit/photo_annotated_TX.jpg?raw=true)
(The GND of the RS232 port is connected to the Arduino GND off camera)
