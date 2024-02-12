/*
Dos nombres son amics si la suma dels divisors propis del primer ´ es igual al segon i la suma dels divisors ´
propis del segon es igual al primer. Feu un programa que calculi si dos nombres enters donats s ´ on´
nombres amics
*/

#include <stdio.h>

int main(void){
    int amic1, amic2, contador1,contador2, n;

    printf("Introdueix dos nombres: \n");
    scanf("%d %d", &amic1, &amic2);
    contador1 = 1;
    contador2 = 1;
    /* trobar divisors i suma*/
    n =2;

    do { 
    if(amic1%n == 0){
        contador1 += n;
    }
        n++;
    } while( amic1>n);

    n = 2;
    do { 
    if(amic2%n == 0){
        contador2 += n;
    }
    n++;
    } while( amic2>n);


    /*Condició final:*/
    if(contador1 == amic2 && contador2 == amic1){
        printf("%d i %d són nombres amics\n", amic1, amic2);
    }else{
        printf("%d i %d NO són nombres amics\n", amic1, amic2);
    }

    return 0;
}