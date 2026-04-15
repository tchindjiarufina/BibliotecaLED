
/*author: Tchindjia Rufina
Project: Turn the LED on for a set
Description: Liga o LED por um tempo determinado.
Data: 15/04/2026
Versao: 1.0
*/
#include "Led.h"

Led led1(13);
const int Botao = 15;

void setup()
{
  pinMode(Botao, INPUT_PULLUP);
  led1.ligarled(3000);
}

void loop()
{

  led1.update();
}

