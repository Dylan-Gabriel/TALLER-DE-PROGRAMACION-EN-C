/*RETO
	1.- COMSIDERAR UN MENU CON OPCIONES:
		1-SUMA DE DOS NUMEROS
		2-RESTA DE DOS NUMEROS
		3-PRODUCTO DE DOS NUMEROS
		4- DIVISION DE DOS NUMEROS
		5- SALIR/TERMINAR
		
	EL PROGRAMA DEBE TERMINAR HASTA QUE EL USUARIO LO DESEE.
	REPORTAR HORA DE ENTRADA Y HORA DE SALIDA, TIEMPO DE PERMANENCIA*/
	
	//Prueba SWITCH y SENTENCIA FOR

#include <stdio.h>
#include <time.h>

int main(){
	
	int opcionUS;
	time_t tiempoFinal, tiempoInicial;
	
	printf("\n1. SUMA. ");
	printf("\n2. RESTA. ");
	printf("\n3. PRODUCTO. ");
	printf("\n4. DIVISION.");
	printf("\n5. Salir ");
	printf("\nElija una opcion [1,2,3,4,5]: ",opcionUS);
	scanf("%d", &opcionUS);
	
	
	switch(opcionUS){
		case 1:	
			int a,b;
			
			printf("\nEscribe tu numero a: ");
			scanf("%d", &a);
			printf("\nEscribe tu numero b: ");
			scanf("%d", &b);
			
			printf("%d + %d = %d", a, b, a+b);	

			break;	
		
		case 2:
		
			
			break;

		case 3:
			
			break;		
			
		case 4:
		
			break;	
		
		case 5:
			printf("\nFin de ejecucion.");
			break;	
		
		default:
			printf("\nOpcion inexistente.");
	}
	
	tiempoFinal=time(NULL);
 	printf("\nHora de entrada: %s",asctime(localtime(&tiempoInicial)));
	printf("\nHora de salida: %s",asctime(localtime(&tiempoFinal)));
	printf("\nTiempo de permanencia: %.3f segundos",difftime(tiempoFinal,tiempoInicial));

	return 0;
}



/*#include <stdio.h>
#include<stdlib.h>
#include<time.h>


    printf("\n  || Operaciones con 2 Numeros  ||");

    printf("\n\n Opciones:  ");
    printf("\n1.- Suma de 2 numeros");
    printf("\n2.- Resta de 2 numeros");
    printf("\n3.- Multiplicacion de 2 numeros");
    printf("\n4.- Division de 2 numeros");
    printf("\n5.- Salir");

    printf("\n\n Elija una opcion: ");
    scanf("%d",&op);

    switch(op)
    {
      case 1:

        printf("\n\n Suma de 2 numeros");
        printf("\n\n Ingrese a: "); scanf("%f",&a);
        fflush(stdin);
        printf("\n Ingrese b: "); scanf("%f",&b);
        printf("\n\n La suma de %f + %f es: %.3f", a, b, a+b);

        break;

      case 2:

        printf("\n\n Resta de 2 numeros");
        printf("\n\n Ingrese a: "); scanf("%f",&a);
        fflush(stdin);
        printf("\n Ingrese b: "); scanf("%f",&b);
        printf("\n\n La resta de %f + %f es: %.3f", a, b, a-b);

        break;

      case 3:

        printf("\n\n Multiplicacion de 2 numeros");
        printf("\n\n Ingrese a: "); scanf("%f",&a);
        fflush(stdin);
        printf("\n Ingrese b: "); scanf("%f",&b);
        printf("\n\n La Multiplicacion de %f + %f es: %.3f", a, b, a*b);

        break;

      case 4:

        printf("\n\n Division de 2 numeros");
        printf("\n\n Ingrese a: "); scanf("%f",&a);
        fflush(stdin);
        printf("\n Ingrese b: "); scanf("%f",&b);
        printf("\n\n La Division de %f + %f es: %.3f", a, b, a/b);

        break;

      default:
        printf("\n\nOpcion no valida ");
    }

    fflush(stdin);

    printf("\n\nDesea probar con otra operacion? Si=1, No=0");
    scanf("%d",&respuesta);
    system("cls");
  }while (respuesta==1);

  tiempoFinal=time(NULL);

  printf("\n Hora de Entrada: %s", asctime(localtime(&tiempoInicial)));
  printf("\n\n Hora de Salida: %s", asctime(localtime(&tiempoFinal)));
  printf("\n\n Tiempo en sesion: %.3f segundos", difftime(tiempoFinal,tiempoInicial));


  return 0;
}*/
