/*author: Tchindjia Rufina
Project: LED with button
Description: Ao pressionar o Botao o LED acende!
Data: 15/04/2026
Versao: 1.0
*/

#include "Led.h"

Led led1(13);

const int botao = 2;

void setup()
{
  pinMode(botao, INPUT);
}

void loop()
{

  bool EstadoAtualBotao == digitalRead(botao);
  static bool EstadoAnteriorBotao == 1;

  if (!EstadoAtualBotao && EstadoAnteriorBotao)
  {

    led1.ligarled();
  }
  EstadoAnteriorBotao = EstadoAtualBotao;
  led1.update();
}
