#include <LiquidCrystal.h>

// Define pins
const int trigPin = 9;
const int echoPin = 10;
const int tempPin = A0;

const int greenLED = 2;
const int orangeLED = 3;
const int redLED = 4;
const int buzzer = 5;

// LCD pins: RS, EN, D4, D5, D6, D7
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

// Variables
long duration;
int distance;
float temperature;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Initialize pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(orangeLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buzzer, OUTPUT);

  // Initialize LCD
  lcd.begin(16, 2);
  lcd.print("Flood Monitor");
  delay(2000);
  lcd.clear();
}

void loop() {
  // --- Measure distance ---
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;  // cm

  // --- Read temperature ---
  int tempReading = analogRead(tempPin);
  temperature = tempReading * 0.48828125; // LM35: 10mV/°C

  // --- Display on LCD ---
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Water:");
  lcd.print(distance);
  lcd.print("cm");

  lcd.setCursor(0, 1);
  lcd.print("Temp:");
  lcd.print(temperature);
  lcd.print("C");

  // --- LED + Buzzer Logic ---
  if (distance > 30) {
    digitalWrite(greenLED, HIGH);
    digitalWrite(orangeLED, LOW);
    digitalWrite(redLED, LOW);
    digitalWrite(buzzer, LOW);
  } else if (distance <= 30 && distance > 15) {
    digitalWrite(greenLED, LOW);
    digitalWrite(orangeLED, HIGH);
    digitalWrite(redLED, LOW);
    digitalWrite(buzzer, LOW);
  } else {
    digitalWrite(greenLED, LOW);
    digitalWrite(orangeLED, LOW);
    digitalWrite(redLED, HIGH);
    digitalWrite(buzzer, HIGH);
  }

  // --- Send data to Bolt IoT module ---
  Serial.print("Distance:");
  Serial.print(distance);
  Serial.print(",Temp:");
  Serial.println(temperature);

  delay(2000); // Delay before next reading
}
