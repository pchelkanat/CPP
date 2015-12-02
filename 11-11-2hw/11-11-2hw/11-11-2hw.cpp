#include "stdafx.h"
#include <iostream>
#include "cmath"
#include <iomanip>

using namespace std;

const int N=1000000;
int a[N],n;

int main(){
	int i,j;
	cout<<"Vvedite n\n";
	cin>>n;
	cout<<"Vvdite massiv\n";
	srand(time(0));
	for (i=0;i<n;i++){ 
		a[i]=rand()%11-5;
		cout<<setw(2)<<a[i]<<" ";}
	cout<<"\n";
	for (j=1;j<n;j++)
            for (i=j;i>0 && pow(a[i-1],2)<pow(a[i],2);i--)
				swap(a[i-1],a[i]);
		for (i=n-1;i>=0;i--)
			cout<<setw(2)<<a[i]<<" ";
system("pause");
return 0;}


