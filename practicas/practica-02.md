---
layout: default
title: "Práctica 2: Pulsera con Microcontrolador"
parent: Prácticas
nav_order: 2
---

# Práctica 2: Pulsera Textil Interactiva con Microcontrolador
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

Para la segunda práctica se retomó la inspiración en el festival de música electrónica Electric Daisy Carnival (EDC), pero con una propuesta visual más elaborada y colorida. El concepto se basó específicamente en la temática floral del EDC 2025, en la que predominaban flores, colores vibrantes y elementos decorativos que representaban naturaleza, luz y movimiento.

La intención de diseño fue crear una pulsera wearable interactiva que combinara tecnología y estética, generando una secuencia de luces dinámica que evocara la energía del festival. A diferencia de la primera práctica, en esta versión los cinco LEDs no solo se encendían al cerrar la pulsera, sino que ejecutaban un patrón de encendido y apagado controlado por un microcontrolador, simulando el ritmo y la frecuencia de la música electrónica.

La pulsera se confeccionó sobre una base de listón textil, lo que permitió obtener un accesorio más ligero, flexible y elegante. La decoración floral y el uso de colores intensos reforzaron la inspiración en el EDC 2025, mientras que la integración del microcontrolador Seeed Studio Seeed Studio XIAO ESP32S3
 permitió dotar a la pulsera de una interacción más sofisticada.

---

## 2. Metodología de diseño

El desarrollo de esta práctica comenzó con la definición de una nueva intención estética basada en la temática floral del EDC 2025. Se buscó crear un accesorio más llamativo y detallado, que transmitiera la combinación de naturaleza, color y efectos luminosos característica del festival.

Posteriormente, se seleccionó un listón textil como estructura principal de la pulsera, ya que ofrecía flexibilidad, comodidad y facilidad de costura. Sobre esta base se planificó la ubicación de los cinco LEDs y sus resistencias, así como las rutas del hilo conductor necesarias para conectar todos los componentes.

La integración electrónica se diseñó utilizando el microcontrolador Seeed Studio XIAO ESP32S3
, el cual fue programado para generar una secuencia repetitiva de encendido y apagado de los LEDs. El cierre de la pulsera funcionó como interruptor de activación, de manera que al abrocharla se energizaba el sistema y comenzaba automáticamente la secuencia en loop.

Finalmente, se incorporaron elementos decorativos florales y acabados textiles que ocultaron parcialmente los componentes electrónicos y reforzaron la identidad visual inspirada en el EDC.rónica y cómo se integra el microcontrolador._

### Diagrama del circuito

```
📁 assets/img/practica-02/
   └── arquitectura.png
```

---

## 3. Código de programación

> Código implementado.

```cpp
// Práctica 2 — Pulsera con microcontrolador
// Descripción: Secuencia de 5 LEDs activada por cierre de pulsera

// Pines de los 5 LEDs
int leds[] = {2, 3, 4, 5, 6};
int numLeds = 5;

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(leds[i], OUTPUT);
    digitalWrite(leds[i], LOW);
  }
}

void loop() {
  // Encendido secuencial
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
    delay(150);
    digitalWrite(leds[i], LOW);
  }

  // Encendido inverso
  for (int i = numLeds - 1; i >= 0; i--) {
    digitalWrite(leds[i], HIGH);
    delay(150);
    digitalWrite(leds[i], LOW);
  }
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
