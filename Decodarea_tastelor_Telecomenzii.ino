#include <IRremote.h>

const int RECV_PIN = 7;
IRrecv irrecv(RECV_PIN);
decode_results results;
unsigned long key_value = 0;
void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
 
}

void loop(){
  if (irrecv.decode(&results)){
     if (results.value == 0XFFFFFFFF)
        results.value = key_value;
        Serial.println(results.value, HEX);
       
        irrecv.resume();
   
  }
}
