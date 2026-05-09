---
layout: default
title: Evidencia
parent: Proyecto Final
nav_order: 5
---

# Evidencia Fotográfica y de Video
{: .fs-7 }

---

## Fotos del proceso

> 📁 Agrega tus fotos del proceso de construcción en `assets/img/proyecto-final/evidencia/` y referencia cada una con el formato de ejemplo abajo.

### Proceso de manufactura

```markdown
![Termoformado de PVC]({{ '/assets/img/proyecto-final/evidencia/pvc.jpg' | relative_url }})
*Proceso de termoformado del cinturón estructural de PVC.*

![Arco de alambre]({{ '/assets/img/proyecto-final/evidencia/arco.jpg' | relative_url }})
*Construcción de las estructuras semicirculares con alambre galvanizado.*

![Pintado estructura]({{ '/assets/img/proyecto-final/evidencia/pintura.jpg' | relative_url }})
*Acabado negro en aerosol sobre toda la estructura.*
```

### Implementación electrónica

```markdown
![Conexiones electrónicas]({{ '/assets/img/proyecto-final/evidencia/electronica.jpg' | relative_url }})
*Conexión del XIAO ESP32 S3 con los servomotores y sensor táctil.*

![Sistema de hilos]({{ '/assets/img/proyecto-final/evidencia/hilos.jpg' | relative_url }})
*Integración de los hilos de tensión entre las capas de organza.*
```

### Ensamble final

```markdown
![Prenda ensamblada — frente]({{ '/assets/img/proyecto-final/evidencia/frente.jpg' | relative_url }})
*Vista frontal de la prenda completamente ensamblada.*

![Prenda ensamblada — detalle]({{ '/assets/img/proyecto-final/evidencia/detalle.jpg' | relative_url }})
*Detalle de la estructura superior con organza.*
```

---

## Video — Demostración de funcionamiento

> Reemplaza `TU_VIDEO_ID` con el ID de tu video de YouTube.

<div class="responsive-embed">
  <iframe src="https://www.youtube.com/embed/TU_VIDEO_ID" allowfullscreen></iframe>
</div>

*Video demostrando la activación del sensor táctil y el movimiento de apertura de la prenda.*

---

## Fotos — Pasarela final

```markdown
![Pasarela 1]({{ '/assets/img/proyecto-final/evidencia/pasarela-01.jpg' | relative_url }})
*Presentación en pasarela final.*

![Pasarela 2]({{ '/assets/img/proyecto-final/evidencia/pasarela-02.jpg' | relative_url }})
*Detalle del movimiento durante la performance.*
```

---

## Video — Pasarela

<div class="responsive-embed">
  <iframe src="https://www.youtube.com/embed/TU_VIDEO_PASARELA_ID" allowfullscreen></iframe>
</div>

---

## Instrucciones para agregar tus imágenes

1. Coloca tus fotos en la carpeta:  
   `assets/img/proyecto-final/evidencia/`

2. Referencia cada foto en esta página con:
```markdown
![Descripción]({{ '/assets/img/proyecto-final/evidencia/nombre-archivo.jpg' | relative_url }})
```

3. Para videos de YouTube, usa el formato:
```html
<div class="responsive-embed">
  <iframe src="https://www.youtube.com/embed/VIDEO_ID" allowfullscreen></iframe>
</div>
```
