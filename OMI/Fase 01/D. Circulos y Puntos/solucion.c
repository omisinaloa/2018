//D. Circulos y Puntos
#include<stdio.h>
int main()
{
	int N, x, y, i, d1, d2, e;

	scanf("%d", &N);

	for(i = 0; i<N; i ++){

		scanf("%d %d", &x, &y);

		d1 = x-5;
		d2 = y+3;
		e = (d1*d1) + (d2*d2);

		if ( e <= 100 )
			printf("Dentro\n");
		else
			printf("Fuera\n");
	}

	return 0;
}
