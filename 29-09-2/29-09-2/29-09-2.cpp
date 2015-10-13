#include "stdafx.h"
#include <iostream>
#include "cmath"
using namespace std;
int main(){
double x1,y1,x2,y2,a,b,c;
cout<<"Vvedite koordinaty x1 y1 x2 y2\n";
cin>>x1>>y1>>x2>>y2;
a=y1-y2;
b=x2-x1;
c=-(a*x1+b*y1);
cout<<"a="<<a<<" b="<<b<<" c="<<c;
system("pause");
return 0;
}