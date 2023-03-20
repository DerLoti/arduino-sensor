void sounds() {
  if (cm <= 5) {
    for (int i = 0; i <= 5; i++) {
      tone(8, 2000);
      digitalWrite(redLed, HIGH);
      delay(100);
      noTone(8);
      digitalWrite(redLed, LOW);
      delay(100);
    }
  } else if (cm <= 15) {
    for (int i = 0; i <= 5; i++) {
      tone(8, 1500);
      digitalWrite(yellowLed, HIGH);
      delay(100);
      noTone(8);
      digitalWrite(yellowLed, LOW);
      delay(100);
    }

  } else if (cm <= 30) {
    for (int i = 0; i <= 5; i++) {
      tone(8, 1200);
      digitalWrite(greenLed, HIGH);
      delay(100);
      noTone(8);
      digitalWrite(greenLed, LOW);
      delay(100);
    }
  }
}
