#include<stdio.h>
#define n 3
#define m 3

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

void sumaMat(float matrixA[n][m], float matrixB[n][m], float matrixC[n][m]){
  for(int i=0; i<n; i++){
    for(int j=0;j<m; j++){
      matrixC[i][j]= matrixA[i][j] + matrixB[i][j];
    }
  }
}

//Matriz por un escalar
void mulEMat(float matrix[n][m], float matrixC[n][m]){
  int escalar;
  printf("\nCon que escalar quieres multiplicar la matriz: ");
  scanf("%d", &escalar);

  for(int i=0; i<n; i++){
    for(int j=0;j<m; j++){
      matrixC[i][j]= matrix[i][j] * escalar;

    }
  }
}


void restMat(float matrixA[n][m], float matrixB[n][m], float matrixC[n][m]){
  for(int i=0; i<n; i++){
    for(int j=0;j<m; j++){
      matrixC[i][j]= matrixA[i][j] - matrixB[i][j];
    }
  }
}

//Transpuesta
void transpuestaMat(float matrix[n][m], float matrixC[n][m]){
  for(int i=0; i<n; i++){
    for(int j=0;j<m; j++){
      matrixC[i][j]= matrix[j][i];
    }
  }
}

int main(){
  float A[n][m], B[n][m], C[n][m];
  int opci, a;
  printf("\nLectura de la matriz A: \n");
  leeMat(A);
  printf("\nLectura de la matriz B: \n");
  leeMat(B);

  do{
    printf("\nAritmetica de matrices\n");
    printf("\n1.Sumar");
    printf("\n2.Restar");
    printf("\n3.Multiplicar por un escalar");
    printf("\n4.Transpuesta");
    printf("\n5.Multiplicar matrices");
    printf("\n6.Salir");
    printf("\nElija opcion [1,2,...,6]");
    scanf("%d", &opci);
    switch(opci){
      case 1:
        printf("\nMatriz A: \n");
        imprimeMat(A);
        printf("\nMatriz B: \n");
        imprimeMat(B);
        sumaMat(A, B, C);
        printf("\nMatriz A+B: \n");
        imprimeMat(C);
        break;
      case 2:
        printf("\nMatriz A: \n");
        imprimeMat(A);
        printf("\nMatriz B: \n");
        imprimeMat(B);
        restMat(A, B, C);
          printf("\nMatriz A-B: \n");
        imprimeMat(C);
        break;	
      case 3:
        printf("\nMatriz A: \n");
        imprimeMat(A);
        mulEMat(A, C);
        printf("\nMatriz A*Escalar: \n");
        imprimeMat(C);

        printf("\nMatriz B: \n");
        imprimeMat(B);
        mulEMat(B, C);
        printf("\nMatriz B*Escalar: \n");
        imprimeMat(C);
      case 4:
        printf("\nMatriz A: \n");
        imprimeMat(A);
        printf("\nTranspuesta A: \n");
        transpuestaMat(A, C);
        imprimeMat(C);

        printf("\nMatriz B: \n");
        imprimeMat(B);
        printf("\nTranspuesta B: \n");
        transpuestaMat(B, C);
        imprimeMat(C);
      case 5:
        //	Producto de matrices
        break;
      default:
        printf("\nOpcion incorrecta.\n Vuelva a elegir");
      
    }


  }while(opci!= 6);

  return 1;
}