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
  for (int i = 0; i < 15; 1++) 