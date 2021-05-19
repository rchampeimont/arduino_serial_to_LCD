# arduino_serial_to_LCD
The Arduino code in the "serial_to_LCD" folder reads data from the Arduino serial port and displays it on the LCD screen (HD44780 compatible). It works both with the virtual serial port through the USB cable and a direct connection to the RX pin.

How to connect the LCD screen:
![Photo of LCD connections](/circuit/photo_LCD_connection.jpg?raw=true)

# Variant 1: Virtual serial port with USB
The simplest way to send serial data to the Arduino is to use the serial monitor in the Arduino IDE and the USB cable.

# Variant 2: Real computer serial port (RS232 9-pin connector)
I cover this topic in a dedicated repository: https://github.com/raphaelchampeimont/arduino_RS232
