#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main() {
cout<<"Vvedite dva chisla\n";
int a,b,c,d,k;
cin>>a>>b;
c=a;
d=b;
while (a!=b){
	if (a>b) a-=b;
    if (b>a) b-=a;
    }
cout<<"NOD(a,b)="<<a<<"NOK(a,b)="<<c*d/a;
system ("pause");
}