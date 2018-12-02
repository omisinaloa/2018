//B. Corrigiendo y Calculando
#include <stdio.h>

#define MAX 200

int main(){
  int A[MAX][MAX];
  int B[MAX][MAX];
  int Ac[MAX][MAX];
  int Bc[MAX][MAX];


  int NA, NB,i,j, aux;
  char op;

  // Operación a realizar
  scanf("%c", &op);

  // Tamaños de la matriz A
  scanf("%d", &NA);
  // Datos de la matriz A
  for (i=0; i<NA; i++)
    for (j=0; j<NA; j++)
      scanf("%d", &A[i][j]);

  // Tamaño de la matriz B
  scanf("%d", &NB);
  // Datos de la matriz
  for (i=0; i<NB; i++)
    for (j=0; j<NB; j++)
      scanf("%d", &B[i][j]);

  if (NA==NB){
    // Gira derecha Matriz A
    for (i=0; i<NA; i++)
      for (j=0; j<NA; j++)
        Ac[i][j]=A[NA-j-1][i];

    // Gira izquierda Matriz B
    for (j=0; j<NB; j++)
      for (i=0; i <NB; i++)
        Bc[j][i]=B[i][NB-j-1];

    switch(op){

      case '+':
        for (i=0; i<NB; i++){
          for (j=0; j<NB; j++)
            printf ("%3d ", Ac[i][j]+Bc[i][j]);
          printf("\n");
        }
        break;

      case '-':
        for (i=0; i<NB; i++){
          for (j=0; j<NB; j++)
            printf ("%3d ", Ac[i][j]-Bc[i][j]);
          printf("\n");
        }
        break;

      default:
        printf("Operador %c desconocido\n", op);
    }
  }
else
  printf("No es posible NA = %d y NB = %d\n", NA, NB);

return 0;
}
