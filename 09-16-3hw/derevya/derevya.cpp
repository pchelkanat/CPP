#include "stdafx.h"
#include <iostream>
#include "cmath"

using namespace std;

int main() {
	cout << "Vvedite obzhee chislo derevyev i chislo derevyev, kotorye nuzhno ostavit'\n";
	int n, m, i, s=0, k=0;
	cin >> n >> m;
	for (i = 1; k<n ; i++){
		k = (m-1)*i+1;// ������ ��������� �/� ������ � ��������� ������������ ��������� ��� ��������� ����������� �/� ����. ������: 123 ���(0), 135 ���(1); 
		if (k<=n){
	    s=s+(n-k+1);// ���������� � ���������� ���������� ��������� ����������;
		cout <<"\nk="<<k<<" s="<< s;
		}
	}
	cout <<"\nS="<<s;
	system("pause");
	return 0;
}