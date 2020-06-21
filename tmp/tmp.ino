#include <VirtuinoCM.h>
#include <VirtuinoBluetooth.h>
#include <SoftwareSerial.h>

SoftwareSerial VirtualSerial(3, 2);
VirtuinoBluetooth virtuino(VirtualSerial, 57600);

void setup() {
  VirtualSerial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  virtuino.run();
  if (virtuino.vDigitalMemoryRead(9)) {
    digitalWrite(13, HIGH);

  }

}