#include <LiquidCrystal.h>

// Connections to the circuit: LCD screen
const int LCD_RS_PIN = 12;
const int LCD_ENABLE_PIN = 13;
const int LCD_DATA_PIN_4 = 8;
const int LCD_DATA_PIN_5 = 9;
const int LCD_DATA_PIN_6 = 10;
const int LCD_DATA_PIN_7 = 11;

// Declare here how many LCD rows and cols the LCD screen has:
const int LCD_ROWS = 2;
const int LCD_COLS = 16;
const int LCD_TOTAL_CHARS = LCD_ROWS * LCD_COLS;

byte buffer[LCD_TOTAL_CHARS] = " Ready ";

byte currentCol = 0;

LiquidCrystal lcd(LCD_RS_PIN, LCD_ENABLE_PIN, LCD_DATA_PIN_4, LCD_DATA_PIN_5, LCD_DATA_PIN_6, LCD_DATA_PIN_7);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(LCD_COLS, LCD_ROWS);

  Serial.begin(9600);

  displayBuffer();
}

void displayBuffer() {
  for (int i = 0; i < LCD_ROWS; i++) {
    lcd.setCursor(0, i);
    for (int j = 0; j < LCD_COLS; j++) {
      lcd.write(buffer[i * LCD_COLS + j]);
    }
  }
}


void loop() {
  // put your main code here, to run repeatedly:
  bool needToUpdate = false;
  int value;

  while ((value = Serial.read()) >= 0) {
    // shift all bytes in buffer
    for (int i = 0; i < LCD_TOTAL_CHARS - 1; i++) {
      buffer[i] = buffer[i + 1];
    }
    buffer[LCD_TOTAL_CHARS - 1] = value;
    needToUpdate = true;
  }

  if (needToUpdate) {
    // re-display entire buffer
    displayBuffer();
  }
}
