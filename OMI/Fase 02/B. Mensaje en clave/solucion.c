//B. Mensaje en clave
#include<stdio.h>

#define ABC 26

int main()
{
	int clave[ABC];
	int N,m,c;
	int i,j,k;

	for (i = 0; i < ABC; i ++)
		scanf("%d", &clave[i]);

	scanf("%d", &N);
	for (i = 0; i < N; i ++)
	{
		scanf("%d", &m);
		for (j = 0; j < m; j ++)
		{
			scanf("%d", &c);
			for (k = 0; k < ABC; k ++)
				if (c == clave[k])
					printf("%c", k + 'a');
		}
		printf("\n");
	}


	return 0;
}
