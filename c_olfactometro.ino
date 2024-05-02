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


//Del chatgpt
// Definir los pines para las válvulas
#define VALVULA_NEGATIVA_PIN 2
#define VALVULA_POSITIVA_PIN 3
#define VALVULA_1_PIN 4
#define VALVULA_2_PIN 5
#define VALVULA_3_PIN 6
#define VALVULA_4_PIN 7
#define VALVULA_PURGA_PIN 8

// Definir los estados de la máquina de estado
enum State {
  INICIO,
  ABRIR_VALVULA_1,
  CERRAR_VALVULAS_1,
  ABRIR_PURGA,
  ESPERA,
  REINICIO
};

// Variables para controlar el tiempo
unsigned long tiempoInicio;
unsigned long tiempoActual;
const unsigned long tiempoApertura = 10000; // 10 segundos de apertura
const unsigned long tiempoPurga = 50000; // 50 segundos de purga
const unsigned long tiempoEspera = 120000; // 2 minutos de espera
const int numIteraciones = 15;
int iteracionActual = 0;

// Variable para el estado actual
State estado = INICIO;

void setup() {
  // Inicializar los pines de las válvulas como salidas
  pinMode(VALVULA_NEGATIVA_PIN, OUTPUT);
  pinMode(VALVULA_POSITIVA_PIN, OUTPUT);
  pinMode(VALVULA_1_PIN, OUTPUT);
  pinMode(VALVULA_2_PIN, OUTPUT);
  pinMode(VALVULA_3_PIN, OUTPUT);
  pinMode(VALVULA_4_PIN, OUTPUT);
  pinMode(VALVULA_PURGA_PIN, OUTPUT);

  // Inicializar el tiempo de inicio
  tiempoInicio = millis();
}

void loop() {
  // Obtener el tiempo actual
  tiempoActual = millis();

  // Actualizar la máquina de estado
  switch (estado) {
    case INICIO:
      digitalWrite(VALVULA_NEGATIVA_PIN, HIGH);
      digitalWrite(VALVULA_POSITIVA_PIN, HIGH);
      estado = ABRIR_VALVULA_1;
      tiempoInicio = tiempoActual;
      break;

    case ABRIR_VALVULA_1:
      digitalWrite(VALVULA_1_PIN, HIGH);
      if (tiempoActual - tiempoInicio >= tiempoApertura) {
        digitalWrite(VALVULA_1_PIN, LOW);
        digitalWrite(VALVULA_POSITIVA_PIN, LOW);
        estado = CERRAR_VALVULAS_1;
        tiempoInicio = tiempoActual;
      }
      break;

    case CERRAR_VALVULAS_1:
      digitalWrite(VALVULA_NEGATIVA_PIN, LOW);
      if (tiempoActual - tiempoInicio >= tiempoEspera) {
        estado = ABRIR_PURGA;
        tiempoInicio = tiempoActual;
      }
      break;

    case ABRIR_PURGA:
      digitalWrite(VALVULA_PURGA_PIN, HIGH);
      if (tiempoActual - tiempoInicio >= tiempoPurga) {
        digitalWrite(VALVULA_PURGA_PIN, LOW);
        estado = ESPERA;
        tiempoInicio = tiempoActual;
      }
      break;

    case ESPERA:
      if (tiempoActual - tiempoInicio >= tiempoEspera) {
        iteracionActual++;
        if (iteracionActual < numIteraciones) {
          estado = REINICIO;
        } else {
          // Hemos completado todas las iteraciones
          // Puedes agregar aquí cualquier código adicional
        }
        tiempoInicio = tiempoActual;
      }
      break;

    case REINICIO:
      digitalWrite(VALVULA_NEGATIVA_PIN, HIGH);
      digitalWrite(VALVULA_POSITIVA_PIN, HIGH);
      estado = ABRIR_VALVULA_1;
      tiempoInicio = tiempoActual;
      break;
  }
}
