# Módulo de Interrupciones NVIC

Las interrupciones permiten a los microcontroladores responder rápidamente a eventos externos o internos. Estas pueden ser generadas por hardware o software y gestionadas a través del NVIC.

## Modos de Operación del Procesador
**Thread Mode**: Ejecuta el código principal del programa.
**Handler Mode**: Ejecuta código en respuesta a una interrupción o excepción.

## Estados de Excepción
**Inactivo**: No hay excepciones ocurriendo.
**Pendiente**: Excepción detectada pero no manejada.
**Activo**: Excepción siendo manejada.
**Activo y Pendiente**: Excepción manejada con otra pendiente.

## Tratamiento de una Interrupción
Las interrupciones pueden anidarse, con interrupciones de mayor prioridad interrumpiendo a las de menor prioridad.

## Context Saving
Al atender una interrupción, el procesador guarda el contexto del programa para restaurarlo y continuar su ejecución después de manejar la interrupción.

## Latencia de Interrupciones
La latencia de interrupción es el tiempo que tarda el procesador en responder a una interrupción. Depende de factores como la prioridad y la configuración del NVIC.

## Módulo NVIC
El NVIC gestiona las interrupciones, asigna prioridades y permite habilitar o deshabilitar interrupciones mediante diversos registros.

## Registros Clave
**ISER**: Habilita interrupciones.
**ICER**: Deshabilita interrupciones.
**ISPR**: Establece interrupciones como pendientes.
**ICPR**: Limpia interrupciones pendientes.
**IPR**: Establece la prioridad de las interrupciones.

## Niveles de Prioridad
Las interrupciones se clasifican en niveles de prioridad, siendo 0 la prioridad más alta y 15 la más baja.

## Determinar la configuración de una interrupción

Para configurar una interrupción, se deben seguir los siguientes pasos:

**Activar la interrupción en el NVIC**: 
Se utiliza la función ==NVIC_EnableIRQ()== para habilitar la interrupción específica en el controlador de interrupciones.
  
**Configurar la prioridad de la interrupción**:
Las prioridades de las interrupciones se establecen usando la función ==NVIC_SetPriority()==. 
Se asigna un valor de prioridad a la interrupción, donde un número menor representa mayor prioridad.

**Configurar el módulo o periférico que genera la interrupción**:
Dependiendo del tipo de interrupción (temporizador, GPIO), se configuran los registros específicos para habilitar y manejar la interrupción.

**Implementar el manejador de interrupción (ISR)**:
Se define la rutina de servicio de interrupción (ISR) que se ejecutará cuando se active la interrupción.
Es importante que el ISR sea lo más breve posible y que limpie cualquier bandera de interrupción que pueda haber sido activada.

**Probar la configuración de la interrupción**:
Se verifica el funcionamiento correcto de la interrupción ejecutando el programa y observando si se activa el ISR como se espera.

## Eventos que producen la interrupción

Las interrupciones se generan por cambios de tensión en los pines de un microcontrolador, capturados como flancos de subida (bajo a alto) o bajada (alto a bajo). Presionar un botón produce un flanco de subida y soltarlo un flanco de bajada. Estos flancos activan interrupciones y permiten al microcontrolador responder a eventos externos.


