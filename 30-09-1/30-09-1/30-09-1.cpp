#include "stdafx.h"
#include <iostream>
#include "cmath"

using namespace std;

int main(){
cout.precision(4);
double a,b,c,d,x,y;
cout<<"Vvedite koefitsenty A B C\n";
cin>>a>>b>>c;
cout<<"Vvedite koorditaty tochki X Y\n";
cin>>x>>y;
d=fabs(a*x+b*y+c)/sqrt(a*a+b*b);// формула взята из интернета
cout<<"Naikratchaishee rasstoyanie d="<<d;
system("pause");
return 0;
}