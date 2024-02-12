#include <stdio.h>
#define DIM 99

int main(void){
    int table[DIM][DIM], ejeX[DIM], ejeY[DIM];
    int dimMod, i, j, resta, inverse, count;

    printf("Escull una base entera menor que 100:\n");
    scanf(" %d", &dimMod);

    if(dimMod>= 100){
        printf("Base >=100 !!\n");
        return 0;
    }
    /*creació vectors*/
    for(i = 0; i<dimMod; i++){
        ejeX[i] = i;
        ejeY[i] = i;
    }
    /*primer paragraf*/
    printf(" -  ");
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
            resta = (ejeX[i]-ejeY[j])%dimMod;
            while(resta < 0){
                resta = dimMod+resta;
            }
            table[i][j] = resta;
            printf(" %2d", table[i][j]);
        }
        puts("");
    }
    printf("INVERSE: \n");
    for(i = 0; i<dimMod; i++){
        printf("%2d  ", ejeX[i]);
    }
    puts("");
    for(i = 0; i<dimMod; i++){
        inverse = 1;
        count = -1;
        while(inverse && count<dimMod){
            count++;
            if((ejeX[i]*count)%dimMod == 1){
                inverse = 0;
            }
        }
        if(!inverse){
            printf("%2d  ", count);
        }else{
            printf(" X  ");
        }
    }
    puts("");

    return 0;
}