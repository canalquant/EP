#include <stdio.h>

int main(void){
    char H, D, introduit;
    H = 'H';
    D = 'D';

    int Count_H, Count_D, marca, millor_D, total, totalH, totalD, more2m;
    millor_D = 0;
    total = 0;
    more2m = 0;
    totalH = 0;
    totalD = 0;
    printf("Introdueix el sexe de la persona (H/D) i a seva marca:\n");
    scanf(" %c %d", &introduit, &marca);

    while (introduit == H || introduit == D){
        total += 1;
        if (introduit == H){
            Count_H +=1;
            
            if (marca > 200){
                more2m +=1;
                totalH += marca;
            }
            
        }
        if (introduit == D){
            Count_D += 1;
            totalD += marca;
            if (millor_D<marca){
                millor_D = marca;
            }
            
        }
        
        marca = 0;
        printf("Introdueix el sexe de la persona (H/D) i a seva marca:\n");
        scanf(" %c %d", &introduit, &marca);
        
    }


    printf("Nombre total d'atletes: %d \n", total);
    printf("Nombre d'homes: %d \n", Count_H); 
    printf("Nombre d'homes +2m: %d \n", more2m); 
    printf("Mitjana homes que salten + 2m: %f\n", ((float)(totalH/more2m))/100);   
    printf("Nombre de dones: %d \n", Count_D);
    printf("Mitjana salts dones: %f \n", ((float)totalD/Count_D)/100);
    printf("Millor marca femenina %d \n", millor_D); 
    

    return 0;
}