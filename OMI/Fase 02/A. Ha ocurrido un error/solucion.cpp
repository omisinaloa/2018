//A. Ha ocurrido un error
#include<bits/stdc++.h>
using namespace std;

#define M 1000

int main()
{
	int n,m,i,j;
	int suma_par, suma_impar, diferencia;
	int mensaje[M];

	cin >> n;
	for (i=0; i<n; i++){
		cin >> m;
		m=m+3;
		suma_par=0;
		suma_impar=0;

		cin >> mensaje[0];

		for (j=1; j<m-1; j++){

			cin >> mensaje[j];

			if ((j*2) != (m-1)){

				if ((mensaje[j] % 2) == 0)
					suma_par = suma_par + mensaje[j];
				else
					suma_impar = suma_impar + mensaje[j];

			}
			else
				diferencia = mensaje[j];
			}
			cin >> mensaje[m-1];

			if ((suma_par != mensaje[0]) || (suma_impar != mensaje[m-1]) || (diferencia != (suma_par - suma_impar)))
				cout << "Ha ocurrido un error\n";
			else
			{
				for (j=1; j<m-2; j++)
				{
					if ((j*2) == (m-1))
						j++;

					cout << mensaje[j] << " ";
				}
				cout << mensaje[m-2] << "\n";
			}
		}
	return 0;
}
