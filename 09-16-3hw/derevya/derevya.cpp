#include "stdafx.h"
#include <iostream>
#include "cmath"

using namespace std;

int main() {
	cout << "Vvedite obzhee chislo derevyev i chislo derevyev, kotorye nuzhno ostavit'\n";
	int n, m, i, s=0, k=0;
	cin >> n >> m;
	for (i = 1; k<n ; i++){
		k = (m-1)*i+1;// размер интервала м/у первым и последним оставленными деревьями для различных промежутком м/у ними. Пример: 123 при(0), 135 при(1); 
		if (k<=n){
	    s=s+(n-k+1);// складываем с предыдущим количество возможных размещений;
		cout <<"\nk="<<k<<" s="<< s;
		}
	}
	cout <<"\nS="<<s;
	system("pause");
	return 0;
}