/*
  ShiftLCD Library - Hello World
 
 Demonstrates the use a 16x2 LCD display.  The ShiftLCD library works with
 all LCD displays that are compatible with the Hitachi HD44780 driver.
 There are many of them out there, and you can usually tell them by the
 16-pin interface.
 
 This sketch prints "Hello World!" to the LCD
 and shows the time.
 
  The circuit:
 
 ---Shift Register 74HC595---
 * SR Pin 14 to Arduino pin 2 | ATTINY PIN 0
 * SR Pin 12 to Arduino pin 3 | ATTINY PIN 1
 * SR Pin 11 to Arduino pin 4 | ATTINY PIN 2
 * SR Pin  8 to Ground
 * SR Pin 16 to +5v
 * SR Pin 13 to Ground
 * SR Pin 10 to +5v
 -----Shift Reg to LCD--------
 * SR Pin 15 to D7
 * SR Pin 1  to D6
 * SR Pin 2  to D5
 * SR Pin 3  to D4
 * SR Pin 5  to MOSFET gate
 * SR Pin 6  to Enable
 * SR Pin 7  to RS
 -----LCD HD44780-------------
 * Vss to Ground
 * Vdd to +5V
 * Vo  to 10k Wiper
 * R/W to Ground
 * 5v  to +5v
 * Gnd to MOSFET Drain
 ------N Chanel MOSFET--------
 * Source to Ground
 * Gate   to SP Pin 5
 * Drain  to LCD Gnd
 * 1k Resistor Between gate and source
 
 Library modified from the original LiquidCrystal Library
 This example originaly by Tom Igoe, Jul 2009
 Example modified for use with ShiftLCD
 Chris Parish, January 12th 2010
 */

// include the library code:
#include "ShiftLCD.h"

int DATAPIN = 0;//SER   - Data
int LATCHPIN = 1;//RCK  - Reset Clock
int CLOCKPIN = 2;//SCK  - Clock

// initialize the library with the numbers of the interface pins
ShiftLCD lcd(DATAPIN, SCK, LATCHPIN, 4);

void setup() {
  // set up the LCD's number of rows and columns: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("   I LOVE YOU   ");
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  lcd.print(" *** MANASI ***");
}

void loop() {
  // set the cursor to column 0, line 1
  delay(1000);
}

