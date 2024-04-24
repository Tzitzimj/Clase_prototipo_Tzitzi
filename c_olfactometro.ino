// CÓDIGO USANDO DELAY
// Código para abrir válvulas solenoides durante 10 s
// Generar vácio por 50 s
// 2 min de espera antes de que se abra la sigueinte válvula

const int valveSole1 = 11;
const int valveSole2 = 10;
const int valveSole3 = 9;
const int valveSole4 = 3;
const int valveVaccum= 6;

void setup()
{
  pinMode(valveSole1, OUTPUT);
  pinMode(valveSole2, OUTPUT);
  pinMode(valveSole3, OUTPUT);
  pinMode(valveSole4, OUTPUT);
  pinMode(valveVaccum, OUTPUT);
}

void loop()
{
  for (int i = 0; i < 15; 1++) //línea que indica que se repetira 15 veces
  {   
  digitalWrite(valveSole1,HIGH); // Switch valve solenoid 1 ON
    delay(15000); // Wait for 15 s
     digitalWrite(valveSole1,LOW); // Switch valve Solenoid 1 OFF
  
  delay(120000); //interestímulo 2 min

  digitalWrite(valveVacio,HIGH); // Switch valve Vacío ON
    delay(50000); // Wait for 50 s
     digitalWrite(valveVaccum,LOW); // Switch valve Vacío OFF

  delay(120000); //interestímulo 2 min

  digitalWrite(valveSole2,HIGH); // Switch valve solenoid 2 ON
    delay(15000); // Wait for 15 s
     digitalWrite(valveSole2,LOW); // Switch valve Solenoid 2 OFF
  
  delay(120000); //interestímulo 2 min

  digitalWrite(valveVacio,HIGH); // Switch valve Vacío ON
    delay(50000); // Wait for 50 s
     digitalWrite(valveVaccum,LOW); // Switch valve Vacío OFF
  
  delay(120000); //interestímulo 2 min

  digitalWrite(valveSole3,HIGH); // Switch valve solenoid 3 ON
    delay(15000); // Wait for 15 s
     digitalWrite(valveSole3,LOW); // Switch valve Solenoid 3 OFF
  
  delay(120000); //interestímulo 2 min

  digitalWrite(valveVacio,HIGH); // Switch valve Vacío ON
    delay(50000); // Wait for 50 s
     digitalWrite(valveVaccum,LOW); // Switch valve Vacío OFF
  
  delay(120000); //interestímulo 2 min

  digitalWrite(valveSole4,HIGH); // Switch valve solenoid 4 ON
    delay(15000); // Wait for 15 s
     digitalWrite(valveSole4,LOW); // Switch valve Solenoid 4 OFF
  
  delay(120000); //interestímulo 2 min

  digitalWrite(valveVacio,HIGH); // Switch valve Vacío ON
    delay(50000); // Wait for 50 s
     digitalWrite(valveVaccum,LOW); // Switch valve Vacío OFF
  }
} 