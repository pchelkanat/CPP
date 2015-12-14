#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{const int N=100000;
int n,i,a[N];
cout<<"Vvedite kolichestvo n\n";
cin>>n;
cout<<"Vvedite chisla\n";
for (i=1;i<=n;i++)
	cin>>a[i];
for (i=n;i>1;i--)
	swap(a[i],a[i-1]);
for (i=1;i<=n;i++)
	cout<<a[i]<<" ";
system ("pause");
return 0;
}

