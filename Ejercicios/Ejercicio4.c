#include <stdio.h>

int main() {
    int i;
    int num = 10;
    int array[5] = {1, 2, 3, 4, 5};
    int contador = 0;

    for (i = 1; i < 10; i--) { // Se debe cambiar a i++ para que no sea infinito
        printf("Valor de i: %d\n", i);
    }

    for (i = 0; i <= 5; i++) {  // Se debe poner hasta i <= a 4 porque tiene 5 posiciones contando desde 0
        printf("Elemento del array: %d\n", array[i]);
    }

    while (num != 0) {  // Bucle infinito porque num siempre es diferente de cero
        printf("Valor de num: %d\n", num);
        num = num + 1;  // se debe restar en vez de sumar para que se ejecute 10 veces
    }

    while (contador < 5) {          // Bucle infinito porque el contador nunca cambia de valor y vale 0
        printf("Valor de contador: %d\n", contador);
    }

    return 0;
}