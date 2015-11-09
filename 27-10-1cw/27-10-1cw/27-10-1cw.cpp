#include "stdafx.h"
#include <iostream>

using namespace std;
const int N=10000000;
int a[N],n,i,k=0,j;
int del(int i){


int main(){
cout<<"Vvedite n\n";
cin>>n;
cout<<"Vvedite massiv\n";
for (i=0;i<n;i++) cin>>a[i];

for (i=0;i<n;i++){
	for(j=0;j<n;j++)
	if (a[i]<a[j]) swap(a[i],a[j]);
}
for (i=0;i<n;i++)
	if (a[i]!=a[i+1]) {
		cout<<a[i]<<" ";
		del (a[i]);
		cout<<"/n";}
for (i=0;i<n;i++)
		cout<<a[i]<<" ";
system("pause");
return 0;}
