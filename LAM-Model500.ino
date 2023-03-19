#include <Adafruit_VS1053.h>
#include <SD.h>
#include <SPI.h>

#define CLK 9       // SPI Clock, shared with SD card
#define MISO 10      // Input data, from VS1053/SD card
#define MOSI 8      // Output data, to VS1053/SD card
// Connect CLK, MISO and MOSI to hardware SPI pins. 
// See http://arduino.cc/en/Reference/SPI "Connections"

// These are the pins used for the breakout example
#define BREAKOUT_RESET  13      // VS1053 reset pin (output)
#define BREAKOUT_CS     11     // VS1053 chip select pin (output)
#define BREAKOUT_DCS    6      // VS1053 Data/command select pin (output)


// These are common pins between breakout and shield
#define CARDCS 4     // Card chip select pin
// DREQ should be an Int pin, see http://arduino.cc/en/Reference/attachInterrupt
#define DREQ 3       // VS1053 Data request, ideally an Interrupt pin

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Adafruit VS1053 Simple Test");

}
