#include "stdafx.h"
#include <iostream>

using namespace std;

int main(){
	int a,n,i,max1,max2,max3;
	cout<<"Vvedite n & a\n";
	cin>>n>>a;
	max1=a;
	max2=a;
	max3=a;
	for(i=2;i<=n;i++){
		cin>>a;
		if (a>max3)
			max3=a;
		if (max2>max1)
			swap(max1,max2);
		if (max3>max2)
			swap(max2,max3);
	};
	cout<<"max3="<<max3<<", max2="<<max2<<", max1="<<max1;
system("pause");
return 0;}