#define soundSensor D5
#define LED D0
bool clap = 0;
bool sound_state =0;

void setup() {
 pinMode(soundSensor,INPUT);
 pinMode(LED,OUTPUT);
Serial.begin(115200);
}

void loop() {

  int SensorData=digitalRead(soundSensor); 
 
  if(SensorData==1 && sound_state ==0){
     clap = 1-clap;
     delay(100);
    }
    sound_state = SensorData;
    if(clap ==HIGH){
      digitalWrite(LED, HIGH);
    }
    else digitalWrite(LED, LOW);
    Serial.println(SensorData);
  }
 
