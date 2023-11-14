//tiempo del sistema
#include<stdio.h>
#include<time.h>

int main(){
	char resp;
	time_t tiempoFinal, tiempoInicial;
	
	tiempoInicial= time(NULL);
	do{
		
		printf("\nDeseas continuar? [s->Si]: ");
		fflush(stdin);
		scanf("%c", &resp);
		
	}while(resp== 's' || resp=='S');
	tiempoFinal=time(NULL);
	
	printf("\nHora de entrada: %s",asctime(localtime(&tiempoInicial)));
	printf("\nHora de salida: %s",asctime(localtime(&tiempoFinal)));
	printf("\nTiempo de permanencia: %.3f segundos",difftime(tiempoFinal,tiempoInicial));

	return 0;
}
