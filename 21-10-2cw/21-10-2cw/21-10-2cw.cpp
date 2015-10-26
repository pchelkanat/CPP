#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{const int N=100000;
int n,i,k,l,min,max,a[N];
cout<<"Vvedite kolichestvo n\n";
cin>>n;
cout<<"Vvedite chisla\n";
for (i=1;i<=n;i++)
	cin>>a[i];
max=a[1];
min=a[1];
for (i=2;i<=n;i++){
	if (a[i]>max){
	max=a[i];
	k=i;}
	else if (a[i]<min){
	min=a[i];
	l=i;}
}
swap(a[l], a[k]);
for (i=1;i<=n;i++)
	cout<<a[i]<<" ";
system ("pause");
return 0;
}

