//C. El bueno y el malo del equipo
#include<bits/stdc++.h>
using namespace std;

	int main(){
	int N,nums[23], H, B1, B2, B3, HR, BB, AB,TB;
	int cont=0, i, mayor=0, menor=0;
	float RC[23],RCT=0, RCP;

	scanf("%d",&N);

	for (i=0;i<N;i++){
		cin >> nums[i] >> B1 >> B2 >> B3 >> HR >> BB >> TB;

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

cout << "Mejor jugador: "<< nums[mayor] << " con un RC de " << fixed << setprecision(3) << RC[mayor] << "\n";
cout << "Peor jugador: " << nums[menor] << " con un RC de " << fixed << setprecision(3) << RC[menor] << "\n";
cout << "Jugadores a recontratar: "<< cont <<"\n";

return 0;
}
