#include <stdio.h>


int main(){
	
	float x, y, z;
	
	printf("\nEscribe tu numero decimal: ");
	scantf("%f", &x);
	printf("\nEscribe tu numero decimal: ");
	scantf("%f", &y);
	z=x-y;
	printf("%.2f - %.2f= %f",x, y, z);

	return 0;
}
