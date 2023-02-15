int X_pin=A3;
int Y_pin=A2;
int Redpin=10;
int Greenpin=6;
int Bluepin=11;
int mapX = 0;
int mapY = 0;
void setup() {
  pinMode(X_pin,INPUT);
  pinMode(Y_pin,INPUT);
  pinMode(Redpin,OUTPUT);
  pinMode(Greenpin,OUTPUT);
  pinMode(Bluepin,OUTPUT);
 
  Serial.begin(9600);
 
}

void loop() { 
 
 
  
int  val_X= analogRead(X_pin);
int val_Y=analogRead(Y_pin);
   mapX = map(val_X, 0, 1023, 0, 255);
  mapY = map(val_Y, 0, 1023, 0, 255);
  
  Serial.println("X: ");
  Serial.println(mapX);
  delay(200);
  Serial.println(" | Y: ");
  Serial.println(mapY);
  delay(200);
  
   
 

 
}


void SetColor (int red, int green, int blue)    // the function which sets the color of the RGB LED

{analogWrite (Redpin, red);
analogWrite (Greenpin, green);
analogWrite (Bluepin, blue);

}
