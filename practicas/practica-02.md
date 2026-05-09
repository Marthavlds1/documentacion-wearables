---
layout: default
title: "Práctica 2: Pulsera con Microcontrolador"
parent: Prácticas
nav_order: 2
---

# Práctica 2: Pulsera Textil Interactiva con Microcontrolador
{: .fs-7 }

**8 puntos** | Entrega por equipo
{: .label .label-red }

---

## Objetivo

Partiendo de las metodologías **Design Thinking** y **Pahl & Beitz**: programar y prototipar una pulsera wearable que exprese una intención de diseño mediante una **secuencia temporal de encendido/apagado de 5 LEDs** controlados por un microcontrolador.

---

## Requisitos técnicos

- Integrar **5 LEDs**
- La secuencia debe iniciar **únicamente al cerrar la pulsera** y funcionar en loop
- Para el prototipo, el microcontrolador puede ubicarse fuera de la pulsera

## Requisitos de diseño

- La pulsera debe ser cómoda, flexible y adecuada para la muñeca
- Evitar bordes rígidos o componentes que puedan causar molestia
- La pulsera interactiva debe **comunicar o provocar una experiencia/intención** mediante la secuencia de encendido

---

## Rúbrica de evaluación

| Criterio | Porcentaje |
|---|---|
| **Concepto:** Descripción de la intención de diseño | 10% |
| **Metodología de diseño:** Proceso, arquitectura electrónica e integración | 30% |
| **Proceso de manufactura:** LEDs integrados con intención; secuencia inicia al abrochar; comodidad | 30% |
| **Evidencia (fotos y videos)** | 20% |
| **Conclusiones:** Reflexión crítica | 10% |

---

## 1. Concepto

> ✏️ _¿Qué intención comunica la secuencia de LEDs? ¿Qué experiencia quieres generar en quien porta la pulsera?_

---

## 2. Metodología de diseño

> ✏️ _Describe el proceso de diseño con Design Thinking y/o Pahl & Beitz. Incluye la arquitectura electrónica y cómo se integra el microcontrolador._

### Diagrama del circuito

```
📁 assets/img/practica-02/
   └── arquitectura.png
```

---

## 3. Código de programación

> Pega aquí el código de Arduino. Puedes también subir el archivo `.ino` a la carpeta `assets/files/`.

```cpp
// Práctica 2 — Pulsera con microcontrolador
// Descripción: Secuencia de 5 LEDs activada por cierre de pulsera

const int pinSwitch = 2;   // pin del interruptor (broche)
const int leds[] = {3, 4, 5, 6, 7};  // pines de los 5 LEDs
const int numLeds = 5;

void setup() {
  pinMode(pinSwitch, INPUT_PULLUP);
  for (int i = 0; i < numLeds; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  if (digitalRead(pinSwitch) == LOW) {
    // Pulsera cerrada: ejecutar secuencia
    secuencia();
  } else {
    // Pulsera abierta: apagar todos los LEDs
    for (int i = 0; i < numLeds; i++) {
      digitalWrite(leds[i], LOW);
    }
  }
}

void secuencia() {
  // Encendido uno a uno
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
    delay(200);
  }
  delay(500);
  // Apagado uno a uno (inverso)
  for (int i = numLeds - 1; i >= 0; i--) {
    digitalWrite(leds[i], LOW);
    delay(200);
  }
  delay(300);
}
```

---

## 4. Proceso de manufactura

> ✏️ _Describe el proceso de fabricación, materiales y las iteraciones del diseño._

```
📁 assets/img/practica-02/
   └── proceso-01.jpg
   └── prototipo-final.jpg
```

---

## 5. Evidencia

> 📷 Agrega fotos y el video del funcionamiento.

```html
<div class="responsive-embed">
  <iframe src="https://www.youtube.com/embed/TU_VIDEO_ID" allowfullscreen></iframe>
</div>
```

---

## 6. Conclusiones

> ✏️ _Reflexión sobre el proceso, los aprendizajes y las mejoras posibles._
