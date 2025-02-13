/* Connect SCL    to analog 5
   Connect SDA    to analog 4
   Connect VDD    to 3.3V DC
   Connect GROUND to common ground */

#define commonAnode false
byte gammatable[256];

/* Initialise with default values (int time = 2.4ms, gain = 1x) */
// Adafruit_TCS34725 tcs = Adafruit_TCS34725();

/* Initialise with specific int time and gain values */
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

void sub_color() {

  if (tcs.begin()) 
  {
  } 
  else {
    Serial.println("No TCS34725 found ... check your connections");
    while (1); // halt!
  }
  for (int i=0; i<256; i++) 
  {
    float x = i;
    x /= 255;
    x = pow(x, 2.5);
    x *= 255; 
    if (commonAnode)      
    {
      gammatable[i] = 255 - x;
    } 
    else 
    {
      gammatable[i] = x;
    }
  }

  float red, green, blue;

  // tcs.setInterrupt(false);  // turn on LED
  delay(60);  // takes 50ms to read

  tcs.getRGB(&red, &green, &blue);
  // tcs.setInterrupt(true);  // turn off LED

  new_red = gammatable[(int)red];
  new_green = gammatable[(int)green];
  new_blue = gammatable[(int)blue];
  // Serial.print("red = ");
  // Serial.print(new_red);
  // Serial.print(" ---green = ");
  // Serial.print(new_green);
  // Serial.print(" ---blue = ");
  // Serial.print(new_blue);
  Serial.print("\n");
}

