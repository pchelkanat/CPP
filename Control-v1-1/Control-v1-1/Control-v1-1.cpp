#include "stdafx.h"
#include <iostream> 
using namespace std; 
int main(){ 
int n; 
cout<<"Vvedite n\n"; 
cin>>n; 
int a,b; 
int k; 
int max = 0;
cout<<"Vvedite chisla\n";
cin>>a; 
int pr = a; 
for (int i=1;i<n;i++){ 
cin>>b; 
if (pr<b){ 
if (a<b) 
k=b-a; 
if (max<k) 
max=k; 
} 
else a=b; 
pr=b; 
} 
cout<<max; 
system ("pause"); 
return 0; 
}
