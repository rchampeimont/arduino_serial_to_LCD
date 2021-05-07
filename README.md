# arduino_serial_to_LCD
The Arduino code in the "serial_to_LCD" folder reads data from the Arduino serial port and displays it on the LCD screen (HD44780 compatible). It works both with the virtual serial port through the USB cable and a direct connection to the RX pin.

How to connect the LCD screen:
![Photo of LCD connections](/circuit/photo_LCD_connection.jpg?raw=true)

# Virtual serial port with USB
The simplest way to send serial data to the Arduino is to use the serial monitor in the Arduino IDE and the USB cable.

# Real serial port (RS232)
For the challenge, I wanted to send data from my computer's real serial port (RS232 9-pin connector). For that, I created an adaptor circuit because the voltages on a computer serial port are different from what the Arduino expects. Don't connect them directly, it would fry your Arduino according to the documentation (https://www.arduino.cc/reference/en/language/functions/communication/serial/). 

This adaptor circuit translates -12V (logical 1 in RS232) to 5V and +12V (logical 0) to 0V.

Diagram:
![Circuit diagram](/circuit/diagram.jpg?raw=true)
I have represented the Arduino RX pin as a diode and resistor just to think the circuit, but the actual hardware inside is probably different.

Photo:
![Circuit photo](/circuit/photo_annotated.jpg?raw=true)
