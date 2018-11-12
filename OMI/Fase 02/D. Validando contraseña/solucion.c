//D. Validando contraseña
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
#define bool int
int main(){
char pwd[200];
bool correcto, enc=FALSE;
int i, k, N, min, may, dig,pun;


  scanf("%d", &N);


  for (i=0;i<N; i++){ 
  enc=FALSE;
   scanf("%s", pwd);
   k=0, min=0,may=0,dig=0, pun=0;
   while (pwd[k] && strlen(pwd)<=32 && strlen(pwd)>=6 ){
      if (pwd[k]>='a' && pwd[k] <='z') min++;
      else if (pwd[k]>='A' &&pwd[k]<='Z') may++;
      else if (pwd[k]>='0' && pwd[k]<='9') dig++;
      else if (ispunct(pwd[k])) pun++;

     k++;
  }

    correcto = min && may && dig && !pun;

     if (correcto)
         printf("%s: Valido\n", pwd);
     else
        printf("%s: Invalido\n", pwd);
 }

return 0;

}
