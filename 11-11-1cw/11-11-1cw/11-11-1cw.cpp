// ������������� �����, ������������� ������. � ������� 
// ����� ����� ����������� �������� ���, ����� ���
// ������������� ����� ��������� � ������ ������� � ��� ��
// �������, ��� � �������� �������. ���������� ������������� 
// �������� ������ ��������� � ����� �������, � ���� � ����� 
// �������������� � ��������������. ������� ������-���������.

// ������:
// 2 0 -1 3 0 0 -2 2 -2 3 0
// ���������:
// -1 -2 -2 0 0 0 0 2 3 2 3

#include "stdafx.h"
#include <iostream>

using namespace std;

const int N=1000000;
int a[N],n;

int main(){
	int i,j;
	cout<<"Vvedite n\n";
	cin>>n;
	cout<<"Vvedite massiv\n";
	for (i=0;i<n;i++){
		a[i]=rand()% 51-25;
		cout<<a[i]<<" ";}//����� ��������� �����
	cout<<"\n";
	for (j=0;j<n;j++) // �������� ��������� ���
		for(i=0;i<n-1;i++)
			if(((a[i]>=0)&&(a[i+1])<0)||((a[i]>0)&&(a[i+1]==0)))// �� ������� ����� ������ �����, ���� a[i]>=0, � a[i+1]<0; ��� ���� a[i]>0, � a[i+1]=0;
				swap(a[i],a[i+1]);
	for (i=0;i<n;i++)
		cout<<a[i]<<" ";
	system ("pause");
	return 0;
}