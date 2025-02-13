void turn_on_led() {
  Serial.println("turn_on_led");
  digitalWrite(L_LED, HIGH);
  digitalWrite(R_LED, HIGH);
  delay(1000);
}
void turn_off_led() {
  Serial.println("turn_off_led");
  digitalWrite(L_LED, LOW);
  digitalWrite(R_LED, LOW);
  delay(1000);
}
void led_blink() {
  Serial.println("turn_blink");
  for (int i = 0; i < 5; i++) 
  {
  // Toggle the LED pin
  digitalWrite(L_LED, HIGH);
  digitalWrite(R_LED, HIGH);
  delay(200);
  digitalWrite(L_LED, LOW);
  digitalWrite(R_LED, LOW);
  delay(200);
 }
}
