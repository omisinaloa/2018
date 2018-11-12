// A. Ajustando el Clima
#include <stdio.h>
int main(){
	float a, b, c, d;
	int i,N;

	scanf("%d",&N);
	scanf("%f%f", &a,&b);
	printf("%.2f ",a);

	for (i=0;i<N-2;i++){
		scanf("%f",&c);
    d=(a+b+c)/3;
    printf("%.2f ",d);
    a=b;
    b=c;
	}

  printf("%.2f",c);

	return 0;
}
