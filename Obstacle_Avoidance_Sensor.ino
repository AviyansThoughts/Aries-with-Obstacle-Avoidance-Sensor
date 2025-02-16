// Welcome to Aviyan's Thoughts

int ledPin = 23;      // LED pin on Aries
int detectorPin = 3;  // obstacle avoidance sensor interface
int val;              // variable to store result
//int enablePin = 2;  // sensor enable interface (EN)

void setup()
{
  pinMode(ledPin, OUTPUT);  // Define LED as output interface
  pinMode(detectorPin, INPUT);  // Define obstacle avoidance sensor as input interface
  
  // [uncomment and remove jumper on module to use enable pin (EN)]
  //pinMode(enablePin, OUTPUT);
  //digitalWrite(enablePin, HIGH);  // Enable sensor
}

void loop()
{
  val = digitalRead(detectorPin); // Read value from sensor
  if(val == LOW) // When the sensor detects an obstacle, the LED on the Aries lights up
  {
    digitalWrite(ledPin, LOW);
  }
  else
  {
    digitalWrite(ledPin, HIGH);
  }
}