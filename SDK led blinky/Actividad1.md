# Actividad 1

##### 1. Elegir dos puertos diferentes al del ejemplo y vas a utilizar las funciones del ejemplo para configurar dichos puertos y utilizarlos de manera similar. 

Se puede realizar cambiando las siguientes líneas de código en el archivo pin_mux.h

```c
#define BOARD_INITPINS_LED_RED_GPIO GPIOE
#define BOARD_INITPINS_LED_RED_PORT PORTE 
#define BOARD_INITPINS_LED_RED_PIN 9U 
```
Por ejemplo, para utilizar el pin 2 del puerto B:
```c
#define BOARD_INITPINS_LED_RED_GPIO GPIOB
#define BOARD_INITPINS_LED_RED_PORT PORTB 
#define BOARD_INITPINS_LED_RED_PIN 2U 
```
O el pin 7 del puerto C:
```c
#define BOARD_INITPINS_LED_RED_GPIO GPIOC
#define BOARD_INITPINS_LED_RED_PORT PORTC 
#define BOARD_INITPINS_LED_RED_PIN 7U 
```
##### 2. Vas a expermientar. Propón diferentes acciones como cambiar el periodo de la interrupción del Systick, el número de leds utilizados en el ejemplo, encender y apagar los leds, etc. Escribe el experimento que propones, impleméntalo y documenta los resultados. 

El experimento que voy a realizar es cambiar el periodo del Systick de tal forma que el led prenda y apague con más o menos tiempo, esto se logra modificando la función main del archivo led_blinky.c
```c
int main(void)
{
    /* Board pin init */
    BOARD_InitPins();
    BOARD_InitBootClocks();

    /* Set systick reload value to generate 1ms interrupt */
    if (SysTick_Config(SystemCoreClock / 1000U))
    {
        while (1)
        {
        }
    }

    while (1)
    {
        /* Delay 200 ms en este caso*/
        SysTick_DelayTicks(200U);
        GPIO_PortToggle(BOARD_LED_GPIO, 1u << BOARD_LED_GPIO_PIN);
    }
}
```

Se modifica el argumento de la función SysTick_DelayTicks(==200U==), en este caso, se usan 200 milisegundos, pero funciona para cualquier tiempo mayor a 0.