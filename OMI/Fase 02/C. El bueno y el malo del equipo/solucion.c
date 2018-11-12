//C. El bueno y el malo del equipo
#include <stdio.h>

	int main(){
	int N,nums[23], H, B1, B2, B3, HR, BB, AB,TB;
	int cont, i, mayor=0, menor=0;
	float RC[23],RCT=0, RCP;

	scanf("%d",&N);

	for (i=0;i<N;i++){
		scanf("%d%d%d%d%d%d%d",&nums[i],&B1,&B2,&B3,&HR,&BB,&TB);

   AB=B1+2*B2+3*B3+4*HR;
   H=B1+B2+B3+HR;
   RC[i] = (float)((H + BB) * AB) / (AB + TB);
   RCT+=RC[i];
	}

	RCP=RCT/N;
	for (i=0;i<N;i++){

   if(RC[i]>RCP)
        cont++;

   if(RC[i]>RC[mayor])
        mayor=i;

   if(RC[i]<RC[menor])
        menor=i;

}

printf("Mejor jugador: %d con un RC de %.3f\n", nums[mayor],RC[mayor]);
printf("Peor jugador: %d con un RC de %.3f\n", nums[menor],RC[menor]);
printf("Jugadores a recontratar: %d\n", cont);

return 0;
}
