#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
int main() {
cout<<"Vvedite chislo\n";
int n,k,i;
cin>>n;
k=0;
for (i=1; i<=n; i++){
	if ((n%i)==0) {
		cout<<i<<", ";
		k+=i;
	}
}
if (n==k)
cout<<"sovershennoe chislo\n";
else
cout<<"nesovershennoe chislo\n";
system ("pause");
}