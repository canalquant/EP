/*  */
#include <stdio.h>

int main(void){
    int prod = 1, num = 1,count = 20, lastNum;
    lastNum = 2 * count - 1;
    while (num <= lastNum){

        prod = prod * num;
        num = num + 2;

    }
    
    printf("El resultat és %d", prod);
    return 0;
}