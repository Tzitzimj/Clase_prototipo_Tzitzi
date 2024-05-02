/*CÓDIGO USANDO millis
 Código para abrir válvulas solenoides durante 10 s
 Generar vácio por 50 s
 2 min de espera antes de que se abra la sigueinte válvula
*/ 

// Pines para las válvulas 
const int Solenoid1 = 13;
const int Solenoid2 = 12;
const int Solenoid3 = 11;
const int Solenoid4 = 10;
const int ValveVaccum = 9;
const int ValveP- = 8;
const int ValveP+ = 7; 

// Estados de la máquina de estado 

enum State {
   INITIALIZE;
   Wait_To_Start;
   Oddor_1;
   End_Oddor_1;
   Oddor_2;
   End_Oddor_2;
   Oddor_3;
   End_Oddor_3;
   Oddor_4;
   End_Oddor4;
   Wait_TwoMin;
   Exit;

   /*OPEN_Valve_P+;
   CLOSE_Valve_P+;
   OPEN_Valve_P-;
   CLOSE_Valve_P-;
   OPEN_Valve_Vaccum;
   CLOSE_Valve_Vaccum;
   Wait_For_Next;
   OPEN_SOLENOID_1;
   CLOSE_SOLENOID_1;
   OPEN_SOLENOID_2;
   CLOSE_SOLENOID_2;
   OPEN_SOLENOID_3;
   CLOSE_SOLENOID_3;
   OPEN_SOLENOID_4;
   CLOSE_SOLENOID_4;
   Exit;
   */

  //Funciones para llamar a los estados 
  void initializeState ();
  void waitToStartState ();
  void odor1 ();
  void endOdor1 ();
  void odor2 ();
  void endOdor ();
  void odor3 ();
  void endOdor4 ();
  void odor ();
  void waitTwoMin ();
}

// Variable para almacenar el estado actual 
State currentState = INIT;
void setup()
{
   // Se indican los pines de las válvulas solenoides como salidas 
  pinMode(Solenoid1, OUTPUT);
  pinMode(Solenoid2, OUTPUT);
  pinMode(Solenoid3, OUTPUT);
  pinMode(Solenoid4, OUTPUT);
  pinMode(ValveVaccum, OUTPUT);
  pinMode(ValveP-, OUTPUT);
  pinMode(ValveP+, OUTPUT);

// En un inicio solo las válvulas P- y P+ estarán abiertas 

switch (expression)
{
case /* constant-expression */:
   /* code */
   initializeState ();
   currentState = Oddor_1;
   digitalWrite(Solenoid1, HIGH);
   digitalWrite()
   break;

default:
   break;

}

void loop()

{
  for (int i = 0; i < 15; i++); 
  unsigned long tiempoTranscurrido;
  digitalWrite(valveSole1, HIGH); // Switch valve solenoid 1 ON
  digitalWrite(LED1, HIGH); //Switch LED1 ON
  tiempoTranscurrido = millis()+15000;
  while (millis () < tiempoTranscurrido) 
  }
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
  
  