int Redpin = 6;
int Greenpin = 10;
int Bluepin = 11;
const int trigPin = 9;
const int echoPin = 8;
long duration;
int distance;
int Redled=3;
void setup() {
  Serial.begin(9600);
  pinMode(Redpin, OUTPUT);
  pinMode(Greenpin, OUTPUT);
  pinMode(Bluepin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(Redled,OUTPUT);
}

void loop() {
 digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  duration = pulseIn(echoPin, HIGH);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  distance = duration * 0.034 / 2;
  if(distance>=120){
   SetColor(255,200,204);
    delay(1000);
    SetColor(255,255,255);
    delay(100);
  }
  
  if(distance<50&&distance!=0){
    digitalWrite(Redled,HIGH);
    
     SetColor(255,255,255);
      
  }
 
  if(distance>50&&distance!=0&&distance>!120){
    digitalWrite(Redled,LOW);
     delayMicroseconds(10);
     SetColor(255,255,255);
  }
 
   Serial.print("Distance:  ");
   Serial.println(distance);
   
}
void SetColor (int red, int green, int blue)    // the function which sets the color of the RGB LED

{ analogWrite (Redpin, red);
  analogWrite (Greenpin, green);
  analogWrite (Bluepin, blue);

}
