// ���������, ��� ��� �������� � ������������� ������� 
//    �� 0 � 1  ����������� � ��������� �������. 
//    ���������� ����, ���� ��� ��� � ���һ � ��������� ������.

#include "stdafx.h"
#include <iostream>

using namespace std;

const int N=100, M=100;

int main(){
	int i,j,n,m,p=1;
	int a[N][M],b[N];
    setlocale(LC_ALL, "");
    cout << "���������� ������� NxM\n"; 
	cin>>n>>m;

    for (i=0; i < n; i++)
        for (j=0; j < m; j++)
            cin>>a[i][j];
// �������������� � ���������� ������ n*m
	int k=0;
	for ( i=0; i<n;i++){
		if ((i%2)==0){
			for( j=0;j<m;j++)
				b[k++]=a[i][j];}
		if ((i%2)==1){
			for (j=m-1;j>=0;j--)
				b[k++]=a[i][j];}
			}
// �������� �� �����������
	for (i=0;i<n*m;i++){
		cout<<b[i];

		if(b[0]==1){
			if(b[i]==(i+1)%2)
				p*=1;
			else p*=0;}

		if(b[0]==0){
			if(b[i]==(i)%2)
				p*=1;
			else p*=0;}
	}	

	if (p==1) cout<<"YES";
	else cout<<"NO";
    system("pause");
    return 0;
}