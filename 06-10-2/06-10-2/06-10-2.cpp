#include "stdafx.h"
#include <iostream>
#include "cmath"

using namespace std;

int main(){
	int x,y,r,k=0,x1,y1;
	cout<<"Vvedite koordinaty tsentra okruzhnosti\n";
	cin>>x>>y;
	cout<<"Vvedite radius\n";
	cin>>r;
	// ���������� ������ ��������� �� �����, ��� ��� �� ����� ������������ ��������� ����������.
	// ������������� "������" �������, ��������� ����� ���������� � ��������� ������������� ���������� �� ������� (������),
	// ����� �� ��� ������ ��� �� ����������, ��� �� �����.
		for (x1=-r;x1<=r;x1++){
			for (y1=-r;y1<=r;y1++){
				if(pow(x1,2.0) + pow(y1,2.0) <= pow(r,2.0)) k=k+1;}}
	cout<<k;
system("pause");
}


