#include<stdio.h>
#include<conio.h>
#include<string.h>

#define n 8

main(){
	char cadena_MAC[n], x[n], uneCadena[4*n], resp;
	
	do{
		printf("\nLECTURA DE CADENAS CON gets:\n ");
		printf("\nIngresar una cadena 1: ");
		fflush(stdin);
		gets(cadena_MAC);
		printf("\nLa cadena leida es: ");
		puts(cadena_MAC);
		printf("La longitud de la cadena es: %d", strlen(cadena_MAC));
		
		printf("\nIngresar una cadena 2: ");
		gets(x);
		printf("\nLa cadena leida es: ");
		puts(x);
		printf("La longitud de la cadena es: %d", strlen(x));
		
		printf("\n\nConcatenar: Unir dos cadenas o mas:\n");
		strcat(uneCadena, cadena_MAC);
		strcat(uneCadena, " ");
		strcat(uneCadena, x);
		
		puts(uneCadena);
		
		
		
		printf("\n Deseas continuar [y/n]: ");
		fflush(stdin);
		scanf("%c", &resp);
		
	}while(resp == 'y' || resp=='Y');
	
}

