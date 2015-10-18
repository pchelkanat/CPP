#include "stdafx.h"
#include <iostream>
#include "cmath"

using namespace std;

int main()
{const int N=100000;
	int i,n,a[N];
	cout<<"Vvedite n\n";
	cin>>n;
	cout<<"Vvedite chisla\n";
	for (i=1;i<=n;i++)
		cin>>a[i];
	for(i=2;i<n;i++){
		if ((a[i]>a[i-1])&&(a[i]>a[i+1])){
			cout<<"a["<<i<<"]="<<a[i]<<"\n";}
	}
system("pause");
	return 0;
}
