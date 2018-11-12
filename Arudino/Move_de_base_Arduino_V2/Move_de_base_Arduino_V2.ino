/*Code moteur Proto Ancienne plaque robot 2018 
//Avant - demi tour - Avant
Alimebtation 12V sur batterie 
Pont en H - L298

--> Tuto L298N PWN H-Bridge EN
https://howtomechatronics.com/tutorials/arduino/arduino-dc-motor-control-tutorial-l298n-pwm-h-bridge/
--> Tuto Code Pont en H L298N EN
https://www.youtube.com/watch?v=kv-9mxVaVzE
--> Expliaction des pins FR
http://arduino.blaisepascal.fr/index.php/2017/05/11/pont-en-h-l298n/

==> Gabriel SOUDRY  
==> Johny LIN
CDR 2019 ATOM FACTORY
*/


//Initialisation des Pins du pont en H
//Roue gauche
int ENA=9;// Vitesse gauche (analog 0-> 255)
int IN1= 8;//Sens Anti horaire
int IN2=7;//Sens horaire

//Roue droit
int ENB=6; //Vitesse droite (analog 0->255)
int IN4=5;//Sens anti horaire
int IN3=4;//Sens horaire


void setup()
{
  //Initialisation des ports
//Cote gauche
pinMode(IN2,OUTPUT);//IN2
pinMode(IN1,OUTPUT);//IN1
pinMode(ENA,OUTPUT);//ENA

//Cote droit
pinMode(IN3,OUTPUT);//IN3
pinMode(IN2,OUTPUT);//IN2
pinMode(ENB,OUTPUT);//ENB


//Deplacement effectué une seule fois
/*
//Tout droit
forward();//2 moteurs horaire 
//backward();
delay(2000);//Durant 0.8s


//Demi tour
right();//Roue gauche horraire roue droite anti horaire
delay(800);//Durant 0.8s

*/
/*
//Ralentissement arret
analogWrite(ENA, 0); //speed 0 - 255
analogWrite(ENB, 0); //speed 0 - 255
delay(500); //Durant 0.5s

//Tout droit
forward(); //2 moteurs horaire 
delay(800); //Durant 0.8s

//Arret final
analogWrite(ENA, 0); //speed 0 - 255
analogWrite(ENB, 0); //speed 0 - 255
  
*/
}

//On utilise pas le loop, le deplacement s'effectue seulement une fois dans le setup
void loop() 
{
  delay(2000);
//Tout droit
forward();//2 moteurs horaire 
//backward();
delay(4000);//Durant 0.8s


//Demi tour
//right();//Roue gauche horraire roue droite anti horaire
//delay(1400);//Durant 0.
  
}

//Avant
void forward(void) {
  analogWrite(ENA, 30); //speed 0 - 255 //50
  analogWrite(ENB,30); //speed 0 - 255 //75
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

//Arriere
void backward(void) {
  analogWrite(ENA, 50); //speed 0 - 255
  analogWrite(ENB,50); //speed 0 - 255
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

//Demi tour sur la gauche
void left(void) {
  analogWrite(ENA, 30); //speed 0 - 255
  analogWrite(ENB, 30); //speed 0 - 255
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

//Demi tour sur la droite
void right(void) {
  analogWrite(ENA, 40); //speed 0 - 255
  analogWrite(ENB, 40); //speed 0 - 255
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

//Avant gauche
void left_top(void) {
  analogWrite(ENA, 50); //speed 0 - 255
  analogWrite(ENB, 50); //speed 0 - 255
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

//Avant droite
void right_top(void) {
  analogWrite(ENA, 255); //speed 0 - 255
  analogWrite(ENB, 128); //speed 0 - 255
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

//Arriere gauche
void left_down(void) {
  analogWrite(ENA, 128); //speed 0 - 255
  analogWrite(ENB, 255); //speed 0 - 255
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

//Arriere droite
void right_down(void) {
  analogWrite(ENA, 255); //speed 0 - 255
  analogWrite(ENB, 128); //speed 0 - 255
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}
