//D. Circulos y Puntos
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N, x, y, i, d1, d2, e;

	cin >> N;

	for(i = 0; i<N; i ++){

		cin >> x >> y;

		d1 = x-5;
		d2 = y+3;
		e = (d1*d1) + (d2*d2);

		if ( e <= 100 )
			cout << "Dentro\n";
		else
			cout << "Fuera\n";
	}

	return 0;
}
