#include <stdio.h>
#define DIM 99

int main(void){
    int table[DIM][DIM], ejeX[DIM], ejeY[DIM];
    int dimMod, i, j;

    printf("Escull una base entera menor que 100:\n");
    scanf(" %d", &dimMod);

    if(dimMod>= 100){
        printf("Base >=100 !!\n");
        return 0;
    }

    for(i = 0; i<dimMod; i++){
        ejeX[i] = i;
        ejeY[i] = i;
    }
    printf(" +  ");
    for(i = 0; i<dimMod; i++){
        printf(" %2d", ejeX[i]);
    }
    puts("");
    printf("----");
    for(i = 0; i<dimMod; i++){
        printf("---");
    }
    puts("");
    for(i = 0; i<dimMod; i++){
        printf(" %d |", ejeX[i]);
        for(j = 0; j<dimMod; j++){
            table[i][j] = (ejeX[i]+ejeY[j])%dimMod;
            printf(" %2d", table[i][j]);
        }
        puts("");
    }

    return 0;
}