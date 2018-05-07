const int stepPin = 3;
const int dirPin = 4;
const int ms1 = 5;
const int ms2 = 6;
const int ms3 = 7;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

}

void loop() {
  digitalWrite(dirPin, HIGH);
  // HIGH, HIGH, HIGH = sixteenth
  // LOW, LOW, LOW = full
  digitalWrite(ms1, LOW);
  digitalWrite(ms2, LOW);
  digitalWrite(ms3, LOW);

  //  digitalWrite(ms1, HIGH);
  //  digitalWrite(ms2, HIGH);
  //  digitalWrite(ms3, HIGH);

   for (int x = 0; x < 200; x++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
   }
   delay(500);
}
