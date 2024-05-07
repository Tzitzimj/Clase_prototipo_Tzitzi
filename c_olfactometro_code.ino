/*
 Código para abrir válvulas solenoides durante 10 s
 Generar vácio por 50 s
 2 min de espera antes de que se abra la sigueinte válvula
*/ 




/////////Esta parte es para conectar a wifi///////


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



// Estados de la máquina de estado 

enum State {
   IDLE,
   MESSAGE_START_1,
   ODORANT_1,
   END_ODORANT_1,
   WAIT_INTERST_1,
   MESSAGE_DONE_1,
   MESSAGE_START_2,
   ODORANT_2,
   END_ODORANT_2,
   WAIT_INTEREST_2,
   MESSAGE_DONE_2,
   MESSAGE_START_3,
   ODORANT_3,
   END_ODORANT_3,
   WAIT_INTEREST_3,
   MESSAGE_DONE_3,
   MESSAGE_START_4,
   ODORANT_4,
   END_ODORANT_4,
   WAIT_INTEREST_4,
   MESSAGE_DONE_4,
   EXIT
};

QueueArray<int> event_queue;



  //Eventos que ocurren en los estados 

  enum Event {
  READ_WIFI,
  SEND_MESSAGE_START_1,
  BUTTON_PRESSED_1,
  ODORANT_1_ON,
  VALVE_VACCUM_ON,
  INITIAL_SETUP,
  SEND_MESSAGE_DONE_1,
  SEND_MESSAGE_START_2,
  BUTTON_PRESSED_2,
  ODORANT_2_ON,
  VALVE_VACCUM_ON,
  INITIAL_SETUP,
  SEND_MESSAGE_DONE_2,
  SEND_MESSAGE_START_3,
  BUTTON_PRESSED_3,
  ODORANT_3_ON,
  VALVE_VACCUM_ON,
  INITIAL_SETUP,
  SEND_MESSAGE_DONE_3,
  SEND_MESSAGE_START_4,
  BUTTON_PRESSED_4,
  ODORANT_4_ON,
  VALVE_VACCUM_ON,
  INITIAL_SETUP,
  SEND_MESSAGE_DONE_4,

  }

const chart button_Pressed [] = ;
const chart Done [] = ;
    
    String anuncio = "Done";
    ArduinoCloud.println(anuncio);


   // Se indican los pines de las válvulas solenoides como salidas 
  pinMode(Solenoid1, OUTPUT);
  pinMode(Solenoid2, OUTPUT);
  pinMode(Solenoid3, OUTPUT);
  pinMode(Solenoid4, OUTPUT);
  pinMode(ValveVaccum, OUTPUT);
  pinMode(ValvePP, OUTPUT);
  pinMode(ValvePN, OUTPUT);
}

 
State currentState = IDLE; // Variable para almacenar el estado actual
void setup()
{
unsigned long startTime;
unsigned long duration;



void onButtonChage ()
int buttonState1 = digitalRead(buttonPin1); //revisar en donde se va a conectar

if (buttonState1 == HIGH) {
   handleEvent(BUTTON_PRESSED);
}
}

void handleIDLEEvent(Event event) {
 if (event == BUTTON_PRESSED1) {
   currentState = ODORANT_1;
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



/*case initializeState ();
   currentState = Oddor_1;
   digitalWrite(ValveP-, LOW);
   digitalWrite(ValveP+, LOW);
   digitalWrite(Solenoid1, LOW);
   digitalWrite(Solenoid1, LOW);
   digitalWrite(Solenoid2, LOW);
   digitalWrite(Solenoid3, LOW);
   digitalWrite(Solenoid4, LOW);
   digitalWrite(ValveVaccum, LOW);
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
    

     digitalWrite(valveVaccum, HIGH);
   
     tiempoTranscurrido = millis() + 50000;
     while (millis() < tiempoTranscurrido) {

     }
     digitalWrite(valveVaccum, LOW);
   

     tiempoTranscurrido= millis() + 120000;
     while (millis() < tiempoTranscurrido) {

     }
     digitalWrite(valveSole2, HIGH); // Switch valve solenoid 2 ON
    
     tiempoTranscurrido = millis()+15000;
     while (millis () < tiempoTranscurrido) {

  }
     digitalWrite(valveSole2,LOW); // Switch valve Solenoid 2 OFF
    

     digitalWrite(valveVaccum, HIGH);

     tiempoTranscurrido = millis() + 50000;
     while (millis() < tiempoTranscurrido) {

     }
     digitalWrite(valveVaccum, LOW);
   

     tiempoTranscurrido= millis() + 120000;
     while (millis() < tiempoTranscurrido) {
      
     }
     digitalWrite(valveSole3, HIGH); // Switch valve solenoid 3 ON
    
     tiempoTranscurrido = millis()+15000;
     while (millis () < tiempoTranscurrido) {

  }
     digitalWrite(valveSole3,LOW); // Switch valve Solenoid 3 OFF
  

     digitalWrite(valveVaccum, HIGH);
   
     tiempoTranscurrido = millis() + 50000;
     while (millis() < tiempoTranscurrido) {

     }
     digitalWrite(valveVaccum, LOW);
  

     tiempoTranscurrido= millis() + 120000;
     while (millis() < tiempoTranscurrido) {

     }
     digitalWrite(valveSole4, HIGH); // Switch valve solenoid 4 ON

     tiempoTranscurrido = millis()+15000;
     while (millis () < tiempoTranscurrido) {

  }
     digitalWrite(valveSole4,LOW); // Switch valve Solenoid 4 OFF
 

     digitalWrite(valveVaccum, HIGH);
   
     tiempoTranscurrido = millis() + 50000;
     while (millis() < tiempoTranscurrido) {

     }
     digitalWrite(valveVaccum, LOW);
 

     tiempoTranscurrido= millis() + 120000;
     while (millis() < tiempoTranscurrido) {

     */
  
  