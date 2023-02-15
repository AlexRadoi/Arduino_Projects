int led1=9;
int led2=10;
int Rx=A1;
int Ry=A0;
int Sw=3;
int counter=1;  
int buttonState=0;
int lastbuttonState=0;
int MappedRx;
int MappedRy;
void setup() {
 pinMode(led1,OUTPUT);
 pinMode(led2,OUTPUT);
 pinMode(Sw,INPUT_PULLUP);
 pinMode(led1,OUTPUT); 
 pinMode(Rx,INPUT);
 pinMode(Ry,INPUT);
 Serial.begin(9600);

}

void loop() {
  buttonState=digitalRead(Sw);
 
  //Serial.println(buttonState);
  Serial.println (" ");
  Rx=analogRead(A1);
  Ry=analogRead(A0);
  //Serial.println(Rx);
  //Serial.println(" ");
  //Serial.println(Ry);
  //Serial.print(" ");
  MappedRx=map(Rx,0,990,0,255);
  MappedRy=map(Ry,0,990,0,255);
  //Serial.println ("this is Mapped ");
  //Serial.println (" ");
  //Serial.println(MappedRx);
  //Serial.println (" ");
  //Serial.println ("this is Mapped ");
  //Serial.println (" ");
  //Serial.println(MappedRy);
  //Serial.println (" ");
  //Serial.println ("n/ ");
  //pt vizualizare si reparare
  
  analogWrite(led1,MappedRx);
  analogWrite(led2,MappedRy);
  if ( buttonState !=lastbuttonState) {
     if (buttonState==HIGH){
      counter++;
     } 
     delay(50);
  }
  lastbuttonState=buttonState;
  if(counter>=3) {
    Serial.println("merge");
    counter=0;
    analogWrite(led1,255);
    analogWrite(led2,255);
    delay(250);
     analogWrite(led1,0);
     analogWrite(led2,0);
     delay(250);
  }
  else if (counter==1){
    Serial.println("inchis"); 
     analogWrite(led1,0);
     analogWrite(led2,0);
  }
 
}
