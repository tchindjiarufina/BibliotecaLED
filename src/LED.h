#ifndef LED_h
#define LED_h
#include <Arduino.h>

// MÉTODOS - AÇÕES DO OBJETO
// PROPRIEDADES - CARACTERÍSTICAS DO OBJETO

/**
 * @class Led
 * @brief Classe para controle não bloqueante de um LED.
 * Permite ligar, desligar, ligar por tempo determinado,
 * piscar continuadamente e piscar por quantidade definida.
 * 
 * @note O metodo update() deve ser chamado continuamente dentro do loop().
 * 
 */ 
class Led
{
private:
    // ENCAPSULAMENTO
    uint8_t pinoLed;
    bool estadoLed;
    bool desligadoPorTempo = false;
    uint32_t desligarNoMomento;
    
    uint32_t tempoAnteriorPiscar;
    uint32_t tempoEspera;
    bool estadoPiscar;
    uint16_t repeticoes;
/**
 * @brief Processa a logica de piscada do LED.
 */
void funcaoPiscar();
/**
 * @brief Processa o desligamento temporizado
 */
void funcaoDesligamento();

public:
    /**
     * @brief Constroi um obejto LED.
     * @param pin Numero do pino digital onde o LED esta conectado.
     */
    Led(uint8_t pin); 
    /**
     * @brief Liga o LED continuamente 
     */

    void ligarled();
    /**
     * @brief Liga o LED por um tempo determinado.
     * @param tempoLigado_ms Tempo, em milisegundos, que o LED ficara ligado.
     */
    void ligarled(uint32_t tempoligado_ms); 
/**
     * @brief Desliga o LED e cancela os modos automaticos.
     */

    void desligarLed(); 
    /**
     * @brief Inicia a piscada continua em 1 Hz.
     */

    void piscar();
    /**
     * @brief inicia a piscada continua.
     */
    void piscar(float frequencia);
    /**
     * @brief Pisca o LED uma quantidade definida de vezes.
     * @param frequencia Frequencia da piscada em hertz.
     * @param repeticoes Quantidade de piscada completas.
     */
    void piscar(float frequencia, uint16_t repeticoes);

    /**
     * @brief Retorna o estado do LED.
     */
    bool getEstado();
    /**
     * @brief Alterna o estado do LED.
     * @param estadoLed true para ligado e false para desligado
     */
    void setEstado(bool estadoLed);
/**
 * @brief Retorno do pino LED.
 */
    uint8_t getPinoLed();
/**
 * @brief Alterna o nivel logico do LED.
 */
    void alternar();
    /**
     * @brief Atualiza O estado do LED 
     */
    void update();
};

#endif
