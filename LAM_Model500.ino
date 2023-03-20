//included libraries
#include <Adafruit_VS1053.h>
#include <SdFat.h>
#include <SPI.h>
#include "patches.h"
#include "definitions.h"

#define FILE_WRITE_CUSTOM (O_WRITE | O_READ | O_CREAT)

//MKR Pins
#define REC_BUTTON A0 // Phone Hook
#define CARDCS A4     // Card chip select pin
#define DREQ 2        // VS1053 Data request, ideally an Interrupt pin
#define LED 4         // Red LED to prove its recording
#define DCS 5         // VS1053 Data/command select pin (output)
#define CS 6          // VS1053 chip select pin (output)
#define RESET 7       // VS1053 reset pin (output)
#define VS1053_MODE_SM_LINE1 0X4000 // VS1053 Mic Input Line

/* Testing values */
int sensorValue = 0;
int audioValue = 0;
/*****************/

File recording; // File to save our recording onto

int ch = 2;
uint32_t fileSize = 0;
uint32_t adpcmBlocks = 0;
uint16_t sampleRate = 8000;
static uint8_t recBuff[REC_BUFFER_SIZE]


#define RECBUFFSIZE 32   //32, 64, or 128 Bytes
uint8_t recording_buffer[RECBUFFSIZE];
int dataNeededInBuffer = REC_BUFFER_SIZE;

Adafruit_VS1053_FilePlayer musicPlayer = Adafruit_VS1053_FilePlayer(RESET, CS, DCS, DREQ, CARDCS);


void setup() {
  Serial.begin(9600);
  Serial.println("Testing Adafruit VS1053b x MKRZero")
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Adafruit VS1053 Simple Test");

}
