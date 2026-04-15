
/*author: Tchindjia Rufina
Project: LED blinks continuously
Description: Faz o LED piscar continuamente.
Data: 15/04/2026
Versao: 1.0
*/
#include "Led.h"

Led led1(13);

void setup() {
  led1.piscar(); // frequência padrão
}

void loop() {
  led1.update();
}