//LECTURA DE DATOS
#include<stdio.h>

int main(){
	int x;
	float y;
	char z;
	double w;
	
	printf("\nDar un numero entero: ");
	scanf("%i", &x);
	printf("\nEl dato leido es: %i", x);
	
	printf("\nDar un numero de punto flotante precision simple: ");
	scanf("%f", &y);
	printf("\nEl punto flotante leido es: %f", y);
	
	printf("\nDar un carater: ");
	scanf("%s", &z);
	printf("\nEl caracter leido es: %c", z);
	
	printf("\nDar un numero de punto flotante de doble precisión: ");
	scanf("%lf", &w);
	printf("\nEl double precision leido es: %lf", w);
	
	return 1;
}
