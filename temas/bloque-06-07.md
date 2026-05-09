---
layout: default
title: "Bloque VI-VII: Comunicación Inalámbrica y Apps"
parent: Temas del Semestre
nav_order: 5
---

# Bloques VI y VII: Comunicación Inalámbrica y Desarrollo de Apps
{: .fs-7 }

---

## Comunicación inalámbrica (Bloque VI — Tema XI)

### WiFi
- Protocolo 802.11 b/g/n
- El ESP32 actúa como cliente o como Access Point
- Permite envío de datos a servidor, MQTT, HTTP

```cpp
#include <WiFi.h>

const char* ssid = "TuRedWiFi";
const char* password = "TuPassword";

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConectado. IP: " + WiFi.localIP().toString());
}
```

### Bluetooth (BLE)
- Bluetooth Low Energy — bajo consumo ideal para wearables
- Perfiles: HID (teclado/mouse), GATT (servicios personalizados)
- Permite conectar con smartphone sin app dedicada (Web Bluetooth)

```cpp
#include <BLEDevice.h>
#include <BLEServer.h>
#include <BLEUtils.h>
#include <BLE2902.h>

// Crea un servidor BLE y notifica datos
BLECharacteristic *pCharacteristic;
bool deviceConnected = false;
```

### NFC (Near Field Communication)
- Comunicación a muy corta distancia (< 4 cm)
- Frecuencia: 13.56 MHz
- Aplicaciones: activación de wearable al acercar teléfono, almacenamiento de datos del usuario
- Módulo común: PN532

---

## Desarrollo de Apps (Bloque VII — Tema XII)

### Interfaces gráficas para wearables

**MIT App Inventor**
- Plataforma visual para crear apps Android
- Comunicación con Arduino/ESP32 vía Bluetooth
- Ideal para prototipos rápidos

**Blynk IoT**
- Dashboard IoT en smartphone
- Fácil conexión con ESP32 vía WiFi
- Widgets: botones, sliders, gráficas en tiempo real

**Web Bluetooth API**
- Conecta el navegador directamente al wearable BLE
- No requiere instalar app
- Compatible con Chrome en Android y desktop

```javascript
// Ejemplo Web Bluetooth
async function connectBLE() {
  const device = await navigator.bluetooth.requestDevice({
    filters: [{ name: 'MiWearable' }],
    optionalServices: ['battery_service']
  });
  const server = await device.gatt.connect();
  console.log('Conectado a:', device.name);
}
```

**Processing / p5.js**
- Visualización de datos del wearable en tiempo real
- Comunicación por Serial (USB) o WebSocket

---

## Material de referencia

> Agrega aquí tus notas, capturas de pantalla de apps y evidencias.

```
📁 assets/img/bloque-06/
📁 assets/img/bloque-07/
   └── [agrega tus imágenes aquí]
```
