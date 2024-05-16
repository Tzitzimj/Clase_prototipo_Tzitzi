-/////////Esta parte es para conectar a wifi///////

#include <ArduinoCloud.h>cloud
#include <thingProperties.h>  //libreria IoT
// Defined in thingProperties.h
iniProperties ();
// Connect to Arduino IoT Cloud
ArduinoCloud.beging(ArduinoIoTPreferredConnection);

setDebugMessageLevel1(2);
ArduinoCloud.printDebugInfo();


// Pines para las válvulas 
const int Solenoid1 = 13;
const int Solenoid2 = 12;
const int Solenoid3 = 11;
const int Solenoid4 = 10;
const int ValveVaccum = 9;
const int ValvePP = 8;
const int ValvePN = 7; 

/////////////////////// L I B R A R I E S ////////////////////////////
#include <QueueArray.h>


// Estados de la máquina de estado 

enum State {
   IDLE,
   START,
   ODOR_RELEASE,
   VACCUM_ON
};

QueueArray<int> event_queue;

  //Eventos que ocurren en los estados 

  enum Event {
  INITIAL_SETUP,
  BUTTON_LIMONENO,
  BUTTON_ACETATO_DE_AMILO,
  BUTTON_BUTIRATO_DE_ETILO,
  VALVE_VACCUM_ON,
  }

   // Se indican los pines de las válvulas solenoides como salidas 
  pinMode(Solenoid1, OUTPUT);
  pinMode(Solenoid2, OUTPUT);
  pinMode(Solenoid3, OUTPUT);
  pinMode(Solenoid4, OUTPUT);
  pinMode(ValveVaccum, OUTPUT);
  pinMode(ValvePP, OUTPUT);
  pinMode(ValvePN, OUTPUT);

//Global variables
unsigned long timeToOdor; // Variable para almacenar el tiempo de incio del odorante
unsigned long timeToVaccum // Variable para almacenar el tiempo de generar vácio
unsigned long timeToInterstimuli // Variable para almacenar el tiempo de interestímulo 
const unsigned long durationOfOdor = 10000; // Duración en milisegundos (10 segundos)
const unsigned long durationOfVaccum = 50000; // Duración en milisegundos (50 segundos)
const unsigned long durationOfInterstimuli = 120000; // Duración en milisegundos (2 minutos)

void setup()

//Director 

handleEvent(Event);  
 if (event == INITIAL_SETUP) {
   event_queue.enqueue (START)
   startTime = millis ();
   digitalWrite(ValvePP, LOW);
   digitalWrite(ValvePN, LOW);
   digitalWrite(ValveVaccum, LOW); 
   digitalWrite(Solenoid1, LOW);
   digitalWrite(Solenoid2, LOW);  
   digitalWrite(Solenoid3, LOW);
   digitalWrite(Solenoid4, LOW);  
 }

// Event Handler

while (!event_queue.isEmpty()){
   Event currentEvent = event_queue.dequeue();
}
void handleOdorant1Event (Event event) {
   if (event == BUTTON_PRESSED) {
      duration = 10000;
   if (millis () - starTime > duration) {
      currentState = END_ODORANT_1;
   }
   else {digitalWrite (Solenoid1, HIGH);
        digitalWrite (ValvePN, HIGH);
        }
   }
}
void handleEndOdorant1Event(Event event) {
   if (event == BUTTON_PRESSED) {
      duration = 50000;
   if (millis() - startTime > duration) {
      currentState = WAIT_INTERST_1;
   }
   else {digitalWrite (Solenoid1, LOW);
        digitalWrite (ValvePN, LOW);
        digitalWrite (ValveVaccum, HIGH);
        }
   }
}

void handleWaitInterest1Event(Event event) {
   if (event == BUTTON_PRESSED) {
      currentState = BUTTON_PRESSED2 //Avanza al sigueiente estado de presionar el boton 2
      duration = 120000; //REVISAR ESTO
      startTime = millis; ()
   } 
   else {
   if (millis () - startTime >= 120000) { // Si han pasado 2 minutos
      currentState = BUTTON_PRESSED2
      startTime = millis ();

   digitalWrite(ValvePP, LOW);
   digitalWrite(ValvePN, LOW);
   digitalWrite(ValveVaccum, LOW); 
   digitalWrite(Solenoid1, LOW);
   digitalWrite(Solenoid2, LOW);  
   digitalWrite(Solenoid3, LOW);
   digitalWrite(Solenoid4, LOW); 
   
   }
   }
}
