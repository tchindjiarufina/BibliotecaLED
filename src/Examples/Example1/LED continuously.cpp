/*author: Tchindjia Rufina
Project: LED continuously
Description: Liga o LED continuadamente
Data: 15/04/2026
Versao: 1.0
*/

#include "Led.h"

Led led1(13);

void setup() {
  led1.ligarled();
}

void loop() {
  led1.update();
}