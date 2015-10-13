#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;
int main() {
	cout << "Vvedite chislo\n";
	cout.precision(3);
	int x, i;
	cin >> x;
	double s=1, k=1, e=0.001;
	for (i = 1; k>=e; i++) {
		k = k*x/i;
		s = s + k;
		cout << "i=" << i<< " k="<<k<<"\n" << "Summa=" << s << "\n";
	}
	cout << "\nI=" << i << "\n" << "SUMMA=" << s << "\n";	
	system ("pause");
}