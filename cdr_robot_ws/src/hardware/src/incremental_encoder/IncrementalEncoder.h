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
 *    - GRAY :  SIGNAL B en PIN 7 pour gauche, PIN 8 pour droit
 *    - GREEN : SIGNAL A en PIN 2 pour gauche, PIN 3 pour droit
 *    
 * 
*/

#ifndef IncrementalEncoder_h
#define IncrementalEncoder_h
#endif
#include <stdint.h>


class IncrementalEncoder
{
public:
  IncrementalEncoder(int pinAGauche, int pinBGauche);

private:
  void init();
  void increment();
  void decrement();
  
  uint8_t pinA;
  uint8_t pinB;
  volatile uint32_t pos; // Position (en nombre de pas) du codeur
  
};
