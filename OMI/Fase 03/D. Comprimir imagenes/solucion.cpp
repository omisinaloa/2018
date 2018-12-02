// D. Comprimir imagenes
#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 1024

int imagen[MAX_SIZE][MAX_SIZE];
int buffer[MAX_SIZE];

int transforma(int n, int m)
{
    int i, j;
    /* horizontal */
    for (i=0; i <n; i ++)
    {
        for(j=0; j<m/2; j++)
        {
            buffer[j]=(imagen[i][j*2]+imagen[i][(j*2)+1])/2;
            buffer[j+(m/2)]=imagen[i][j*2]-imagen[i][(j*2)+1];
        }
        for(j=0; j<m; j++)
            imagen[i][j] = buffer[j];
    }

    /* vertical */
    for (j=0; j < m; j ++)
    {
        for(i=0; i<n/2; i++)
        {
            buffer[i]=(imagen[i*2][j]+imagen[(i*2)+1][j])/2;
            buffer[i+(n/2)]=imagen[i*2][j]-imagen[(i*2)+1][j];
        }
        for(i=0; i<n; i++)
            imagen[i][j] = buffer[i];
    }
    return 0;
}

int main()
{
	int n, m, nivel;
	int i, j, k;

	cin >> nivel;
	cin >> n;
	cin >> m;

	for (i = 0; i < n; i ++)
		for (j = 0; j < m; j ++)
			cin >> imagen[i][j];

    i = n;
    j = m;
    for (k = 0; k < nivel; k ++)
    {
        transforma(i, j);
        i = i / 2;
        j = j / 2;
    }
/*
#ifdef DEBUG
	cout << P2<< "\n";
	cout << m << n << "\n";
	cout << "255\n";
    for (i = 0; i < n; i ++)
        for (j = 0; j < m; j ++)
		if (imagen[i][j] >= 0)
           		 cout << imagen[i][j];
		else
			cout << -imagen[i][j]) << " ";

    cout << "\n";
#else */
    for (i = 0; i < n; i ++)
    {
        for (j = 0; j < m-1; j ++)
            cout << imagen[i][j]<< " ";
        cout <<  imagen[i][m-1] << "\n";
    }
//#endif

    return 0;
}
