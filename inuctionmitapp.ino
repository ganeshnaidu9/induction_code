#include "BluetoothSerial.h"
BluetoothSerial SerialBT;

int heat ;

void setup() {
  SerialBT.begin("induction");
  Serial.begin(115200);
 // pinMode(heatPin, OUTPUT);
  Serial.println("Bluetooth is ready");
}

void loop() {
  if (SerialBT.available()) {
    char heatValue = SerialBT.read();
    
    if (heatValue == '0') {  
      Serial.println("Stop Induction");
      
    } 
    else {
        
      Serial.print("Heat: ");
      Serial.println(heatValue);
    }
  }
}


//void INC() {
  //if (INCREASE < 8) {
    //INCREASE++;
    //digitalWrite(INCREASE, HIGH);
 // }
//}

//void DECR() {
  //if (DECREASE > 0) {
   // DECREASE--;
    //digitalWrite(DECREASE, HIGH);
  //}
//}




  
  
