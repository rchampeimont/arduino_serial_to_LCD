# arduino_serial_to_LCD
Send data from computer serial port and display it on Arduino LCD

The Arduino code in the "serial_to_LCD" folder read data from the Arduino serial port and display it on the LCD screen. It works both with the virtual serial port through the USB cable and a direct connection to the RX pin.

# Virtual serial port with USB
The simplest way to serial data to the Arduino is to use the serial monitor in the Arduino IDE.

# Real serial port (SR232)
For the challenge, I wanted to send data through the computer real serial port (SR232). For that, I created an adaptor circuit because the voltage in SR232 are different from what the Arduino expects. It translates from -12V to 5V and +12V to 0V.

![Circuit diagram](/circuit/diagram.jpg?raw=true)

![Circuit photo](/circuit/photo_annotated.jpg?raw=true)
