// B. Corrigiendo y Calculando
#include<bits/stdc++.h>
using namespace std;

#define MAX 200

int main(){
  int A[MAX][MAX];
  int B[MAX][MAX];
  int Ac[MAX][MAX];
  int Bc[MAX][MAX];


  int NA, NB,i,j, aux;
  char op;

  // Operación a realizar
  cin >> op;

  // Tamaños de la matriz A
  cin >> NA;
  // Datos de la matriz A
  for (i=0; i<NA; i++)
    for (j=0; j<NA; j++)
      cin >> A[i][j];

  // Tamaño de la matriz B
  cin >> NB;
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
        cout << "Operador "<< op << " desconocido"<< "\n";
    }
  }
else
  cout <<"No es posible NA = "<< NA << " y NB = " << NB << "\n";

return 0;
}
