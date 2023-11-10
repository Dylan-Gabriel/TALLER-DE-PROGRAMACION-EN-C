/*RETO  CALCULAR LAS RAICES POR FORMULA GENERAL
	
	(-b(+-)sqrt(b*b)-4*a*c))/2 *a */

#include<stdio.h>
#include<math.h>

int main(){
	
	int a, b, c;
	float raiz1, raiz2;
	
	printf("\nDar el valor de a: ");
	scanf("%d", &a);
	printf("\nDar el valor de b: ");
	scanf("%d", &b);
	printf("\nDar el valor de c: ");
	scanf("%d", &c);
	 
	raiz1= (-b+sqrt((b*b)-4*a*c))/2*a;
	
	printf("\n La raiz 1 es: %f", raiz1);
	
	raiz2= (-b-sqrt((b*b)-4*a*c))/2*a;
	printf("\n La raiz 2 es: %f", raiz2);	
	
	return 0;
}

