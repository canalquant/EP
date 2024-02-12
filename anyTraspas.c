#include <stdio.h>
/*Digues si un any introduit és un any de traspas*/
int main(void){
	int any;


	printf("Introdueix un any: \n");
	scanf("%d", &any);

	if ((any%4 == 0 && any%100 != 0) || (any%400 == 0)){
		printf("És un any de traspàs\n");
	} else {
		printf("No és un any de traspàs\n");	
	}

	return 0;
}
