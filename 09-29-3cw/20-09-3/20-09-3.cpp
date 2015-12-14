#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main() {
double x,y;
int a1,b1,c1,a2,b2,c2;
cout<<"Vvedite koordonaty pervoy pryamoi\n";
cin>>a1>>b1>>c1;
cout<<"Vvedite koefizenty vtoroi pryamoi\n";
cin>>a2>>b2>>c2;
	if (((a1/a2)==(b1/b2))&&(c1==c2)) {
		cout<<"Pramye sovpadaut\n";
		system ("pause");
		return 0;}
	if ((a1*b2-a2*b1)==0){
		cout<<"NO";
		system ("pause");
		return 0;}
	else{
		y=(b2*c1-b1*c2)/(a1*b2-a2*b1);
		x=(a1*c2-a2*c1)/(a1*b2-a2*b1);}
cout<<"x="<<x<<", "<<"y="<<y;
system ("pause");
}