#include <ModbusRTU.h>
#include "intToFloat.h"
ModbusRTU mb;
uint16_t Mread0[10];
bool cbWrite(Modbus::ResultCode event, uint16_t transactionId, void* data) {
  Serial.printf_P("Request result: 0x%02X, Mem: %d\n", event, ESP.getFreeHeap());
}
void setup() {
  Serial.begin(115200);
  Serial1.begin(9600, SERIAL_8N1);
  mb.begin(&Serial1);
  mb.master();
}
void loop() {
  if (!mb.slave()) {
    mb.readHreg(1, 3960, Mread0, 2 , cbWrite);  
    Serial.println(Mread0[0]);
    Serial.println(Mread0[1]);
  }
  mb.task();
  delay(1000);
  yield();
} 
