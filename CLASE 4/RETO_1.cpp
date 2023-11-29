#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//función suma
int suma(int a, int b){
  int c;
  c=a+b;
  return c;
}
int resta(int a, int b){
  int c;
  c=a-b;
  return c;
}
int multiplica(int a, int b){
  int c;
  c=a*b;
  return c;
}
int division(int a, int b){
  int c;
  c=a/b;
  return c;
}

main(){
  time_t tiempoInic, tiempoFinal;
  char resp;
  int num1, num2, opcionUsuario;

  tiempoInic=time(NULL); 
  do{

    printf("\n1.Sumar");
    printf("\n2.Restar");
    printf("\n3.Multiplicar");
    printf("\n4.Division");
    printf("\n5.Salir");
    printf("\nElija opcion [1,2,3,4]: ");
    scanf("%d", &opcionUsuario);

    switch(opcionUsuario){
    case 1: 
      printf("\n1.Suma");
      printf("\n Dar un numero: ");
      scanf("%d",&num1);
      printf("\n Dar otro numero: ");
      scanf("%d",&num2);
      printf("\n%d + %d = %d", num1, num2, suma(num1,num2));
      break;
    case 2:
      printf("\n2.Resta");
      printf("\n Dar un numero: ");
      scanf("%d",&num1);
      printf("\n Dar otro numero: ");
      scanf("%d",&num2);
      printf("\n%d - %d = %d", num1, num2, resta(num1,num2));
      break;
    case 3:
      printf("\n3.Multiplicacion");
      printf("\n Dar un numero: ");
      scanf("%d",&num1);
      printf("\n Dar otro numero: ");
      scanf("%d",&num2);
      printf("\n%d * %d = %d", num1, num2, multiplica(num1,num2));
      break;
    case 4:
      printf("\n4.División");
      printf("\n Dar un numero: ");
      scanf("%d",&num1);
      printf("\n Dar otro numero: ");
      scanf("%d",&num2);
      printf("\n%d / %d = %d", num1, num2, division(num1,num2));
      break;
    case 5:
      printf("\nFin de ejecucion.");
      break;
    default:
      printf("\nOpcion inexistente.");
      }

  }while (opcionUsuario != 5);

  tiempoFinal = time(NULL);
  printf("\nHora de de entrada: %s", asctime(localtime(&tiempoInic)));
  printf("\nHora de salida: %s", asctime(localtime(&tiempoFinal)));
  printf("\nTiempo de permanencia %4.2f segundos", difftime(tiempoFinal,tiempoInic));
}
