#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;
int main() {
	cout << "Vvedite razmery zarplat\n";
	int a, b, c, min, max;
	cin >> a >> b >> c;
	if (a >= b) {
		min = b;
		max = a;
		if (min >= c) min = c;
		if (max <= c) max = c;
	}
	else {
		min = a;
		max = b;
		if (min >= c) min = c;
		if (max <= c) max = c;
	}
	cout << "razniza mezhdu max & min = " << max-min;
	system("pause");
	return 0;
}