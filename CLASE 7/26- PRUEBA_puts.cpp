//25.- LEER CADENA

#include<stdio.h>
#include<conio.h>

#define n 20

main(){
	char cadena_MAC[n], resp;
	
	do{	
		printf("\n\nLECTURA DE CADENAS CON gets:\n ");
		printf("\nIngresar una cadena: ");
		fflush(stdin);
		gets(cadena_MAC);
		printf("\nLa cadena leida es: ");
		printf("%s", cadena_MAC);
		
		printf("\n\nPRUEBA DE puts\n");
		puts(cadena_MAC);
		
		printf("\n\nDeseas continuar [y/n]: ");
		fflush(stdin);
		scanf("%c", &resp);
		
	}while(resp == 'y'|| resp == 'Y');
	
}
