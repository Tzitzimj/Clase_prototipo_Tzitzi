
void initialSetup() {
   startTime = millis ();
   digitalWrite(ValvePP, LOW);
   digitalWrite(ValvePN, LOW);
   digitalWrite(ValveVaccum, LOW); 
   digitalWrite(Solenoid1, LOW);
   digitalWrite(Solenoid2, LOW);  
   digitalWrite(Solenoid3, LOW);
   
}
void buttonLimonenoPressed() {
   digitalWrite(ValvePP, HIGH);
   digitalWrite(ValvePN, LOW);
   digitalWrite(ValveVaccum, LOW); 
   digitalWrite(Solenoid1, HIGH);
   timeToOdor = (millis()-startTime>= durationOfOdor);
   digitalWrite(Solenoid2, LOW);  
   digitalWrite(Solenoid3, LOW);
   
}
void buttonAcetatoDeAmiloPressed() {
   digitalWrite(ValvePP, HIGH);
   digitalWrite(ValvePN, LOW);
   digitalWrite(ValveVaccum, LOW); 
   digitalWrite(Solenoid1, LOW);
   digitalWrite(Solenoid2, HIGH);  
   timeToOdor = (millis()-startTime>= durationOfOdor);
   digitalWrite(Solenoid3, LOW);
  
}

void buttonButiratoDeEtiloPressed() {
   digitalWrite(ValvePP, HIGH);
   digitalWrite(ValvePN, LOW);
   digitalWrite(ValveVaccum, LOW); 
   digitalWrite(Solenoid1, LOW);
   digitalWrite(Solenoid2, LOW);  
   digitalWrite(Solenoid3, HIGH);
   timeToOdor = (millis()-startTime>= durationOfOdor);
   
}
void valveVaccumOn() {
   digitalWrite(ValvePP, HIGH);
   digitalWrite(ValvePN, HIGH);
   digitalWrite(ValveVaccum, HIGH); 
   timeToVaccum = (millis()-startTime>= durationOfVaccum);
   digitalWrite(Solenoid1, LOW);
   digitalWrite(Solenoid2, LOW);  
   digitalWrite(Solenoid3, LOW);
 
}
void waitInterStimulus() {
   digitalWrite(ValvePP, LOW);
   digitalWrite(ValvePN, LOW);
   digitalWrite(ValveVaccum, LOW); 
   digitalWrite(Solenoid1, LOW);
   digitalWrite(Solenoid2, LOW);  
   digitalWrite(Solenoid3, LOW);
   timeToInterstimulus = (millis()-startTime>= durationOfInterstimulus);
}
void onOdorSelectChange() {
   
}