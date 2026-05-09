---
layout: default
title: Proceso de Manufactura
parent: Proyecto Final
nav_order: 3
---

# Proceso de Manufactura e Iteraciones
{: .fs-7 }

---

## Conceptualización e ideación

El proyecto comenzó a partir de la propuesta conceptual inspirada en las emociones presentes al inicio de una manifestación social. Desde las primeras etapas se buscó representar visualmente sensaciones como ansiedad, adrenalina, tensión y liberación emocional mediante una pieza wearable de carácter avant garde.

Los primeros bocetos exploraban siluetas volumétricas y estructuras que permitieran transformar visualmente el cuerpo a través del movimiento.

### Concepto inicial: sistema neumático
Inicialmente se planteó utilizar una **bomba de aire** que inflara la tela para generar expansión en la estructura superior.

**Resultado:** durante las primeras pruebas se observó que el inflado era demasiado lento y no generaba el impacto visual esperado.

**Decisión:** replantear el sistema hacia tensión textil mediante servomotores e hilos.

> 📁 Agrega bocetos iniciales:
```
📁 assets/img/proyecto-final/manufactura/
   └── boceto-inicial.jpg
```

---

## Iteración 1: Estructura con varillas metálicas

La primera versión de la estructura fue construida con **varillas metálicas** similares a las usadas en confección de ropa.

**Problema:** el sistema resultaba demasiado flexible y no mantenía la forma requerida para soportar el movimiento.

```
📁 assets/img/proyecto-final/manufactura/
   └── estructura-v1.jpg
```

---

## Iteración 2: Estructura con PVC termoformado

**Solución:** reemplazar las varillas por **PVC termoformado**.

**Proceso:**
1. Corte del tubo de PVC a la longitud requerida
2. Calentamiento con pistola térmica hasta alcanzar temperatura de formado (~80°C)
3. Moldeado manual para crear el cinturón estructural
4. Enfriamiento y verificación de rigidez

**Para el arco superior:** se construyeron dos estructuras semicirculares con **alambre galvanizado**, logrando una combinación de resistencia y ligereza.

**Acabado:** toda la estructura fue pintada con **aerosol negro** para evitar que el color del PVC y el alambre fueran visibles a través de la tela translúcida.

```
📁 assets/img/proyecto-final/manufactura/
   └── pvc-termoformado.jpg
   └── arco-alambre.jpg
   └── pintado-negro.jpg
```

---

## Sistema mecánico y movimiento

Después de descartar el sistema neumático, se desarrolló una solución basada en **tensión textil mediante servomotores e hilos**.

### Principio de funcionamiento
- Los hilos se integraron entre las capas de tela de forma **cruzada**
- El servo izquierdo controla el lado derecho y viceversa
- Esto distribuye la tensión de manera equilibrada durante la apertura

### Objetivo del movimiento
Provocar una apertura progresiva de la estructura superior, **revelando parcialmente el rostro** del usuario como representación simbólica de liberación y expresión emocional.

```
📁 assets/img/proyecto-final/manufactura/
   └── sistema-hilos.jpg
   └── detalle-mecanico.jpg
```

---

## Implementación electrónica

### Iteración electrónica 1: Servos de 180°
Inicialmente se utilizaron servomotores estándar de 180°.

**Problema:** uno de los servos sufrió **daños mecánicos internos** durante las pruebas debido a la tensión generada por el sistema textil.

### Iteración electrónica 2: Servos de 360°
**Solución de emergencia:** reemplazo por **servomotores de rotación continua 360°**, programados para simular el comportamiento de apertura y retorno.

**Resultado:** mejor continuidad del movimiento y mayor resistencia a la tensión del sistema textil.

```
📁 assets/img/proyecto-final/manufactura/
   └── servos-360.jpg
   └── prueba-electronica.jpg
```

---

## Integración y ensamble final

La electrónica fue colocada en la **parte trasera de la estructura** para:
- Facilitar la distribución del peso
- Ocultar los componentes debajo de la tela translúcida
- No afectar la apariencia general

Se realizaron pruebas con la prenda completamente ensamblada verificando:
- ✅ Comodidad del usuario
- ✅ Estabilidad estructural
- ✅ Respuesta del sistema mecánico durante movimiento corporal

```
📁 assets/img/proyecto-final/manufactura/
   └── ensamble-final-01.jpg
   └── ensamble-final-02.jpg
   └── prueba-en-modelo.jpg
```
