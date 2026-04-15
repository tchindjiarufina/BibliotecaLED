/*author: Tchindjia Rufina
Project: LED with a custom frequency
Description: O LED pisca continuamente com frequencia 
Data: 15/04/2026
Versao: 1.0
*/
#include "Led.h"

Led led1(13);

void setup() {
  led1.piscar(2.0); 
}

void loop() {
  led1.update();
}

