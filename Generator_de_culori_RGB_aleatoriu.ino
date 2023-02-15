int Redpin=11;
int Greenpin=10;
int Bluepin=6;
int RandomNR=0;
int lastRandomNR=0;

void setup() {
pinMode (Redpin, OUTPUT);
pinMode (Greenpin,OUTPUT);
pinMode (Bluepin, OUTPUT); 
Serial.begin (9600);
Serial.println ("NR aleatoriu este : ");
randomSeed(33);
}

void loop() {
  while (RandomNR==lastRandomNR){
    RandomNR=random(4,15);
    Serial.println ("X");
  }
  lastRandomNR=RandomNR;
  Serial.println(RandomNR);
  RandomNR=random (6,15);
 if (RandomNR==6){
  SetColor (255,255,0);
  delay(1000);
 }
 if(RandomNR==10) {
  SetColor (255,0,255);
  delay (1000);
 }
 if(RandomNR==11) {
  SetColor (0,255,255);
  delay(1000);
 }
 if(RandomNR!=6 || RandomNR!=11 || RandomNR!=10 || RandomNR!=22){
  SetColor (255,255,255);
  delay(1000);
 }
 if(RandomNR!=6){
  Serial.println
("Culoarea nu a fost gasita");
 }
 if(RandomNR!=11){
  Serial.println
  ("Culoarea nu a fost gasita");
 }
 if(RandomNR!=10){
  Serial.println
  ("Culoarea nu a fost gasita");
 }
 if(RandomNR=14){
  SetColor (0,190,255); 
  delay(1000);
  if(RandomNR!=22){
    Serial.println 
    ("Culoarea nu a fost gasita");
  }
 }
}
void SetColor (int red, int green, int blue)    // the function which sets the color of the RGB LED

{analogWrite (Redpin, red);
analogWrite (Greenpin, green);
analogWrite (Bluepin, blue);
}
