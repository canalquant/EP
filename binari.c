#include <stdio.h>

int main(void){
    unsigned int enter, reminder, binarynumber;
    int inicial, i;
    binarynumber = 0;
    i = 1;

    printf("Introdueix un nombre enter: \n");
    scanf(" %d", &enter);
    inicial = enter;
    
    while (enter != 0){
       reminder = enter%2;
       enter /= 2;
       binarynumber += reminder * i;
       i *= 10;
    }
    printf("El número %d en binar és %d\n", inicial, binarynumber);

    return 0;
}