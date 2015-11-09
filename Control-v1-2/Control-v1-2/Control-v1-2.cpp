#include "stdafx.h"
#include <iostream>

using namespace std;
const int N=1000000;
int n,a[N];
int main(){
	int i,j,k=1;
	cout<<"Vvedite n\n";
	cin>>n;
	cout<<"Vvedite chisla\n";
	for (i=0;i<n;i++) cin>>a[i];
	for (i=0;i<n;i++) {
		for (j=0;j<n;j++){
			if (a[i]==a[j]) k=k*1;
			else k=k*0;}
	}
	if (k==1) cout<<"YES\n";
	else cout<<"NO\n";
	system("pause");
	return 0;}
