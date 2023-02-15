int Redpin=10;
int Greenpin=6;
int Bluepin=11;
String colorChoice;
int nrblinks=12;
int Timeon=200;
int Timeoff=300;
void setup() {
   Serial.begin(9600); 
pinMode(Redpin, OUTPUT); 
pinMode(Greenpin, OUTPUT); 
pinMode(Bluepin, OUTPUT);
 

}

void loop() {
 Serial.println (" ");
  Serial.println("What color would you like the LED? :"); 
 Serial.println("(red, green,blue,yellow, magenta, orange,strawberry red, aqua green or purple)"); // program's interface
  Serial.println (" ");
  while (Serial.available()==0) { }   //prompt the user for input
  colorChoice = Serial.readString();
 if (colorChoice=="red" ) {          //red blinks and shows the state of the red LED
  SetColor (0,255,255);
  Serial.println("Red blinks");
 for (int j=1; j<nrblinks; j=j+1) { 
  Serial.print("   nr of blinks #: ");
    Serial.println(j);
  SetColor (0,255,255);
  delay (Timeon);
  SetColor (255,255,255);
  delay (Timeoff); 
 } Serial.println (" ");
 Serial.println (" Red is on");
 SetColor (0,255,255);
}

if (colorChoice=="blue" ){       //blue blinks and shows the state of the blue LED
  SetColor (255,255,0);
  Serial.println("blue blinks");
  for (int j=1; j<nrblinks; j=j+1) {
    Serial.print("   nr of blinks #: ");
    Serial.println(j);
    SetColor (255,255,0);
    delay (Timeon);
    SetColor (255,255,255);
    delay(Timeoff);
  } Serial.println (" ");
 Serial.println (" blue is on");
  SetColor (255,255,0);
}


if (colorChoice=="green" ) {     //green blinks  and shows the state of the green LED
  SetColor (255,0,255);
  Serial.println("blue blinks");
  for (int j=1; j<nrblinks; j=j+1) {
     Serial.print("   nr of blinks #: ");
    Serial.println(j);
    SetColor (255,0,255);
    delay (Timeon);
    SetColor (255,255,255);
    delay (Timeoff);
  }Serial.println (" ");
 Serial.println (" green is on");
  SetColor (255,0,255);
}


if (colorChoice== "orange") {    //orange blinks and shows the state of the orange LED
  SetColor (0,190,255); 
  Serial.println("orange blinks");
   for (int j=1; j<nrblinks; j=j+1) {
      Serial.print("   nr of blinks #: ");
    Serial.println(j);
     SetColor (0,190,255); 
     delay (Timeon);
     SetColor (255,255,255);
     delay (Timeoff);
   }Serial.println (" ");
 Serial.println (" orange is on");
    SetColor (0,190,255); 
}



if (colorChoice== "magenta") {     //magenta blinks and shows the state of the mageneta LED
 SetColor (0,255,200);
   Serial.println("magenta blinks");
  for (int j=1; j<nrblinks; j=j+1) {
   Serial.print("   nr of blinks #: ");
    Serial.println(j);
    SetColor (0,255,200);
    delay (Timeon);
    SetColor (255,255,255);
    delay (Timeoff);
  }Serial.println (" ");
 Serial.println (" magenta is on");
  SetColor (0,255,200);
}

if (colorChoice=="yellow") {    // yellow blinks  and shows the state of the yellow LED
  SetColor (0,130,255);
    Serial.println("yellow blinks");
  for (int j=1; j<nrblinks; j=j+1) {
    Serial.print("   nr of blinks #: ");
    Serial.println(j);
    SetColor (0,130,255);
    delay(Timeon);
    SetColor (255,255,255);
    delay (Timeoff);
  }Serial.println (" ");
 Serial.println (" yellow is on");
  SetColor (0,130,255);
}

 if (colorChoice== "strawberry red"){   //strawberry red blinks and shows the state of the strawberry red LED
     SetColor (100,220,220);
     Serial.println("strawberry red blinks");
     for (int j=1; j<nrblinks; j=j+1) {
         Serial.print("   nr of blinks #: ");
         Serial.println(j);
        SetColor (100,220,220);
        delay (Timeon);
        SetColor (255,255,255);
        delay (Timeoff);
     }Serial.println (" ");
      Serial.println (" strawberry red is on");
       SetColor (100,220,220);
 }
   
  if (colorChoice=="aqua green"){       // aqua green blinks and shows the state of the aqua green LED
     SetColor (255,0,200);
      Serial.println("aqua green blinks");
      for (int j=1; j<nrblinks; j=j+1) {
        Serial.print("   nr of blinks #: ");
        Serial.println(j);
         SetColor (255,0,200);
         delay (Timeon);
         SetColor(255,255,255);
         delay (Timeoff);
      } Serial.println (" ");
      Serial.println (" aqua green is on");
       SetColor (255,0,200);
  }
  
if (colorChoice== "purple"){          // purple blinks and shows the state of the purple LED
  SetColor (100,255,0);
  Serial.println("purple blinks");
   for (int j=1; j<nrblinks; j=j+1) {
    Serial.print("   nr of blinks #: ");
     Serial.println(j);
    SetColor (100,255,0);
    delay (Timeon);
    SetColor (255,255,255);
    delay (Timeoff);
   } Serial.println (" ");
      Serial.println (" purple is on");
   SetColor (100,255,0);
}


if (colorChoice!="red" && colorChoice!="green" && colorChoice != "blue" && colorChoice !="yellow" && colorChoice != "orange"  && colorChoice != "pink"  &&colorChoice != " purple" && colorChoice != "aqua green"  && colorChoice !="strawberry red") {  
    Serial.println("That is not a valid color choice, please try again");
    Serial.println("");                                                     // If the user types a wrong color 
}
}
void SetColor (int red, int green, int blue)    // the function which sets the color of the RGB LED

{analogWrite (Redpin, red);
analogWrite (Greenpin, green);
analogWrite (Bluepin, blue);
}
