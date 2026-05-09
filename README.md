# Bitácora Web — Dispositivos de Tecnología Corporal

**IE115 | Universidad Iberoamericana | Primavera 2026**

Repositorio de bitácora web del curso *Dispositivos de Tecnología Corporal y Laboratorio* (IE115), desarrollado con [Just the Docs](https://just-the-docs.github.io/just-the-docs/) sobre GitHub Pages.

**Equipo:** Martha Valdés · Nahomi Cruz · Annette Cunillé  
**Profesores:** Alma De León Hernández · Edgar Adrián León Ruiz

---

## Contenido

- **Temas del semestre** — 8 bloques temáticos: introducción a wearables, textiles conductivos, electrónica portable, sensores, actuadores, comunicación inalámbrica y más
- **Prácticas** — Pulsera textil con hilo conductor, pulsera con microcontrolador, bordado y estampado
- **Proyecto Final** — Wearable Diseño Avant Garde: prenda interactiva con servomotores y sensor táctil

---

## Cómo publicar este repositorio en GitHub Pages

1. Haz fork o sube este repositorio a tu cuenta de GitHub
2. Ve a **Settings → Pages**
3. En *Source*, selecciona la rama `main` y la carpeta `/ (root)`
4. Edita `_config.yml`:
   - Cambia `url` a `https://TU_USUARIO.github.io`
   - Cambia `baseurl` a `/NOMBRE_DEL_REPO`
5. GitHub Actions compilará el sitio automáticamente

---

## Estructura del repositorio

```
wearables-bitacora/
├── _config.yml              # Configuración del sitio
├── _includes/               # Plantillas personalizadas
├── assets/
│   ├── css/custom.css       # Estilos personalizados
│   ├── img/                 # Imágenes (agregar las tuyas aquí)
│   └── files/               # Archivos descargables (código .ino, etc.)
├── index.md                 # Página de inicio
├── temas/                   # Bloques temáticos del semestre
├── practicas/               # Prácticas de laboratorio
└── proyecto-final/          # Dossier técnico del proyecto final
```

---

## Cómo agregar contenido

- **Imágenes:** coloca los archivos en `assets/img/` y referéncialos con:  
  `![Descripción]({{ '/assets/img/nombre.jpg' | relative_url }})`

- **Videos de YouTube:**
  ```html
  <div class="responsive-embed">
    <iframe src="https://www.youtube.com/embed/VIDEO_ID" allowfullscreen></iframe>
  </div>
  ```

- **Código:** usa bloques con triple backtick y el lenguaje:
  ```cpp
  // Tu código aquí
  ```
