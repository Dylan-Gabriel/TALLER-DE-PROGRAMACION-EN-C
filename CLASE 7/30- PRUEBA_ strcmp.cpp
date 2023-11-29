#include<stdio.h>
#include<conio.h>
#include<string.h>

#define n 8

main(){
	char s1[n], s2[n], resp;
	int eval;
	
	do{
		printf("\nIngresar una cadena 1: ");
		fflush(stdin);
		gets(s1);
	
		printf("\nIngresar una cadena 2: ");
		gets(s2);
		
		eval= strcmp(s1,s2);
		
		if(eval== -1){
			printf ("\n la cadena: [%s] es menor que [%s],", s1, s2);
		}
		else if(eval==1){
			printf ("\n la cadena: [%s] es mayor que [%s],", s1, s2);
		}
		else{
			printf ("\n la cadena: [%s]  es igual que [%s],", s1, s2);
		}
		
		printf("\n Deseas continuar [y/n]: ");
		fflush(stdin);
		scanf("%c", &resp);
		
	}while(resp == 'y' || resp=='Y');
	
}
