//B. Mensaje en clave
#include<bits/stdc++.h>
using namespace std;
#define ABC 26

int main()
{
	int clave[ABC];
	int N,m,c;
	int i,j,k;
	char car;

	for (i = 0; i < ABC; i ++)
		cin >> clave[i];

	cin >> N;
	for (i=0; i<N; i++)
	{
		cin >> m;
		for (j=0;j<m;j++)
		{
			cin >> c;
			for (k = 0; k < ABC; k ++)
				if (c == clave[k]){
					car = k + 'a';
					cout <<  car;
				}
		}
		cout << "\n";
	}


	return 0;
}
