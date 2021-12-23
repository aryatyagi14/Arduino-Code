int buttonPin = 1;
int laserPin = 4;
int touchPin = 4;
void setup ()
{
   pinMode (buttonPin, INPUT); // define the digital output interface 13 feet
   pinMode(laserPin, OUTPUT);
}
void loop () {
  int val = digitalRead(buttonPin);
  if (val == LOW) {
    digitalWrite(laserPin, HIGH);
    delay(30);
  }
  else {
    digitalWrite(laserPin, LOW);
    delay(30);
  }
   //digitalWrite (4, HIGH); // open the laser head
   //delay (1000); // delay one second
   //digitalWrite (4, LOW); // turn off the laser head
   //delay (1000); // delay one second
}
