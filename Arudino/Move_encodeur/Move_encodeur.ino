/*
 * Code arduino pour codeurs incrémentaux magnétique ou optique.
 * 
 * Utilisation avec codeurs Kuebler 2400 mini
 * https://www.kuebler.com/k2014/j/fr/produkte/details/drehgeber/Inkremental//Miniatur/2400
 * ref : 05.2400.1122.1024
 * check branchements sur la datasheet en fonction de la ref
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

#define pinAGauche 2
#define pinBGauche 10
#define pinADroit 3
#define pinBDroit 11
long previousMillis = 0;        // will store last time LED was updated


//Initialisation des Pins du pont en H
//Roue gauche
int ENA=9;// Vitesse gauche (analog 0-> 255)
int IN1= 8;//Sens Anti horaire
int IN2=7;//Sens horaire

//Roue droit
int ENB=6; //Vitesse droite (analog 0->255)
int IN4=5;//Sens anti horaire
int IN3=4;//Sens horaire


//Encoder simple sans push-pull
typedef struct{
  int pinSignalA;
  int pinSignalB;

  volatile int pos;      // Position (en nombre de pas) du codeur
} EncoderSimple;

EncoderSimple *encoderGauche;
EncoderSimple *encoderDroit;
 
void setup(){

  pinMode(IN2,OUTPUT);//IN2
pinMode(IN1,OUTPUT);//IN1
pinMode(ENA,OUTPUT);//ENA

//Cote droit
pinMode(IN3,OUTPUT);//IN3
pinMode(IN2,OUTPUT);//IN2
pinMode(ENB,OUTPUT);//ENB

   Serial.begin(230400);

   /*
    Attention
    Les pins 2 & 3 du GPIO sont utilisés pour les interruptions. 
    Les pins correspondent à des numéros d'interruptions qui sont respectivement 0 & 1.
   */
   //Initialisation des encodeurs
   if(pinAGauche == 2) encoderGauche->pinSignalA = 0;
   if(pinAGauche == 3) encoderGauche->pinSignalA = 1;

   if(pinADroit == 2) encoderDroit->pinSignalA = 0;
   if(pinADroit == 3) encoderDroit->pinSignalA = 1;
   
   encoderGauche->pinSignalB = 7;
   encoderDroit->pinSignalB = 8;

   encoderGauche->pos = 0;
   encoderDroit->pos = 0;
   
   pinMode(encoderGauche->pinSignalB, INPUT);
   pinMode(encoderDroit->pinSignalB, INPUT);
   
   attachInterrupt(encoderGauche->pinSignalA, IncrementGauche, RISING); 
   attachInterrupt(encoderDroit->pinSignalA, IncrementDroit, RISING);
  forward();
}
 
void loop(){
  unsigned long currentMillis = millis();
     
   if(currentMillis - previousMillis > 100) {
        previousMillis = currentMillis;   
   Serial.println(encoderGauche->pos);
    Serial.println(encoderDroit->pos);
   }
}

/*
 * Si le signal A est en front montant et que le signal B est positif => on a une rotation dans le sens négatif
 * cf site internet
*/

void forward(void) {
  analogWrite(ENA, 30); //speed 0 - 255 //50
  analogWrite(ENB,30); //speed 0 - 255 //75
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}


void IncrementGauche(){
   
   int signalA = digitalRead(encoderGauche->pinSignalA);
   int signalB = digitalRead(encoderGauche->pinSignalB);
   if (signalB == HIGH){
      --encoderGauche->pos;
   }
   else{
      ++encoderGauche->pos;
   }
}
void IncrementDroit(){
   int signalA = digitalRead(encoderDroit->pinSignalA);
   int signalB = digitalRead(encoderDroit->pinSignalB);
   if (signalB == HIGH){
      --encoderDroit->pos;
   }
   else{
      ++encoderDroit->pos;
   }
}
