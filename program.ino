// Definimos los pines

int pulsador = 2; // las interrupciones solo se pueden ejecutar desde los pines 2 y 3 en Arduino UNO
int rojo = 13;
int naranja = 12;
int verde =11;
int a= 3;
int b =4;
int c =5;
int d =6;
int e =7 ;
int f =8;
int g =9;


void setup()
{
  for (int i = 3; i<14 ; i++){
    pinMode(i,OUTPUT);  
  }
  pinMode(pulsador,INPUT);
  attachInterrupt(digitalPinToInterrupt(2),botonON,RISING);
}

void loop()
{
    // Realizamos los ciclos para el funcionamiento normal del semáforo
    digitalWrite(verde, HIGH);
    digitalWrite(rojo,LOW);
    digitalWrite(naranja,LOW);
    for (int i=9 ; i>0 ; i--){
        Numero(i);
        delay(500);
    }
    digitalWrite(verde, LOW);
    digitalWrite(naranja, HIGH);
    digitalWrite(rojo,LOW);
    digitalWrite(verde,LOW);
    for (int i=3 ; i>0 ; i--){
        Numero(i);
        delay(500);
    }
    digitalWrite(naranja, LOW);
    digitalWrite(rojo, HIGH);
    digitalWrite(verde,LOW);
    digitalWrite(naranja,LOW);
    for (int i=7 ; i>0 ; i--){
        Numero(i);
        delay(500);
    }
 
}

// Función que se ejecuta con la interrupción
void botonON(){
    // Ponemos las luces verde y naranja en LOW y prendemos la luz roja
    digitalWrite(verde,LOW);
    digitalWrite(naranja, LOW);
    digitalWrite(rojo, HIGH);
    // Comienza el contador y cuando llega a cero el semáforo sigue su funcionamiento normal
    for (int j = 5 ; j>0 ; j--){
        Numero(j);
        delay(500);
    }
}

void Numero(int n){ //Función para encender el 7 segmentos
    switch(n){
        case 1:
            digitalWrite(3,LOW);
            digitalWrite(4, HIGH);
            digitalWrite(5, HIGH);
            digitalWrite(6,LOW);
            digitalWrite(7,LOW);
            digitalWrite(8,LOW);
            digitalWrite(9,LOW);
            break;
        case 2:
            digitalWrite(3, HIGH);
            digitalWrite(4, HIGH);
            digitalWrite(5,  LOW);
            digitalWrite(6, HIGH);
            digitalWrite(7, HIGH);
            digitalWrite(8, LOW);
            digitalWrite(9,  HIGH);
            break;
        case 3:
            digitalWrite(3, HIGH);
            digitalWrite(4, HIGH);
            digitalWrite(5, HIGH);
            digitalWrite(6, HIGH);
            digitalWrite(7,LOW);
            digitalWrite(8, LOW);
            digitalWrite(9,HIGH);
            break;
        case 4:
            digitalWrite(3,LOW);
            digitalWrite(4, HIGH);
            digitalWrite(5, HIGH);
            digitalWrite(6,LOW);
            digitalWrite(7,LOW);
            digitalWrite(8, HIGH);
            digitalWrite(9, HIGH);
            break;
        case 5:
            digitalWrite(3, HIGH);
            digitalWrite(4,LOW);
            digitalWrite(5, HIGH);
            digitalWrite(6, HIGH);
            digitalWrite(7, LOW);
            digitalWrite(8, HIGH);
            digitalWrite(9,HIGH);
            break;
        case 6:
            digitalWrite(3, HIGH);
            digitalWrite(4,LOW);
            digitalWrite(5, HIGH);
            digitalWrite(6, HIGH);
            digitalWrite(7, HIGH);
            digitalWrite(8, HIGH);
            digitalWrite(9,HIGH);
            break;
        case 7:
            digitalWrite(3,HIGH);
            digitalWrite(4, HIGH);
            digitalWrite(5, HIGH);
            digitalWrite(6,LOW);
            digitalWrite(7,LOW);
            digitalWrite(8,LOW);
            digitalWrite(9,LOW);
            break;
        case 8:
            digitalWrite(3,HIGH);
            digitalWrite(4, HIGH);
            digitalWrite(5, HIGH);
            digitalWrite(6,HIGH);
            digitalWrite(7,HIGH);
            digitalWrite(8,HIGH);
            digitalWrite(9,HIGH);
            break;
        case 9:
            digitalWrite(3,HIGH);
            digitalWrite(4, HIGH);
            digitalWrite(5, HIGH);
            digitalWrite(6,HIGH);
            digitalWrite(7,LOW);
            digitalWrite(8,HIGH);
            digitalWrite(9,HIGH);
            break;  
        default:
            digitalWrite(3, HIGH);
            digitalWrite(4, HIGH);
            digitalWrite(5, HIGH);
            digitalWrite(6, HIGH);
            digitalWrite(7, HIGH);
            digitalWrite(8,LOW);
            digitalWrite(9, HIGH);
            break;

    }
}