#include <Arduino.h>

int main() {

// initialization code
Serial.begin(9600);

while(1) {
// continous code
  Serial.println("Hello World.");
}

  return 0;
}
