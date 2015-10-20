#include "stdafx.h"
#include <iostream>;

using namespace std;
int main()
{const int N=100000;
	int i,n,a[N];
	cout<<"Vvedite chisla a1, a2, a3, n>3\n";
	cin>>a[1]>>a[2]>>a[3]>>n;	
	for (i=4;i<=n;i++){
		a[i]=(a[i-3]%10)+(a[i-2]%10)+(a[i-1]%10);
		cout<<a[i-3]%10<<" "<<(a[i-2]%10)<<" "<<(a[i-1]%10)<<" "<<"a["<<i<<"]="<<a[i]<<"\n";
	}
system ("pause");
return 0;
}

