// CÓDIGO USANDO millis y con LEDs
// Código para abrir válvulas solenoides durante 10 s
// Generar vácio por 50 s
// 2 min de espera antes de que se abra la sigueinte válvula

const int valveSole1 = 13;
const int valveSole2 = 12;
const int valveSole3 = 11;
const int valveSole4 = 10;
const int valveVaccum= 9;
const int LED1 = 8;
const int LED2 = 7;
const int LED3 = 6;
const int LED4 = 5;
const int LED5 = 4;

void setup()
{
  pinMode(valveSole1, OUTPUT);
  pinMode(valveSole2, OUTPUT);
  pinMode(valveSole3, OUTPUT);
  pinMode(valveSole4, OUTPUT);
  pinMode(valveVaccum, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
}

void loop()
{
  for (int i = 0; i < 15; 1++);
  unsigned long tiempoTranscurrido;
  digitalWrite(valveSole1, HIGH); // Switch valve solenoid 1 ON
  digitalWrite(LED1, HIGH); //Switch LED1 ON
  tiempoTranscurrido = millis()+15000;
  while (millis () < tiempoTranscurrido) {

  }
     digitalWrite(valveSole1,LOW); // Switch valve Solenoid 1 OFF
     digitalWrite(LED1, LOW);

     digitalWrite(valveVaccum, HIGH);
     digitalWrite(LED5, HIGH);
     tiempoTranscurrido = millis() + 50000;
     while (millis() < tiempoTranscurrido) {

     }
     digitalWrite(valveVaccum, LOW);
     digitalWrite(LED5, LOW);

     tiempoTranscurrido= millis() + 120000;
     while (millis() < tiempoTranscurrido) {

     }
     digitalWrite(valveSole2, HIGH); // Switch valve solenoid 2 ON
     digitalWrite(LED2, HIGH); //Switch LED2 ON
     tiempoTranscurrido = millis()+15000;
     while (millis () < tiempoTranscurrido) {

  }
     digitalWrite(valveSole2,LOW); // Switch valve Solenoid 2 OFF
     digitalWrite(LED2, LOW); // Switch LED2 OFF

     digitalWrite(valveVaccum, HIGH);
     digitalWrite(LED5, HIGH);
     tiempoTranscurrido = millis() + 50000;
     while (millis() < tiempoTranscurrido) {

     }
     digitalWrite(valveVaccum, LOW);
     digitalWrite(LED5, LOW);

     tiempoTranscurrido= millis() + 120000;
     while (millis() < tiempoTranscurrido) {
      
     }
     digitalWrite(valveSole3, HIGH); // Switch valve solenoid 3 ON
     digitalWrite(LED3, HIGH); //Switch LED3 ON
     tiempoTranscurrido = millis()+15000;
     while (millis () < tiempoTranscurrido) {

  }
     digitalWrite(valveSole3,LOW); // Switch valve Solenoid 3 OFF
     digitalWrite(LED3, LOW);

     digitalWrite(valveVaccum, HIGH);
     digitalWrite(LED5, HIGH);
     tiempoTranscurrido = millis() + 50000;
     while (millis() < tiempoTranscurrido) {

     }
     digitalWrite(valveVaccum, LOW);
     digitalWrite(LED5, LOW);

     tiempoTranscurrido= millis() + 120000;
     while (millis() < tiempoTranscurrido) {

     }
     digitalWrite(valveSole4, HIGH); // Switch valve solenoid 4 ON
     digitalWrite(LED4, HIGH); //Switch LED4 ON
     tiempoTranscurrido = millis()+15000;
     while (millis () < tiempoTranscurrido) {

  }
     digitalWrite(valveSole4,LOW); // Switch valve Solenoid 4 OFF
     digitalWrite(LED4, LOW);

     digitalWrite(valveVaccum, HIGH);
     digitalWrite(LED5, HIGH);
     tiempoTranscurrido = millis() + 50000;
     while (millis() < tiempoTranscurrido) {

     }
     digitalWrite(valveVaccum, LOW);
     digitalWrite(LED5, LOW);

     tiempoTranscurrido= millis() + 120000;
     while (millis() < tiempoTranscurrido) {

     }
  
  