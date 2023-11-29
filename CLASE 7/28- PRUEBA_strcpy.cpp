#include<stdio.h>
#include<conio.h>
#include<string.h>

#define n 8

main(){
	char cadena_MAC[n], x[n], resp;
	
	do{
		printf("\nLECTURA DE CADENAS CON gets:\n ");
		printf("\nIngresar una cadena: ");
		fflush(stdin);
		gets(cadena_MAC);
		printf("\nLa cadena leida es: ");
		puts(cadena_MAC);
		
		printf("La longitud de la cadena es: %d", strlen(cadena_MAC));
		
		strcpy(x, cadena_MAC);
		printf("\nLa cadena x es: ");
		puts(x);
		
		printf("\n Deseas continuar [y/n]: ");
		fflush(stdin);
		scanf("%c", &resp);
		
	}while(resp == 'y' || resp=='Y');
	
}
