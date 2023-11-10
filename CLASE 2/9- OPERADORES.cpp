//9.- PROGRAMA PRUEBA DE OPERADORES ARITMETICOS
#include <stdio.h>

main(){
	int x, y;
	printf("\nEscribe tu numero enteros: ");
	scanf("%d", &x);
	printf("\nEscribe tu numero enteros: ");
	scanf("%d", &y);
	printf("\n\nOPERADORES ARITMETICOS");
	printf("\n%d + %d = %d", x, y, x+y);	//suma
	printf("\n%d - %d = %d", x, y, x-y);	//resta
	printf("\n%d * %d = %d", x, y, x*y);	//producto
	printf("\n%d / %d = %d", x, y, x/y);	//division
	printf("\n%d %% %d = %d", x, y, x%y); 	//modulo o cociente| modulo devuelve el resto del  cocieente

	printf("\n\nOPERADORES RELACIONALES\n");
	printf("\n%d == %d resultado: %d", x, y, x==y);	//igual a
	printf("\n%d < %d resultado: %d", x, y, x<y);	//menor que
	printf("\n%d <= %d resultado: %d", x, y, x<=y);	//menor o igual que
	printf("\n%d > %d resultado: %d", x, y, x>y);	//mayor que 
	printf("\n%d >= %d resultado: %d", x, y, x>=y);	//mayor o igual que
	printf("\n%d != %d resultado: %d", x, y, x!=y);	//diferente a
	
	printf("\n\nOPERADORES LOGICOS\n");
	printf("\n%d && %d resultado: %d", x, y, x&&y);	//Y (and)
	printf("\n%d || %d resultado: %d", x, y, x||y);	//o (or)
	printf("\n!%d resultado: %d", x, !x);	//negacion logica (not)
	printf("\n!%d resultado: %d", y, !y);	//negacion logica (not)
	
	//y+=z equivale a y=y+z
	printf("\n\n%d += %d resultado %d",x, y, x+=y);	//variable = variable + expresión
	printf("\nAhora el valor de x es %d",x);
	printf("\n%d -= %d resultado %d",x, y, x-=y);	//variable = variable - expresión
	printf("\n%d *= %d resultado %d",x, y, x*=y);	//variable = variable * expresión
	printf("\n%d /= %d resultado %d",x, y, x/=y);	//variable = variable / expresión
	printf("\n%d %%= %d resultado %d",x, y, x%=y);	//variable = variable % expresión
}
