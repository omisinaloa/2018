//C. Serie de Fibonacci
#include<stdio.h>

int main()
{
	int a, b, c, j, n1, n2;

	a = 0;
	b = 1;

	scanf("%d %d", &n1, &n2);

	j = 0;
	while (b < n2){
		c = a + b;
		a = b;
		b = c;

		if (a > n1)
			j = j + 1;
	}

	printf("%d\n", j);

return 0;
}
