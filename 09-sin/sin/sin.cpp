#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;
int main() {
	cout << "Vvedite chislo\n";
	double x, pi=3.14159265;
	cin >> x;
	cout.precision(3);
	
	cout<<asin(x);
	system("pause");
	return 0;
}
