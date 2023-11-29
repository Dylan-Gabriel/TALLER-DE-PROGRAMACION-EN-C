/*RETO Incluir:
	-Un procedimiento: Caratula- agregar Nombre y grupo
	-Una funcion: Calcular el area del rectangulo, area del circulo*/


#include<stdio.h>

//Estos parametro se les conoce como parametros formales
float areaRectangulo(float base, float altura){

	float area;
	area=base*altura;
	return area;
}

float areaCirculo(float radio, float pi=3.1416 ){//pi*r^2
	
	float areaC;
	areaC=pi*radio*radio;
	return areaC;
	
} 

/*PROCEDIMIENTO*/
void caratula(){
	printf("\n Universidad Autonoma de Mexico.");
	printf("\n Facultad de Estudios Superiores Acatlan.");
	printf("\n Licenciatura en Matematicas Aplicadas y Computacion");
	printf("\n Nombre: Albor Saucedo Dylan Gabriel");
	
}

main(){
	
	float b, a;
	float pi=3.1416;
	float radio;
	char resp;
	caratula(); //Procedimiento

	do{
	
    	//AREA RECTANGULO
		printf("\n\n\tAREA DEL RECTANGULO.");
		printf("\nDame el valor de tu base: ");
		scanf("%f", &b);
		printf("\nDame el valor de tu altura: ");
		scanf("%f", &a);
		
		//Estos son los parametros reales	
		printf("\nEl area del rectangulo es: %.3f",areaRectangulo(b, a));
			
		//AREA CIRCULO
		printf("\n\n\n\tAREA DEL CIRCULO.");
		printf("\nDame el valor de tu diametro: ");
		scanf("%f",&radio);
		printf("\nEl area del circulo es: %.4f", areaCirculo(radio,  pi=3.1416 ));
		
		printf("\nDeseas continuar? [s->Si] ");
		scanf("%s", &resp);
		
	}while(resp =='s'||resp =='S');
	
}


