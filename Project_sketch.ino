//Define pin numbers
const int TrigPin = 13;
const int EchoPin = 12;
const int Buzzer = 9;

//Define variables
long duration;
int distance;
int safetyDistance;

void setup() 
{
  Serial.begin(9600);
//  Set the TrigPin as an Output
  pinMode(TrigPin, OUTPUT);
//  Set the EchoPin as an Input
  pinMode(EchoPin, INPUT);
  pinMode(Buzzer, OUTPUT);

}

void loop() 
{
//  Clear the TrigPin
  digitalWrite(TrigPin, LOW);
  delayMicroseconds(2);

//  Set the TrigPin on HIGH state for about 10 microseconds
  digitalWrite(TrigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin, LOW);

//  Read the EchoPin and returns the sound wave travel time in microseconds
  duration = pulseIn(EchoPin, HIGH);

//  Calculate the distance
  distance = duration * 0.034/2;
  Serial.println();

  safetyDistance = distance;
  if(safetyDistance <= 35)
  {
    Serial.println("Door Open");
    Serial.print("Distance = ");
    Serial.print(distance);
    digitalWrite(Buzzer, HIGH);
    delay(500);
  }
  else
  {
    Serial.println("Door closed");
    digitalWrite(Buzzer, LOW);
    delay(500);
  }

}
