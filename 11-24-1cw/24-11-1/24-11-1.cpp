// �������� ��������� ��� ���������������� ���������� �������
// ������������ �������� ���������. � ������ ������ �������
// ������ �������. ����� ���� �������.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
   
const int N=10000;
int n,a[N][N];
int main() { 
	setlocale(LC_ALL, "Russian");
	int i,j;
	cout<<"������� ������ n ���������� �������\n";
	cin>>n;
	srand(static_cast<int>(time(NULL)));
	//��������
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
                a[i][j] = rand() % 11;
	//�����
	for (i = 0; i < n; i++){
        for (j = 0; j < n; j++) cout << setw(3) << a[i][j] << " ";
       cout << endl;}
	//������
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-1-i; j++) swap(a[i][j], a[n-j-1][n-i-1]);
		
	//�����
    cout<<"\n";
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++) cout << setw(3) << a[i][j] << " ";
		cout << endl;}
system ("pause");
return 0;}
