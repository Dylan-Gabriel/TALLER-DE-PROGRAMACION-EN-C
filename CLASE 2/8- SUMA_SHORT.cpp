//8.- SUMA SHORT
#include <stdio.h>

main(){
	
	short int x, y, z;
	
	printf("\n\t\tSUMA");
	printf("\n\nDar un valor entero x: ");
	scanf("%d", &x);
	printf("\nDar un valor entero y: ");
	scanf("%d", &y);
	z=x+y;
	printf("\n%d + %d= %d",x, y, z);
	printf("\nNumero de bytes que ocupa un entero: %d", sizeof(x));
	return 0;
}
