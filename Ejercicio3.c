#include <stdio.h>
#include <string.h>

int main() {
    // Datos enteros
    int entero = 10.5;  // Debe ser un float
    printf("El valor del entero es: %d\n", entero);  // Como es float se debe imprimir con %f

    // Datos float
    float decimal = 3 / 2;  // La division entre dos enteros da un entero, debe poner 3.0/2 o (float) 3/2
    printf("El valor del decimal es: %f\n", decimal);  
    float decimal_1 = 12.5 * 5;  
    printf("El valor del decimal es: %d\n", decimal_1);  //Se debe imprimir con %f

    // Caracteres
    char letra = "A";  // Como es una cadena de caracteres tiene dos caracteres contando el \0, debe cambiar a 'A'
    printf("El valor del caracter es: %c\n", letra); // Si lo hace con comillas simples está bien

    // Cadenas de caracteres
    char nombre[5];  // Debe tener un espacio más para que quepa el \0
    strcpy(nombre, "Henry");  
    printf("El nombre es: %s\n", nombre);

    return 0;
}