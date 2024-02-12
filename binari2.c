#include <stdio.h>
int main(void){
    int num, exp;
    printf("Introdueix un numero que vulguis passar a binari: \n");
    scanf(" %d", &num);

    exp = 1;

    while(num >= exp){
        exp *= 2;
    }
    exp /= 2;

    while(exp > 0){
        printf("%d", num/exp);
        num = num%exp;
        exp /= 2;
    }
    puts("");
    return 0;
}