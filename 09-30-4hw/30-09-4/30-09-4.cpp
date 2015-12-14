#include "stdafx.h"
#include <iostream>
#include "cmath"

using namespace std;

int main(){
double x1,y1,x2,y2,x3,y3,x4,y4,s;
cout<<"Vvedite koorditaty tochek x1 y1 x2 y2 x3 y3 x4 y4\n";
cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
//—уществует формул€ дл€ вычислени€ площади треурольнка по координатам. s=fabs((x1-x3)*(y2-y3)-(x2-x3))/2
//¬ данном случае четырех урольник разбиваем на два треугольника и вычисл€ем их площади
//«атем сразу складываем.
s=fabs((((x1-x3)*(y2-y3)-(x2-x3)*(y1-y3))+((x1-x3)*(y4-y3)-(x4-x3)*(y1-y3)))/2);
cout<<"Plozhad' chetyrehugol'nika s="<<s;
system("pause");
return 0;
}