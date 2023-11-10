//12.- Evaluacion de expresiones (a>=!b)*(d!=(!c))&&d>b

#include <stdio.h>

main(){
	
	int a, b, c, d, resultado;	

	printf("\nDar el valor de a: ");
	scanf("%d", &a);
	printf("\nDar el valor de b: ");
	scanf("%d", &b);
	printf("\nDar el valor de c: ");
	scanf("%d", &c);
	printf("\nDar el valor de d: ");
	scanf("%d", &d);	
	
	resultado= (a>=!b)*(d!=(!c))&&d>b;
	
	printf("\n(%d>=!%d)*(%d!=(!%d))&&%d>%d) = %d", a, b, d, c, d, b, resultado);
	
	
}
