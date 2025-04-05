void read_ir() {
  while (1) {
    Serial.print(" L1 IR Sensor value: ");
    Serial.println(digitalRead(L1_IR));
    ///////////////////////////////////////////
    Serial.print(" R1 IR Sensor value: ");
    Serial.println(digitalRead(R1_IR));
    delay(100);
  }
}
void trackline_forward() {

  while (1) {

    if (digitalRead(L1_IR) >= 1 && digitalRead(R1_IR) >= 1) {
      Serial.print("break :");
      //Serial.println(threshold);
      break;
    }

    else if (digitalRead(L1_IR) <= 0 && digitalRead(R1_IR) <= 0) {
      forward(5);

    } else if (digitalRead(L1_IR) >= 1 && digitalRead(R1_IR) <= 0) {

      turn_left(5);

    } else if (digitalRead(L1_IR) <= 0 && digitalRead(R1_IR) >= 1) {

      turn_right(5);
    }
    // break;
  }
  forward(100);
  stop(200);
}
void trackline_backward() {

  while (1) {

    if (digitalRead(L1_IR) >= 1 && digitalRead(R1_IR) >= 1) {
      Serial.print("break :");
      //Serial.println(threshold);
      break;
    }

    else if (digitalRead(L1_IR) <= 0 && digitalRead(R1_IR) <= 0) {
      backward(5);

    } else if (digitalRead(L1_IR) >= 1 && digitalRead(R1_IR) <= 0) {

      turn_left(5);

    } else if (digitalRead(L1_IR) <= 0 && digitalRead(R1_IR) >= 1) {

      turn_right(5);
    }
    // break;
  }
  backward(5);
  stop(200);
}
void turn_right_ir() {
  turn_right(325);
  stop(200);
  while (digitalRead(R1_IR) > 0) {
    turn_right(50);
    break;
  }
  stop(200);
}
void turn_left_ir() {
  turn_left(325);
  stop(200);
  while (digitalRead(L1_IR) > 0) {
    turn_left(50); 
    break;
  }
  stop(200);
}
