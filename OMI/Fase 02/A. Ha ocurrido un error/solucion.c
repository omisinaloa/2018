//A. Ha ocurrido un error
#include<stdio.h>

#define M 1000

int main()
{
	int n,m,i,j;
	int suma_par, suma_impar, diferencia;
	int mensaje[M];

	scanf("%d", &n);
	for (i=0; i<n; i++){
		scanf("%d", &m);
		m=m+3;
		suma_par=0;
		suma_impar=0;

		scanf("%d", &mensaje[0]);

		for (j=1; j<m-1; j++){

			scanf("%d", &mensaje[j]);

			if ((j*2) != (m-1)){

				if ((mensaje[j] % 2) == 0)
					suma_par = suma_par + mensaje[j];
				else
					suma_impar = suma_impar + mensaje[j];

			}
			else
				diferencia = mensaje[j];
			}
			scanf("%d", &mensaje[m-1]);
			if ((suma_par != mensaje[0]) || (suma_impar != mensaje[m -1]) || (diferencia != (suma_par - suma_impar)))
				printf("Ha ocurrido un error\n");
			else
			{
				for (j=1; j<m-2; j++)
				{
					if ((j*2) == (m-1))
						j++;

					printf("%d ", mensaje[j]);
				}
				printf("%d\n", mensaje[m-2]);
			}
		}
	return 0;
}
