//19.- Funciones y Procedimientos

#include<stdio.h>

/*FUNCION; SIEMPRE DEVUELVE ALGO*/

//Estos parametro se les conoce como parametros formales
float areaRectangulo(float base, float altura){

	
	float area;
	
	area=base*altura;
	return area;
}

/*PROCEDIMIENTO*/

void caratula(){
	printf("\n Universidad Autonoma de Mexico.");
	printf("\n Facultad de Estudios Superiores Acatlan.");
	printf("\n Licenciatura en Matematicas Aplicadas y Computacion");
	
}

main(){
	
	float b, a;
	char resp;
	caratula(); //Procedimiento

	do{
		
	printf("\nDame el valor de tu base: ");
	scanf("%f", &b);
	printf("\nDame el valor de tu altura: ");
	scanf("%f", &a);
	
	//Estos son los parametros reales	
	printf("\nEl area del rectangulo es: %.3f",areaRectangulo(b, a));
		
	printf("\nDeseas continuar? [s->Si] ");
	scanf("%s", &resp);
	
	}while(resp =='s'||resp =='S');
	
}
