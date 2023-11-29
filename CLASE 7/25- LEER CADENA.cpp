//25.- LEER CADENA

#include<stdio.h>
#include<conio.h>

#define n 20

main(){
	char cadena_MAC[n], resp;
	
	do{
		printf("\nLECTURA DE CADENAS CON scanf:\n ");
		printf("\nIngresar una cadena: ");
		scanf("%s", cadena_MAC);
	
		printf("\nLa cadena leida es: ");
		printf("%s", cadena_MAC);
		
		printf("\n\nLECTURA DE CADENAS CON gets:\n ");
		printf("\nIngresar una cadena: ");
		fflush(stdin);
		gets(cadena_MAC);
		
		printf("\nLa cadena leida es: ");
		printf("%s", cadena_MAC);
		
		printf("\n Deseas continuar [y/n]: ");
		fflush(stdin);
		scanf("%c", &resp);
		
	}while(resp == 'y'|| resp == 'Y');
	
}
