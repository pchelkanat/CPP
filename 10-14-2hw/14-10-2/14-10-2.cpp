#include "stdafx.h"
#include <iostream>
#include "cmath"

using namespace std;

int main()
{const int N=100000;
	int i, k=1,n,a[N];
	cout<<"Vvedite n\n";
	cin>>n;
	a[1]=1;
	a[2]=1;
	for(i=3; i<=n; i++)
		a[i]=a[i-2]+a[i-1];
	cout<<"a[n]="<<a[n];
system("pause");
	return 0;
}
