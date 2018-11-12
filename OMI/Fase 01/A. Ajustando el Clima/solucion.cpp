// A. Ajustando el Clima
#include<bits/stdc++.h>
using namespace std;
int main(){
	float a, b, c, d;
	int i,N;

	cin >> N;
	cin >> a >> b;
	cout << a << fixed << setprecision(2) << " " ;

	for (i=0;i<N-2;i++){
		cin >> c;
    d=(a+b+c)/3;
    cout << d << std::fixed << std::setprecision(2) << " ";
    a=b;
    b=c;
	}
    cout << c << std::fixed << std::setprecision(2);


	return 0;
}
