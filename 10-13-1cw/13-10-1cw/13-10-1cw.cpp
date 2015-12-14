#include "stdafx.h"
#include <iostream>

using namespace std;

int main(){
	int a,n,b,i,min,max,sum;
	cout<<"Vvedite n & a1\n";
	cin>>n>>a;
	min=a;
	max=a;
	sum=a;
	for(i=1;i<n;i++){
		cin>>b;
		if (b>max)
			max=b;
		if (b<min)
			min=b;
		sum+=b;
	};
	cout<<"min="<<min<<" max="<<max<<" sum="<<sum;
system("pause");
return 0;}