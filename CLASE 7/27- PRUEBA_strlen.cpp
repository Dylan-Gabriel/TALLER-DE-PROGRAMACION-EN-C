//25.- LEER CADENA

#include<stdio.h>
#include<conio.h>
#include<string.h>

#define n 8

main(){
	char cadena_MAC[n], resp;
	
	do{
		
		printf("\n\nLECTURA DE CADENAS CON gets:\n ");
		printf("\nIngresar una cadena: ");
		fflush(stdin);
		gets(cadena_MAC);
		printf("\nLa cadena leida es: ");
		puts(cadena_MAC);
		
		printf("LA LONGITUD DE LA CADENA ES: %d", strlen(cadena_MAC));
		
		printf("\n Deseas continuar [y/n]: ");
		fflush(stdin);
		scanf("%c", &resp);
		
	}while(resp == 'y'|| resp == 'Y');
	
}
