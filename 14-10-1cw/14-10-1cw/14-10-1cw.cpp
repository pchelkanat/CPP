#include "stdafx.h"
#include <iostream>
#include "cmath"

using namespace std;


int main()
{const int N=1000;
	int i, k=1,n,a[N];
	cout<<"Vvedite n\n";
	cin>>n;
	cout<<"Vvedite chisla\n";
	for(i=1; i<=n; i++)
		cin>>a[i];
	for(i=2; i<n; i++){
		if ((a[i-1]-a[i])==(a[i]-a[i+1]))
			k=k*1;
		else {
			k=k*0;
			break;
		}
	}
	if (k==1) cout<<"YES ";
	else cout<<"NO ";
system("pause");
	return 0;
}
