#include "stdafx.h"
#include <iostream>
#include "cmath"

using namespace std;

int main(){
double x1,y1,x2,y2,x3,y3,k1,l1,k2,l2,k3,l3;
cout<<"Vvedite koorditaty tochek x1 y1 x2 y2 x3 y3\n";
cin>>x1>>y1>>x2>>y2>>x3>>y3;
k1=fabs((y1-y2)/(x1-x2));
k2=fabs((y2-y3)/(x2-x3));
k3=fabs((y3-y1)/(x3-x1));
l1=y1-k1*x1;
l2=y2-k2*x2;
l3=y3-k3*x3;
// в данных случаях по уравнению прямой вида y=k*x+l, составляются системы из точек, взятых попарно.
// вычисляются коэфиценты k и l для каждой системы, а затем сравниваются.
if ((k1==k2)&&(k2==k3)&&(l1==l2)&&(l2==l3)) cout<<"YES\n";
else cout<<"NO\n";
system("pause");
return 0;
}