#include "stdafx.h"
#include <iostream>
#include "cmath"

using namespace std;

int main()
{const int N=100000;
	int i, k,n,a[N];
	cout<<"Vvedite n\n";
	cin>>n;
	a[1]=1;
	a[2]=1;
	for(i=3; ;i++){
		a[i]=a[i-2]+a[i-1];
		if (n<=a[i]) break;}
	if (n==1) a[i]=1;
	cout<<n<<" ~ "<<a[i];
system("pause");
	return 0;
}