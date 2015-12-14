#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;
int main() {
	cout << "Vvedite chislo\n";
	cout.precision(3);
	int x, i;
	cin >> x;
	double s = x, k = x, e = 0.001;
	for (i = 1; k >= e; i++) {
		k = k*x*x / ((2 * i)*(2 * i + 1));
		s = s + k;
		cout << "i=" << 2 * i + 1 << " k=" << k << "\n" << "Summa=" << s << "\n";
	}
	cout << "\nI=" << 2 * i - 1 << "\n" << "SUMMA=" <<s << "\n";
	system("pause");
}