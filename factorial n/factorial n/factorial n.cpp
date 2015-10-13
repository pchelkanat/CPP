#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;
int main() {
cout<<"Vvedite chiso\n";

int n,k,m;
cin>>n;
k=1;
m=1;
while (k<n)	{
			m=m*(k++);
			}
cout<<m*n;
system ("pause");
}