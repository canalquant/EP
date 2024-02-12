/*
Llegiu un nombre enter no nul i compteu el nombre de d´ıgits que te.
*/

#include <stdio.h>

int main(void){
    int contador, nombre, inicial;
    printf("Introdueix un nomnre enter: \n");
    scanf("%d", &nombre);
    inicial = nombre;
    contador = 1;
    while (nombre/10 != 0){
        nombre = nombre/10;
        contador++;
        }
    printf("El número %d té %d digits\n", inicial, contador);
    return 0;
}