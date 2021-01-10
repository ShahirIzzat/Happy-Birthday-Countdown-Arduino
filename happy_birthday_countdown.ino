// Program to demonstrate the MD_Parola library
//
// Uses the Arduino Print Class extension with various output types
//
// MD_MAX72XX library can be found at https://github.com/MajicDesigns/MD_MAX72XX
//

#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>


const uint16_t WAIT_TIME = 100;

// Define the number of devices we have in the chain and the hardware interface
// NOTE: These pin numbers will probably not work with your hardware and may
// need to be adapted
#define HARDWARE_TYPE MD_MAX72XX::ICSTATION_HW
#define MAX_DEVICES 4
#define CLK_PIN   13
#define DATA_PIN  11
#define CS_PIN    10


// Hardware SPI connection
MD_Parola P = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);
// Arbitrary output pins
// MD_Parola P = MD_Parola(HARDWARE_TYPE, DATA_PIN, CLK_PIN, CS_PIN, MAX_DEVICES);

void setup(void)
{
  P.begin();
  P.print(9, DEC);
  noTone(8);
  tone(6, 440, 200);
  delay(200);
  noTone(6);
  tone(7, 494, 500);
  delay(500);
  noTone(7);
  tone(8, 523, 300);
  delay(300);
  P.print(8, DEC);
  noTone(8);
  tone(6, 440, 200);
  delay(200);
  noTone(6);
  tone(7, 494, 500);
  delay(500);
  noTone(7);
  tone(8, 523, 300);
  delay(300);
  P.print(7, DEC);
  noTone(8);
  tone(6, 440, 200);
  delay(200);
  noTone(6);
  tone(7, 494, 500);
  delay(500);
  noTone(7);
  tone(8, 523, 300);
  delay(300);
  P.print(6, DEC);
  noTone(8);
  tone(6, 440, 200);
  delay(200);
  noTone(6);
  tone(7, 494, 500);
  delay(500);
  noTone(7);
  tone(8, 523, 300);
  delay(300);
  P.print(5, DEC);
  noTone(8);
  tone(6, 440, 200);
  delay(200);
  noTone(6);
  tone(7, 494, 500);
  delay(500);
  noTone(7);
  tone(8, 523, 300);
  delay(300);
  P.print(4, DEC);
  noTone(8);
  tone(6, 440, 200);
  delay(200);
  noTone(6);
  tone(7, 494, 500);
  delay(500);
  noTone(7);
  tone(8, 523, 300);
  delay(300);
  P.print(3, DEC);
  noTone(8);
  tone(6, 440, 200);
  delay(200);
  noTone(6);
  tone(7, 494, 500);
  delay(500);
  noTone(7);
  tone(8, 523, 300);
  delay(300);
  P.print(2, DEC);
  noTone(8);
  tone(6, 440, 200);
  delay(200);
  noTone(6);
  tone(7, 494, 500);
  delay(500);
  noTone(7);
  tone(8, 523, 300);
  delay(300);
  P.print(1, DEC);
  noTone(8);
  tone(6, 440, 200);
  delay(200);
  noTone(6);
  tone(7, 494, 500);
  delay(500);
  noTone(7);
  tone(8, 523, 300);
  delay(300);
}

void loop(void)
{
  P.print("Enjoy");
  delay(1000);
  P.print("Your");
  delay(1000);
  P.print("Special");
  delay(1000);
  P.print("Day");
  delay(1000);
  P.getPause();
}
