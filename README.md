[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/tn5SB-Yw)
# Unidad 3
## Documentación del Proyecto
 
Nombre del estudiante:  Juan Diego Arturo
ID: 000473366

## Ejercicio 1

#### 1. Lenguajes para programar sistemas embebidos

Los lenguajes más comunes utilizados en el desarrollo de sistemas embebidos incluyen:

- **C**
- **C++**
- **Assembly**
- **Rust**
- **Python**
- **Ada**
- **Lua**
- **Java**
- **Go**
- **Forth**

#### 2. Ventajas y desventajas de los lenguajes comparados con C

##### **C**

- **Ventajas:**
  - Gran control sobre el hardware.
  - Muy eficiente en términos de uso de recursos.
  - Soporte generalizado en la mayoría de los microcontroladores y plataformas embebidas.
  - Bajo overhead, ideal para sistemas de tiempo real.
  
- **Desventajas:**
  - No tiene manejo de memoria automático.
  - Propenso a errores de manejo de punteros y memoria.
  - Escasa abstracción, lo que puede incrementar la complejidad de los proyectos.

##### **C++**

- **Ventajas:**
  - Proporciona abstracción orientada a objetos sin sacrificar mucho rendimiento.
  - Permite reutilización de código mediante clases y funciones.
  - Mejores estructuras de datos y librerías estándar que C.

- **Desventajas:**
  - Más complejo que C, lo que puede dificultar la depuración en sistemas embebidos.
  - Mayor uso de memoria y recursos, no siempre óptimo para sistemas con limitaciones severas.

##### **Assembly**

- **Ventajas:**
  - Control total sobre el hardware.
  - Máxima eficiencia en términos de velocidad y uso de recursos.
  
- **Desventajas:**
  - Difícil de mantener y escalar.
  - Código difícil de entender y propenso a errores.
  - Muy dependiente de la arquitectura del procesador.

##### **Rust**

- **Ventajas:**
  - Seguridad en memoria, evitando errores comunes como desbordamiento de búfer y uso indebido de punteros.
  - Buen control de bajo nivel con características de alto nivel.
  - Comparativamente eficiente como C en uso de recursos.

- **Desventajas:**
  - Soporte limitado en comparación con C para microcontroladores y hardware específico.
  - Curva de aprendizaje más pronunciada, especialmente para desarrolladores acostumbrados a C.

##### **Python**

- **Ventajas:**
  - Facilidad de uso y desarrollo rápido.
  - Gran comunidad y muchas librerías útiles para ciertos sistemas embebidos de mayor potencia (como Raspberry Pi).
  
- **Desventajas:**
  - No es adecuado para aplicaciones de tiempo real o con recursos limitados.
  - Consumo de memoria y recursos es mucho mayor que en C o C++.

##### **Java**

- **Ventajas:**
  - Portabilidad gracias a la Máquina Virtual de Java.
  - Gestión automática de memoria mediante Garbage Collector.
  
- **Desventajas:**
  - Requiere más recursos de ejecución y memoria que C.
  - No está diseñado para sistemas de tiempo real o con restricciones de recursos.

#### 3. Ranking de lenguajes para sistemas embebidos

- [TIOBE Index](https://www.tiobe.com/tiobe-index/)
- [Top 10 Best Embedded Systems Programming Languages in 2024](https://www.geeksforgeeks.org/embedded-systems-programming-languages/)

##### Percepciones sobre los ranking

El lenguaje **C** sigue dominando el espacio de sistemas embebidos debido a su eficiencia y control de hardware. **C++** también ocupa una posición relevante gracias a su equilibrio entre eficiencia y abstracción orientada a objetos. Lenguajes más modernos como **Rust** están ganando terreno, especialmente en aplicaciones que requieren mayor seguridad en la gestión de memoria, aunque su uso aún es limitado comparado con C. **Python** y **Java** son menos frecuentes en sistemas embebidos de bajo nivel, pero son útiles en plataformas más potentes como Raspberry Pi.

