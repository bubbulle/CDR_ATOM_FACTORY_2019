/*
 * Utilisation avec codeurs Kuebler 2400 mini
 * https://www.kuebler.com/k2014/j/fr/produkte/details/drehgeber/Inkremental//Miniatur/2400
 * 
 * Codeur incrémental avec push-pull : 6 signaux délivrés
 * On n'utilise que 2 signaux ( A & B ) pour la 1ère version
 * 
 * Branchement codeur sans push-pull :
 *    - BROWN : 5V
 *    - WHITE : GND
 *    - GRAY : SIGNAL B en PIN 7 pour gauche, PIN 8 pour droit
 *    - GREEN : SIGNAL A en PIN 2 pour gauche, PIN 3 pour droit
 *    
 * 
*/

#ifndef IncremantalEncoder_h
#define IncremantalEncoder_h
#include <stdint.h>

typedef struct //Encodeur simple sans push-pull
{
    uint32_t pinSignalA;
    uint32_t pinSignalB;

    volatile uint32_t pos; // Position (en nombre de pas) du codeur
} EncoderSimple;

class IncremantalEncoder
{
  public:
    IncremantalEncoder(int pinADroit, int pinBGauche);

  private:
    void init();
    void increment();
    void decrement();
    uint8_t pinADroit;
    uint8_t pinBGauche;

    EncoderSimple *encoder;
};
#endif