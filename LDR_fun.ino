int led=9;
int senzor=A4;
int mappedSenzor;
void setup() {
 pinMode(led,OUTPUT);
 pinMode(senzor,INPUT);
 Serial.begin(9600);
}

void loop() {
   int rezultSenzor;
   rezultSenzor=analogRead(senzor);
   mappedSenzor=map(rezultSenzor,1,120,0,255);
   Serial.println(rezultSenzor);
   Serial.println(" ");
    Serial.println("this is mapped ");
    Serial.println(" ");
    Serial.println(mappedSenzor);
    Serial.println(" ");
   if (mappedSenzor >=22&&mappedSenzor<50){
    digitalWrite(led,HIGH);
   }
   else {
    digitalWrite(led,LOW);
    
   }
}
