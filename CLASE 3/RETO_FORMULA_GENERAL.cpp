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
	
	
	//RAIZ 1
	raiz1= (-b+sqrt((b*b)-4*a*c))/2*a;

	//AQUI DECIMOS NO PODEMOS DIVIDIR ENTRE 0, YA QUE SE INDETERMINA
	if(2*a==0)
		printf("\n No se puede dividir por 0.");
	//AQUI DECIMOS QUE SI TENEMOS UN NUMERO NEGATIVO NUESTRA RAIZ ES IMAGINARIA
	else if(b*b-4*a*c< 0)
		printf("\nLa raiz es imaginaria.");
		
	else
		printf("\n La raiz 1 es: %f", raiz1);
		

	//RAIZ 2
	raiz2= (-b-sqrt((b*b)-4*a*c))/2*a;
	
	//AQUI DECIMOS NO PODEMOS DIVIDIR ENTRE 0, YA QUE SE INDETERMINA
	if(2*a==0)
		printf("\n No se puede dividir por 0.");
	//AQUI DECIMOS QUE SI TENEMOS UN NUMERO NEGATIVO NUESTRA RAIZ ES IMAGINARIA
	else if(b*b-4*a*c < 0)
		printf("\nLa raiz es imaginaria.");
		
	else		
		printf("\n La raiz 2 es: %f", raiz2);	

	return 0;
}

