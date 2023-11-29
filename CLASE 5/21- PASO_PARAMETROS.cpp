#include<stdio.h>

//1.Paso de parámetros por valor
void pasoPorValor(int x){
	printf("\nDar un valor: ");
	scanf("%d", &x);
}
//2.Por referencia es en el lenguaje C++
void pasoPorReferencia(int &x){
	printf("\nDar un valor: ");
	scanf("%d", &x);
}
//3.Por dirección (usar apuntadores)
void pasoPorDireccion(int *a){
	printf("\nDar un valor: ");
	scanf("%d", &(*a));
}
int main(){
	int varx=5;
	
	printf("\n 1.Paso de parametros por valor");
	printf("\n varx= %d", varx);
	pasoPorValor(varx);
	printf("\n varx= %d", varx);
	
	printf("\n 2.Paso de parametros por referencia");
	pasoPorReferencia(varx);
	printf("\n varx= %d", varx);
	
	printf("\n 3.Paso de direccion");
	pasoPorDireccion(&varx);
	printf("\n varx= %d", varx);
	
}



/*/21.- PASO DE PARAMETROS

#include<stdio.h>

//1.- PASO DE PARAMETROS POR VALOR

void pasoPorValor(int x){
	
	printf("\n Dar un valor: ");
	scanf("%d", &x);
}

//2.- PASO DE PARAMETROS POR REFERENCIA ES EN EL LENGUAJE C++
void pasoPorReferencia(int &x){
	printf("\n Dar un valor: ");
	scanf("%d", &x);
}

//3.- PASO DE PARAMETROS POR DIRECCION (USAR PUNTEROS
void pasoPorDireccion(int *a){
	printf("\n Dar un valor: ");
	scanf("%d", &(*a));

int main(){
	
	int varx=5;

	printf("\n\t\t1.- PASO DE PARAMETROS POR VALOR");
	printf("\n varx= %d", varx);
	pasoPorValor(varx);
	printf("\n varx= %d", varx);

	printf("\n\t\t2.- PASO DE PARAMETROS POR VALOR");
	pasoPorReferencia(varx);
	printf("\n varx= %d", varx);

	printf("\n\t\t3.- PASO DE PARAMETROS POR DIRECCION");
	pasoPorDireccion(&varx);
	printf("\n varx= %d", varx);

}
*/
