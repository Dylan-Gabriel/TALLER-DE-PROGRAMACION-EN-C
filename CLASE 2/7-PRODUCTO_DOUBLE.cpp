//7.- PRODUCTOS DE DOUBLE
#include <stdio.h>

int main(){
	
	double x, y, z;
	
	printf("\nEscribe tu numero decimal: ");
	scanf("%lf", &x);
	printf("\nEscribe tu numero decimal: ");
	scanf("%lf", &y);
	z=x*y;
	printf("%.3lf * %.3lf= %.3lf",x, y, z);
	printf("\n\nNumero de bytes que ocupa un entero: %d", sizeof(int));
	printf("\nNumero de bytes que ocupa un flotante: %d", sizeof(float));
	printf("\nNumero de bytes que ocupa un double: %d", sizeof(double));
	return 0;
}
