// 21-10-1cw.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{const int N=100000;
int n,i,j,a[N];
cout<<"Vvedite kolichestvo n\n";
cin>>n;
cout<<"Vvedite chisla\n";
for (i=1;i<=n;i++)
	cin>>a[i];
if ((n%2)==0){
	for (i=n/2+1, j=1; i<=n, j<=n/2; i++, j++)
		swap(a[i],a[j]);
}
// если количество чисел нечетно, то мы оставляем средний элемент n/2+1
if ((n%2)==1){
	for(i=n/2+2, j=1; i<=n, j<=n/2; i++, j++)
		swap(a[i],a[j]);
}
for (i=1;i<=n;i++)
	cout<<a[i]<<" ";
system ("pause");
return 0;
}

