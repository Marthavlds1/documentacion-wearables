---
layout: default
title: "Bloque IV-V: Sensores, Indicadores y Actuadores"
parent: Temas del Semestre
nav_order: 4
---

# Bloques IV y V: Sensores, Indicadores, Switches y Actuadores
{: .fs-7 }

---

## Sensores para wearables (Tema VIII)

### Tipos de sensores

| Sensor | Magnitud medida | Aplicación wearable |
|---|---|---|
| **Presión / Fuerza** | Fuerza aplicada | Guantes interactivos, plantillas |
| **Temperatura** | Temperatura corporal o ambiente | Monitoreo de salud |
| **Humedad** | Sudoración | Deporte, bienestar |
| **Acelerómetro/IMU** | Movimiento, orientación | Gesture recognition, pasos |
| **Táctil capacitivo** | Contacto del dedo | Activación de interacciones |
| **Sensores suaves** | Deformación/presión en textil | Integración directa en tela |

### Sensor táctil capacitivo
Detecta la presencia del dedo sin necesidad de presión mecánica. En Arduino:

```cpp
#include <CapacitiveSensor.h>
CapacitiveSensor cs = CapacitiveSensor(4, 2);

void setup() {
  Serial.begin(9600);
}

void loop() {
  long total = cs.capacitiveSensor(30);
  Serial.println(total);
  delay(10);
}
```

---

## Indicadores: Iluminación (Tema IX)

### LEDs convencionales
- Requieren resistencia limitadora: `R = (Vcc - Vf) / If`
- Vf típico: 2V (rojo/amarillo), 3.3V (azul/blanco)
- If típico: 10–20 mA

### NeoPixels (WS2812B)
- LEDs RGB addressables en cadena
- 1 pin de datos para múltiples LEDs
- Librería: `FastLED` o `Adafruit_NeoPixel`

```cpp
#include <FastLED.h>
#define NUM_LEDS 5
#define DATA_PIN 6
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812, DATA_PIN, GRB>(leds, NUM_LEDS);
}

void loop() {
  for(int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Red;
  }
  FastLED.show();
  delay(500);
  FastLED.clear();
  FastLED.show();
  delay(500);
}
```

### Fibra óptica
- Conduce luz sin electricidad a lo largo del textil
- Se combina con LEDs en los extremos

---

## Switches y Actuadores (Bloque V — Tema X)

### Motores DC
- Control de velocidad con PWM
- Dirección con puente H (L298N, DRV8833)

### Servomotores
- Control de posición angular (0°–180°) o continuo (360°)
- Señal PWM: pulso de 1–2 ms cada 20 ms

```cpp
#include <Servo.h>
Servo miServo;

void setup() {
  miServo.attach(9);
}

void loop() {
  miServo.write(0);    // posición inicial
  delay(1000);
  miServo.write(180);  // posición final
  delay(1000);
}
```

### Motores de vibración
- Retroalimentación háptica
- ERM (masa excéntrica) o LRA (resonancia lineal)

### Actuadores suaves
- Bolsas neumáticas, músculos de McKibben
- Activados con bomba de aire o jeringa

### Audio
- Buzzers piezoeléctricos: tonos simples
- Módulos DFPlayer: reproducción de MP3 desde SD

---

## Material de referencia

> Agrega aquí tus notas, esquemáticos y evidencias de laboratorio.

```
📁 assets/img/bloque-04/
📁 assets/img/bloque-05/
   └── [agrega tus imágenes aquí]
```
