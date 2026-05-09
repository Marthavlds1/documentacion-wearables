---
layout: default
title: Inicio
nav_order: 1
---

# Dispositivos de Tecnología Corporal — Wearables
{: .fs-9 }

Bitácora web del curso **IE115** | Universidad Iberoamericana | Primavera 2026
{: .fs-5 .fw-300 }

---

## Acerca del curso

**Nombre:** Dispositivos de Tecnología Corporal y Laboratorio  
**Clave:** IE115 — 80056  
**Programa:** Ingeniería Mecatrónica y Sistemas Ciberfísicos  
**Créditos:** 8 | Horas/semana: 4  
**Periodo:** Primavera 2026  

**Profesores:**  
- Alma De León Hernández  
- Edgar Adrián León Ruiz  

**Integrantes del equipo:**  
- Martha Valdés  
- Nahomi Cruz  
- Annette Cunillé  

---

## Descripción

La asignatura busca que los alumnos entiendan los procesos de modelación y características humanas de sistemas biomecatrónicos de tecnología corporal, integrando la ingeniería mecatrónica con el diseño textil y de modas para la creación de dispositivos wearables funcionales, estéticos y sostenibles.

---

## Contenido de la bitácora

| Sección | Descripción |
|---|---|
| [📚 Temas del Semestre](temas/) | Bloques temáticos vistos en clase |
| [🔧 Prácticas](practicas/) | Prácticas de laboratorio realizadas |
| [🎓 Proyecto Final](proyecto-final/) | Wearable Avant Garde — Dossier técnico completo |

---

<link rel="stylesheet" href="{{ '/assets/css/custom.css' | relative_url }}">
<link rel="icon" href="{{ '/assets/img/favicon.ico' | relative_url }}" sizes="any">
<script>
  document.addEventListener('DOMContentLoaded', () => {
    const titleLink = document.querySelector('.site-title');
    if (!titleLink || titleLink.querySelector('img')) return;
    const img = document.createElement('img');
    img.src = "{{ '/assets/img/logotipo.png' | relative_url }}";
    img.alt = "Logo";
    img.className = "site-logo";
    titleLink.prepend(img);
  });
</script>
