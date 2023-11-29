#include<stdio.h>
#include<conio.h>
#include<string.h>

#define n 30

main(){
	char s1[n], resp;
	int longitud;
	
	do{
		printf("\nIngresar una cadena 1: ");
		fflush(stdin);
		gets(s1);
		longitud = strlen(s1);
	
		for(int i=0; i<longitud; i++){
			if (s1[i] == 32) continue;
			printf("[%d]",s1[i]);
		}
				
		printf("\nCadena [%s] convertida a minuscula:\n", s1);
		strlwr(s1);
		puts(s1);
		
		
		printf("\n Deseas continuar [y/n]: ");
		fflush(stdin);
		scanf("%c", &resp);
		
	}while(resp == 'y' || resp=='Y');
	
}
