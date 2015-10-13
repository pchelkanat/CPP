#include "stdafx.h"
#include <iostream>
#include "cmath"

using namespace std;
int main(){
	cout.precision(4);
	double x1,x2,y1,y2,x3,y3,a,b,c,p,S;

	cout<<"Vvedite koordinaty x1, y1, x2, y2, x3, y3\n";
	cin>>x1>>y1>>x2>>y2>>x3>>y3;

	a=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	b=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	c=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
	p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));

	cout<<"\na="<<a<<"\nb="<<b<<"\nc="<<c<<"\np="<<p<<"\nPlozhad' treugol'nika S="<<S;
	system ("pause");
	return 0;
}
