/*
 * ============================================================
 * Wearable Diseño Avant Garde
 * Dispositivos de Tecnología Corporal — IE115
 * Universidad Iberoamericana — Primavera 2026
 * 
 * Integrantes:
 *   Martha Valdés
 *   Nahomi Cruz
 *   Annette Cunillé
 * 
 * Descripción:
 *   Sistema de activación mediante sensor táctil que controla
 *   dos servomotores de rotación continua (360°) para tensar
 *   los hilos conectados a la estructura textil superior de
 *   la prenda, generando una apertura dinámica.
 * 
 * Hardware:
 *   - XIAO ESP32 S3
 *   - Servo Motor 1 → Pin D4 (GPIO4)
 *   - Servo Motor 2 → Pin D5 (GPIO5)
 *   - Sensor Táctil  → Pin D3 (GPIO3)
 *   - Alimentación  → 2x baterías AA (3V → regulado a 5V)
 * ============================================================
 */

#include <ESP32Servo.h>

// ── Configuración de pines ─────────────────────────────────
const int PIN_SENSOR  = 3;   // D3 — Sensor táctil capacitivo
const int PIN_SERVO1  = 4;   // D4 — Servo motor 1
const int PIN_SERVO2  = 5;   // D5 — Servo motor 2

// ── Parámetros de movimiento ───────────────────────────────
const int SERVO_STOP     = 90;
const int SERVO_ABRIR_1  = 180;
const int SERVO_ABRIR_2  = 0;
const int SERVO_CERRAR_1 = 0;
const int SERVO_CERRAR_2 = 180;

const int TIEMPO_APERTURA = 600;
const int TIEMPO_RETORNO  = 600;
const int PAUSA_ABIERTO   = 1000;

// ── Objetos ────────────────────────────────────────────────
Servo servo1;
Servo servo2;

bool sistemaActivo = false;

// ──────────────────────────────────────────────────────────
void setup() {
  Serial.begin(115200);
  pinMode(PIN_SENSOR, INPUT);
  servo1.attach(PIN_SERVO1);
  servo2.attach(PIN_SERVO2);
  servo1.write(SERVO_STOP);
  servo2.write(SERVO_STOP);
  Serial.println("Sistema Wearable Avant Garde — Listo");
}

// ──────────────────────────────────────────────────────────
void loop() {
  int estadoSensor = digitalRead(PIN_SENSOR);

  if (estadoSensor == HIGH && !sistemaActivo) {
    sistemaActivo = true;
    ejecutarSecuencia();
    sistemaActivo = false;
  }

  delay(50);
}

// ──────────────────────────────────────────────────────────
void ejecutarSecuencia() {
  Serial.println("Activando apertura...");
  abrirEstructura();
  Serial.println("Estructura abierta — esperando...");
  delay(PAUSA_ABIERTO);
  Serial.println("Cerrando estructura...");
  cerrarEstructura();
  Serial.println("Ciclo completo.");
}

// ──────────────────────────────────────────────────────────
void abrirEstructura() {
  servo1.write(SERVO_ABRIR_1);
  servo2.write(SERVO_ABRIR_2);
  delay(TIEMPO_APERTURA);
  servo1.write(SERVO_STOP);
  servo2.write(SERVO_STOP);
}

// ──────────────────────────────────────────────────────────
void cerrarEstructura() {
  servo1.write(SERVO_CERRAR_1);
  servo2.write(SERVO_CERRAR_2);
  delay(TIEMPO_RETORNO);
  servo1.write(SERVO_STOP);
  servo2.write(SERVO_STOP);
}
