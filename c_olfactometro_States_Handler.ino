#include "c_olfactometro_code.ino"

void handleEvent (Event event) { /* cuando se llama a handleEvent(BUTTON_PRESSED), el valor de BUTTON_PRESSED se pasa como argumento event a la función handleEvent, lo que permite que la función reaccione en consecuencia.*/
    switch (currentState) { 
        case IDLE:
        if (event == INITIAL_SETUP) {
            currentState = START;
             initialSetup();
        }
    break;
  case START:
    if (event == INITIAL_SETUP) {
        currentState = ODOR_RELEASE;
       buttonLimonenoPressed();
 }
    break;
  case : ODOR_RELEASE:
    if (event == BUTTON_LIMONENO_PRESSED) {
        currentState =  VACCUM_ON;
       valveVaccumOn();
}
     break;
  case VACCUM_ON:
    if (event == VACCUM_ON) {
        currentState = WAIT_INTERSTIMULUS;
       waitInterStimulus();
}
  break;
case WAIT_INTERSTIMULUS:
    if (event == WAIT_INTERSTIMULUS) {
        currentState = START
        initialSetup();
}
    break;
 case START:
    if (event == INITIAL_SETUP) {
        currentState = ODOR_RELEASE;
       buttonAcetatoDeAmiloPressed();
 }
    break;
  case : ODOR_RELEASE:
    if (event ==  BUTTON_ACETATO_DE_AMILO_PRESSED) {
        currentState =  VACCUM_ON;
       valveVaccumOn();
}
     break;
  case VACCUM_ON:
    if (event == VACCUM_ON) {
        currentState = WAIT_INTERSTIMULUS;
       waitInterStimulus();
}
  break;
case WAIT_INTERSTIMULUS:
    if (event == WAIT_INTERSTIMULUS) {
        currentState = START
        initialSetup();
}
    break; 
 case START:
    if (event == INITIAL_SETUP) {
        currentState = ODOR_RELEASE;
       buttonButiratoDeEtiloPressed();
 }
    break;
  case : ODOR_RELEASE:
    if (event ==  BUTTON_BUTIRATO_DE_ETILO_PRESSED) {
        currentState =  VACCUM_ON;
       valveVaccumOn();
}
     break;
  case VACCUM_ON:
    if (event == VACCUM_ON) {
        currentState = WAIT_INTERSTIMULUS;
       waitInterStimulus();
}
  break;
case WAIT_INTERSTIMULUS:
    if (event == WAIT_INTERSTIMULUS) {
        currentState = START
        initialSetup(); 
  break;
}
} 


//void handleEvent (Event event) { /* cuando se llama a handleEvent(BUTTON_PRESSED), el valor de BUTTON_PRESSED se pasa como argumento event a la función handleEvent, lo que permite que la función reaccione en consecuencia.*/
   /* switch (currentState) { 

        case IDLE:
        if (event == READ_WIFI) {
            currentState = MESSAGE_START_1;
             fcnSendMessageStart1();
        }
    break;
  case MESSAGE_START_1:
    if (event == BUTTON_PRESSED_1) {
        currentState = ODORANT_1;
        fcnButtonPressed1();
 }
    break;
  case : ODORANT_1:
    if (event == ODORANT_1_ON) {
        currentState = END_ODORANT_1;
        fcnEndOdorant1();
}
     break;
  case END_ODORANT_1:
    if (event == VALVE_VACCUM_ON) {
        currentState = WAIT_INTERST_1;
        fncWaitInterest1();
}
  break;
case WAIT_INTERST_1:
    if (event == INITIAL_SETUP) {
        currentState = MESSAGE_DONE_1
        fncMessageDone1();
}
    break;
  case MESSAGE_DONE_1:
    if (event == SEND_MESSAGE_START_2) {
        currentState = MESSAGE_START_2:
        fcnSendMessageStart2();
    } 
  
 
}
} 
*/
/*void handleIDLEEvent(Event event) {
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
*/