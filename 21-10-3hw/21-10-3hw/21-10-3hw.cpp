#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{const int N=1000;
int n,i,k,j,c[N],b[N],a[N];
cout<<"Vvedite kolichestvo n\n";
cin>>n;
cout<<"Vvedite chisla\n";
for (i=0;i<n;i++)
	cin>>a[i];
for (i=0,j=0,k=0;i<n,j<n,k<n;i++<j++,k++){
		if (a[i]==0) b[j]=a[i];
		if (a[i]!=0) c[k]=a[i];}
for (j=0;j<n;i++)
	cout<<b[j]<<" ";
for (k=0;k<n;i++)
	cout<<c[k]<<" ";
system ("pause");
return 0;
}
