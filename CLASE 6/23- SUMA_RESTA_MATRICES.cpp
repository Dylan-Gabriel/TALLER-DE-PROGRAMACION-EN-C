#include <stdio.h>

#define n 3
#define m 3

void leeMat(float matrix[n][m]) //Parametro Real
{
  int i=0,j=0;

  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      printf(" \n Elemento [%d][%d]: ",i+1,j+1);
      scanf("%f",&matrix[i][j]);
    }
  }
}

void sumaMat(float c[n][m], float matrix[n][m], float matriz[n][m])
{
  int i,j;

  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      c[i][j]=matrix[i][j]+matriz[i][j];
    }
  }

}

void restaMat(float c[n][m], float matrix[n][m], float matriz[n][m])
{
  int i,j;

  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      c[i][j]=matrix[i][j]-matriz[i][j];
    }
  }

}

void multMat(float E[n][m], float e, float matrix[n][m])
{
  int i,j;
    for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
      {
        E[i][j]=e*matrix[i][j];
      }
    }
}
void imprimeMat(float matrix[n][m])
{
  int i=0,j=0;

  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
      printf("  [%g] ", matrix[i][j]);

    }
    printf("\n");
  }
}

int main()
{
  int op,opcion;
  do
  {
    
    float E[n][m],D[n][m],C[n][m], A[n][m], B[n][m];
    float a=0;

    printf("\n\n  ||  Operaciones con Matrices  ||");
    printf("\n\n 1.- Suma de Matrices");
    printf("\n\n 2.- Resta de Matrices");
    printf("\n\n 3.- Multiplicar por un Escalar");
    printf("\n\n 4.- Matriz Transpuesta");

    printf("\n\n Elija una opcion");
    scanf("%d",&opcion);

    switch(opcion)
      case 1:
        printf("\n\n  ||  Suma de Matrices  ||");
        leeMat(A);
        leeMat(B);
        sumaMat(C,A,B);
        imprimeMat(C);
        break;

      case 2:
        printf("\n\n  || Resta de Matrices");
        leeMat(A);
        leeMat(B);
        restaMat(D,A,B);
        imprimeMat(D);
        break;
      case 3:
        printf("\n\n  || Multiplicar por un Escalar");
        printf("\n\n  Ingrese el escalar: ");
        scanf("%f",&a);
        leeMat(A);
        multMat(E,a,A);
        imprimeMat(E);
        break;
      

      
    printf("Desea hacer otra operacion? Si=1, No=0");
    scanf("%d",&op);
  
  }while(op==1);
    
  return 0;
}
