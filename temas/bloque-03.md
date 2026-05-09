---
layout: default
title: "Bloque III: Electrónica para Sistemas Portables"
parent: Temas del Semestre
nav_order: 3
---

# Bloque III: Electrónica para Sistemas Portables y Diseño de Hardware
{: .fs-7 }

---

## Tarjetas de desarrollo (Tema VI)

Microcontroladores compactos adecuados para wearables:

| Tarjeta | Características principales |
|---|---|
| **XIAO ESP32 S3** | WiFi + BT, bajo consumo, 21×17.5 mm, 8 MB Flash |
| **Arduino Nano** | Clásico, 5V, 32 KB Flash, ideal para prototipos |
| **Adafruit Flora** | Circular, diseñado para e-textiles, compatible con NeoPixels |
| **LilyPad Arduino** | Lavable, para integración textil directa |
| **Seeed XIAO BLE** | Bluetooth 5.0, batería LiPo integrada |

### Pinout XIAO ESP32 S3

```
        [ USB-C ]
 D0/A0  ●         ● 5V
 D1/A1  ●         ● GND
 D2/A2  ●         ● 3V3
 D3/A3  ●         ● D10/MOSI
 D4/SDA ●         ● D9/MISO
 D5/SCL ●         ● D8/SCK
 D6/TX  ●         ● D7/RX
```

---

## Alimentación: Etapa de potencia y Baterías (Tema VII)

### Tipos de baterías para wearables

| Tipo | Voltaje | Ventajas | Desventajas |
|---|---|---|---|
| **LiPo** | 3.7V | Ligera, recargable, flexible | Requiere circuito de protección |
| **Li-Ion 18650** | 3.7V | Alta capacidad, barata | Voluminosa |
| **Baterías AA** | 1.5V (×2 = 3V) | Accesible, fácil reemplazo | Peso, no recargable |
| **Coin cell CR2032** | 3V | Muy compacta | Poca capacidad |

### Consideraciones de diseño de potencia

- **Reguladores de voltaje:** LDO (baja caída) para sistemas de 3.3V
- **Protección:** circuitos de carga con IC como TP4056
- **Consumo en sleep mode:** optimizar con deep sleep en ESP32
- **Cálculo de autonomía:** `t (h) = Capacidad (mAh) / Consumo (mA)`

---

