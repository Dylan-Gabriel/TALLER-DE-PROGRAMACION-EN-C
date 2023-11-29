/*Reto:

	-Programar las funciones para calcular el área de triangulo y de la elipse. 
	-Agregar portada, 
	-El programa debe terminar hasta que el usuario lo desee. */
	

#include<stdio.h>

float areaTriangulo(float base, float altura){

	float areaT;
	areaT=((base*altura)/2);
	return areaT;
}

float areaElipse(float radioA, float radioB, float pi=3.1416){
	
	float areaE;
	areaE=pi*radioA*radioB;
	return areaE;
	
} 


void caratula(){
	printf("\n Universidad Autonoma de Mexico.");
	printf("\n Facultad de Estudios Superiores Acatlan.");
	printf("\n Licenciatura en Matematicas Aplicadas y Computacion");
	printf("\n Nombre: Albor Saucedo Dylan Gabriel");
	
}

main(){
	
	float b, a;
	float pi=3.1416;
	float radioA, radioB;
	char resp;
	caratula(); //Procedimiento

	do{
	
    	//AREA RECTANGULO
		printf("\n\n\tAREA DEL TRIANGULO.");
		printf("\nDame el valor de tu base: ");
		scanf("%f", &b);
		printf("\nDame el valor de tu altura: ");
		scanf("%f", &a);
		//Estos son los parametros reales	
		printf("\nEl area del triangulo es: %.3f",areaTriangulo(b, a));
			
		//AREA CIRCULO
		printf("\n\n\n\tAREA DE LA ELIPSE.");
		printf("\nDame el valor de tu Radio A(radio primario): ");
		scanf("%f",&radioA);
		printf("\nDame el valor de tu Radio A(radio secundario): ");
		scanf("%f",&radioB);
		printf("\nEl area de la elipse es: %.4f", areaElipse(radioA, radioB,  pi=3.1416 ));
		
		printf("\nDeseas continuar? [s->Si] ");
		scanf("%s", &resp);
		
	}while(resp =='s'||resp =='S');
	
}


