//11.-  Evaluacion de expresiones

#include<stdio.h>

main(){
	
	int a, b, d, resultado;
	
	printf("\nDar el valor de a: ");
	scanf("%d", &a);
	printf("\nDar el valor b: ");
	scanf("%d", &b);
	printf("\nDar el valor de d: ");
	scanf("\n%d", &d);
	resultado= (a + b) * d && d;
	printf("\n (%d + %d) * %d && %d = %d",a, b, d, d, resultado);
	
	
}
