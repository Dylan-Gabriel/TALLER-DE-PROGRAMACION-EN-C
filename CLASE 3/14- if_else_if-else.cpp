//14.- if else if-else

#include<stdio.h>

main(){
	
	int x, y;
		
	printf("\nDar el valor de x: ");
	scanf("%d", &x);
	printf("\nDar el valor de y: ");
	scanf("%d", &y);
	
	if(x > y)
		printf("\n %d es mayor que %d",x, y);
	
	else if (x < y)		
		printf("\n %d es menor que %d", x, y);
	
	else
		printf("\n %d es igual a %d",x, y);
	
}
