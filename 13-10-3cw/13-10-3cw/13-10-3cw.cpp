#include "stdafx.h"
#include <iostream> 
using namespace std;
const int N=10000000;
int n,a[N];
int main(){
;	int i,k=1,p=1;
cout<<"Vvedite n\n";
cin>>n;
cout<<"Vvedite chisla\n";
for (i=0; i<n;i++)
	cin>>a[i];
for (i=0;i<n-1;i++)
	if (a[i]>=a[i+1]) k*=1;
	else {k=0;
	break;}

for (i=0;i<n-1;i++)
	if (a[i]<=a[i+1]) p*=1;
	else {p=0;
	break;}

	if ((k==0)&&(p==0)) cout<<"NO\n";
	else cout<<"YES\n";
system ("pause"); 
return 0; 
}
