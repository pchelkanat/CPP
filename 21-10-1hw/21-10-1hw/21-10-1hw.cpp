// 21-10-1cw.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{const int N=100000;
int n,i,k,j,a[N];
cout<<"Vvedite kolichestvo n i nomer k\n";
cin>>n>>k;
cout<<"Vvedite chisla\n";
for (i=1;i<=n;i++)
	cin>>a[i];
for (i=1,j=k+1;i<k+1,j<=n; i++, j++)
		swap(a[i],a[j]);
for (i=1;i<=n;i++)
	cout<<a[i]<<" ";
system ("pause");
return 0;
}

