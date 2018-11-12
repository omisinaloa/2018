//B. Verificando Boletos
#include <stdio.h>
int main(){
  int n, digito, mitad, i, izq=0, der=0;
  scanf("%d", &n);
  mitad = n / 2;
  for (i=0;i<n;i++){
    scanf("%d", &digito);
    if (i<mitad)
      izq+=digito;
    else
      der+=digito;
  }
  if (izq==der)
    printf("%d %d", izq, 1);
  else
    printf("%d %d", izq+der, 0);

  return 0;

}