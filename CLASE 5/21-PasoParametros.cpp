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
