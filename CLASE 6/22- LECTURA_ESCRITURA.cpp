#include<stdio.h>
#define n 3
#define m 4

void leeMat(float matrix[n][m]){
  int i, j;
  for(i=0; i<n; i++){
    for(j=0;j<m; j++){
      printf("Elemento[%d][%d]: ",i,j);
      scanf("%f", &matrix[i][j]);
    }

  }
}

void imprimeMat(float matrix[n][m]){
  for(int i=0; i<n; i++){
    for(int j=0;j<m; j++){
      printf(" %.3f ", matrix[i][j]);
    }
    printf("\n");
  }
}

int main(){
  float A[n][m], B[n][m];
  printf("\nLectura de la matriz A: \n");
  leeMat(A);
  printf("\nLectura de la matriz B: \n");
  leeMat(B);

  printf("\nMatriz A: \n");
  imprimeMat(A);

  printf("\nMatriz B: \n");
  imprimeMat(B);

  return 1;
}