// C. Suma simetrica
#include<bits/stdc++.h>
using namespace std;

int main() {
	int m;
	int i, j;
	int suma_superior;
	int suma_inferior;
	int suma_diagonal;

	int valor;

	suma_superior = 0;
	suma_inferior = 0;
	suma_diagonal = 0;

	cin >> m;
	for (i = 0; i < m; i ++)
		for (j = 0; j < m; j ++)
		{
			cin >> valor;
			if (j > i)
				suma_superior = suma_superior + valor;
			if (j < i)
				suma_inferior = suma_inferior + valor;
			if (j == i)
				suma_diagonal = suma_diagonal + valor;
		}

	if (suma_superior == suma_inferior)
		cout << "Si " << suma_superior << "\n";
	else
		cout << "No " << suma_diagonal << "\n";

	return 0;
}
