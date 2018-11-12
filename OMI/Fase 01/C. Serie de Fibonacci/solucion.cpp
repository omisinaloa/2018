//C. Serie de Fibonacci
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, j, n1, n2;

	a = 0;
	b = 1;

	cin >> n1 >> n2;

	j = 0;
	while (b < n2){
		c = a + b;
		a = b;
		b = c;

		if (a > n1)
			j = j + 1;
	}
	cout << j;

return 0;
}
