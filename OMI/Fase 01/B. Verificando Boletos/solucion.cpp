//B. Verificando Boletos
#include<bits/stdc++.h>
using namespace std;
#define valido 1
#define invalido 0

int main(){
  int N, digito, mitad, i, izq=0, der=0;

  cin >> N;
  mitad = N / 2;
  for (i=0;i<N;i++){

    cin >> digito;

    if (i<mitad)
      izq+=digito;
    else
      der+=digito;
  }

  if (izq==der)
    cout << izq << " " << valido;
  else
    cout << izq+der << " " << invalido;

  return 0;

}