// ������ ��������� �� �������. �� �������� ������������� ������� 
//    ���������� ��������, ������� � ������� �������� ���� � �� ������� 
//    ������� � ����������� ������ �������. � ������ ������ �������� 
//   ������� ������� � ����������� ����� n � m. � ��������� n ������� 
//    �������� �� m ����� ����� � ���� �������. ���������� ��� ����� � 
//    ���� ������.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

const int N=10000, M=10000;
int n,m;
int** a=new int*[N];

void create(){
	cin>>n>>m;
	srand(static_cast<int>(time(NULL)));
	for(int i=0;i<n;i++){
		a[i]=new int[N];
		for (int j=0;j<m;j++){
			a[i][j]=rand()%10;}}}

void print1(){
	for(int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cout<<setw(3)<<a[i][j]<<" ";}
		cout<<endl;}}

void print2(){
	for (int i=0; i<n;i++){
		if ((i%2)==0){
			for(int j=0;j<m;j++)
				cout<<a[i][j]<<" ";}
		if ((i%2)==1){
			for (int j=m-1;j>=0;j--)
				cout<<a[i][j]<<" ";}}}


int main (){
	setlocale (LC_ALL, "Russian");
	cout<<"������� ������ ������� (n*m)\n";
	create();
	print1();
	cout<<"\n";
	print2();
system("pause");
return 0;
}