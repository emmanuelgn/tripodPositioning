const int dirPin = 5; // D1
const int stepPin = 16; // D0
const int enablePin = 15; // D8
const int stepsPerRevolution = 500;
 
void setup()
{
  // Declare pins as Outputs
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(enablePin, OUTPUT);
  pinMode(BUILTIN_LED, OUTPUT);
}
void loop()
{
  digitalWrite(enablePin, HIGH);
  digitalWrite(BUILTIN_LED, HIGH);
  // Set motor direction clockwise
  digitalWrite(dirPin, HIGH);
 
  // Spin motor slowly
  for(int x = 0; x < stepsPerRevolution; x++)
  {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(2000);
  }
  delay(3000); // Wait a second
  digitalWrite(BUILTIN_LED, LOW);
  
  // Set motor direction counterclockwise
  digitalWrite(dirPin, LOW);
 
  // Spin motor quickly
  for(int x = 0; x < stepsPerRevolution; x++)
  {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(2000);
  }
  delay(3000); // Wait a second
}
