#include "stdafx.h"
#include <iostream>

using namespace std;

int main(){
	const int N=100000;
	int i,n,a[N],b[N],max;
	cout<<"Vvedite n\n";
	cin>>n;
	cout<<"Vvedite chisla\n";
	for (i=1;i<=n;i++)
		cin>>a[i];
	for (i=1;i<n;i++)
		b[i]=a[i]*a[i+1];
	max=b[1];
		for(i=2;i<=n;i++){
		if (b[i]>max)
			max=b[i];		
	};
	cout<<"Naibol'shee proizvedenie="<<max;
system("pause");
return 0;}
