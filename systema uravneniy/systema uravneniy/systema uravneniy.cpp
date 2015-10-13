#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main() {
double x,y;
int a1,b1,c1,a2,b2,c2;
cout<<"Vvedite koefizenty pervogo urvneniyya\n";
cin>>a1>>b1>>c1;
cout<<"Vvedite koefizenty vtorogo urvneniyya\n";
cin>>a2>>b2>>c2;
if ((a1*b2-a2*b1)==0){
cout<<"Net reseniy";
system ("pause");
return 0;
}
else{
x=(b2*c1-b1*c2)/(a1*b2-a2*b1);
y=(a1*c2-a2*c1)/(a1*b2-a2*b1);
}
cout<<"x="<<x<<", "<<"y="<<y;
system ("pause");
}