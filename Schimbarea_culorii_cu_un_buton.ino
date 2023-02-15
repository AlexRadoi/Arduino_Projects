//programul schimba culoarea unui LED RGB dupa durata pasarii unui buton, si poate fii stinge LED-ul prin batai din palma/suflat
int mic= A0;
int press_duration=0;
int button=8;
int Redpin=11;
int Greenpin=10;
int Bluepin=6;
int nrblinks=7;
void setup() {
  pinMode(button,INPUT);
  pinMode(Redpin, OUTPUT); 
  pinMode(Greenpin, OUTPUT); 
  pinMode(Bluepin, OUTPUT);
  pinMode (mic, INPUT);
Serial.begin(9600);
Serial.println ("dont forget to clap to reveal a new color");
press_duration=0;
}

void loop() {
int statusSensor=digitalRead(mic); // cisteste senzorul de sunet

 while(digitalRead(button)==HIGH){ // cat timp butonul ii apasat inregistreaza si arata durata pentru cat timp a fost apasat 
  delay(100);
  press_duration=press_duration+100;
  Serial.print("ms=");
  Serial.println(press_duration);
 
 } 
   
  if(statusSensor==HIGH){                   //daca senzorul de sunet ii activat incepe o animatie si schimba culoarea
      for (int j=1; j<=nrblinks; j=j+1) { 
  Serial.print("   nr of blinks #: ");
    Serial.println(j);
      SetColor ( 255, 60, 60);
      delay(200);
      SetColor (255,255,255);
      delay(300);
      SetColor ( 200, 255, 60);
 }
     Serial.println ("You discovered a new color: the Amethyst"); 
  }
  else{                                              //altfel daca butonul a fost tinut timp de o anumita durata schimba culoarea LED-ului RGB
    if(press_duration>=1000&&press_duration<=1500){
      SetColor (0,0,0);
       Serial.println("nice you just hit  white");
    }
    if(press_duration>=2000&&press_duration<=2500){
      SetColor (0,190,255);
      Serial.println("nice you just hit orange"); 
    }
    if(press_duration>=3000&&press_duration<3500){
      SetColor(255,200,40);
      Serial.println("nice you just hit light blue");
    }
    if(press_duration>=4000&&press_duration<=4500){
      SetColor (0,130,255);
      Serial.println("nice you just hit yellow");
    }
    if(press_duration>5000&&press_duration<=5500){
      SetColor(0,230,255);
      Serial.println("nice you just hit Red");
    }
    if(press_duration>6000&&press_duration<=6500 ){
     SetColor (180,255,180);
     Serial.println("nice you just hit purple");
    }
    if(press_duration>7000){
      SetColor (180, 100, 240);
    
    Serial.println ("this is the last color");
    }


press_duration=press_duration-press_duration; // Reseteaza mereu valoarea constantei care inregistreaza pentru cat timp a fost butonul apasat
}
}
void SetColor (int red, int green, int blue)    // the function which sets the color of the RGB LED

{analogWrite (Redpin, red);
analogWrite (Greenpin, green);
analogWrite (Bluepin, blue);

}
