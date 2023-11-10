//4-LECTURA DE CADENAS
#include<stdio.h>

main(){
	char nombre[20];
	
	printf("Como te llamas? ");
	gets(nombre);
	//scanf("%s", &nombre);
	printf("\nSaludos!!!!. Bienvenid@ %s", nombre);
}
