#include <Wire.h>
#include "Adafruit_TCS34725.h"
//-------------------------------------------------Declare variable-------------------------------------------------------//
#define L1_IR 23  // Left IR sensor
#define R1_IR 34  // Right IR sensor

#define L_LED 16  // Left LED
#define R_LED 17  // Right LED

int new_red, new_green, new_blue;    //color sensor
//-----------------------------------------------------------------------------------------------------------------------//

//-------------------------------------------------edit Parameter-------------------------------------------------------//

void setup() {
  Serial.begin(115200);
  motorsetup();
  //--------- IR Pin ---------------//
  pinMode(L1_IR, INPUT);
  pinMode(R1_IR, INPUT);
  
  //---------- LED Pin -----------------//
  pinMode(L_LED, OUTPUT);
  pinMode(R_LED, OUTPUT);

//----------------Edit sequence code here--------------//
  digitalWrite(L_LED, HIGH);
  digitalWrite(R_LED, HIGH);
  delay(1000);


  // trackline_forward();
  // trackline_forward();
  // trackline_forward();
  // color_sensor(); 
  // stop(1000);
  // trackline_backward();

}
void loop() {
  // read_ir();
  color_sensor();
}





