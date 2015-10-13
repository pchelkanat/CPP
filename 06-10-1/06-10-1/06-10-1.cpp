#include "stdafx.h"
#include <iostream>
#include "cmath"

using namespace std;
// составление уравнения прямой
double fuc(double k1, double m1, double k2, double m2){
double a,b,c;
cout<<"Vvedite koorditaty tochek x1 y1 x2 y2";
cin>>k1>>m1>>k2>>m2;
a=m1-m2;
b=k2-k1;
c=-(a*k1+b*m1);
return a;
}
//

int main(){
double x1,y1,x2,y2,x3,y3,x4,y4,a,b,c;
cout<<"Vvedite koorditaty tochek x1 y1 x2 y2 x3 y3 x4 y4\n";
cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
fuc(x1,y1,x2,y2);
cout<<"a="<<a<<" b="<<b<<" c="<<c;
system("pause");
return 0;
}

