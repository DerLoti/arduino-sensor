#include <LiquidCrystal.h>

int trigPin = 13;  // Trigger
int echoPin = 10;  // Echo

int redLed = A2;
int yellowLed = A1;
int greenLed = A0;
long duration, cm, inches;

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {

  //digitalWrite(redLed, HIGH);
  //digitalWrite(greenLed, HIGH);
  //digitalWrite(yellowLed, HIGH);

  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);

  cm = (duration / 2) / 29.1;  // Divide by 29.1 or multiply by 0.0343
  lcd.noDisplay();
  delay(500);
  lcd.display();
  lcd.print(cm);
  lcd.print("cm");
  sounds();
}
