//Prueba SWITCH y SENTENCIA FOR

#include <stdio.h>


main(){
	
	int opcionUS, edad;
	char nombre(20);
	
	printf("\n1. Probar for. ");
	printf("\n2. Probar while. ");
	printf("\n3. Probar do-while. ");
	printf("\n4. Salir ");
	printf("\nElija una opcion [1,2,3,4]: ",opcionUS);
	scanf("%d", &opcionUS);
	
	
	switch(opcionUS){
		case 1:	
			int i;
			printf("\n1. Prueba de sentencia repetitiva for.");
				printf("\n\n a)FOR CON INCREMENTOS.");
			for (i=0; i<10; i++){
				printf("\n %d -", i);
			}
			
				printf("\n\n b)FOR CON DECREMENTOS.");
			for (i=10; i>0; i--){
				printf("\n %d -", i);
			}
			break;	
		
		case 2:
			printf("\n2.Prueba de sentencia repetitiva while");
			printf("\nEdad: ");
			scanf("%d", &edad);
			printf("\nNombre: ");
			scanf("%s", &nombre);
			i=0;
			while (i<10){
				printf("\n%d - %s", i, nombre);
				i++;
			}
			break;

		case 3:
			printf("\n3. Prueba de sentencia repetitiva do-while.");
			i=0;
			do{
				printf("\n Repeticion: - %d -", i);
				i++;
			}while (i<10);
			
			break;		
			
		case 4:
			printf("\nFin de ejecucion.");
			break;	
		
		default:
			printf("\nOpcion inexistente.");
	}
}
