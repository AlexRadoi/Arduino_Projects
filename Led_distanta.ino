int Redpin = 6;
int Greenpin = 10;
int Bluepin = 11;
const int trigPin = 9;
const int echoPin = 8;
long duration;
int distance;

void setup() {
  Serial.begin(9600);
  pinMode(Redpin, OUTPUT);
  pinMode(Greenpin, OUTPUT);
  pinMode(Bluepin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(4);
  duration = pulseIn(echoPin, HIGH);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(12);
  digitalWrite(trigPin, LOW);
  distance = duration * 0.034 / 2;

  if (distance >= 20) {
    SetColor(100, 190, 255);
  }
  if (distance >= 63) {
    SetColor(180, 255, 180);
  } Serial.print("Distance:  ");
  Serial.println(distance);
  if ( distance == 0) {
    delayMicroseconds(2);
  }

if(distance>=35&&distance<63&&distance>20){
  SetColor(255,100,180);
}
if(distance<=10&&distance>0){
  SetColor(0,0,0);
}
}

void SetColor (int red, int green, int blue)    // the function which sets the color of the RGB LED

{ analogWrite (Redpin, red);
  analogWrite (Greenpin, green);
  analogWrite (Bluepin, blue);

}

