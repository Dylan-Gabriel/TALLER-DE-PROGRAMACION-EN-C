//6.- RESTA DE FLOTANTES
#include <stdio.h>


int main(){
	
	float x, y, z;
	
	printf("\nEscribe tu numero decimal: ");
	scanf("%f", &x);
	printf("\nEscribe tu numero decimal: ");
	scanf("%f", &y);
	z=x-y;
	printf("%.2f - %.2f= %.2f",x, y, z);

	return 0;
}
