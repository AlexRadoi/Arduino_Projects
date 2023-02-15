int Redpin=11;
int Greenpin=10;
int Bluepin=6;
long brightness;
long Timer;
int deadTime=1000;
void setup() {
 Serial.begin (9600);
randomSeed(analogRead(A0));
}
 void loop() {
  long RandomNR;
  Serial.println ("timpul aleatoriu este: ");
                                                //generatoarele de nr aleatoare
     Timer=random(301,1501);      //modifica aceste valori pentru a modifica intervalul de timp       
    RandomNR=random(0,256);             //modifica aceste valori pentru a modifica intensitarea luminoasa

    
 Serial.println(Timer);
 Serial.println("luminozitatea aleatorie este: ");
 Serial.println(RandomNR);
 if(RandomNR>20||RandomNR<256){   
        
   brightness=RandomNR;
   analogWrite (Redpin, brightness);
  analogWrite (Greenpin,brightness);
  analogWrite (Bluepin,brightness);
  
 }
 delay(Timer);
 analogWrite (Redpin, 255);
  analogWrite (Greenpin,255);
  analogWrite (Bluepin,255);
  delay(deadTime);
 }

 
 

  


