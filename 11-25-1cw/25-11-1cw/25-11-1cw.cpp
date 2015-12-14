//Написать программу, которая вычислит и напечатает сумму 
//    элементов квадратной матрицы, которые находятся одновременно 
//    и под главной и под побочной диагоналями.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

const int N=1000, M=1000;
int a[N][M];

int main (){
	int i,j,n,s=0;
	setlocale (LC_ALL, "Russian");
	cout<<"Введите размер матрицы n\n";
	cin>>n;

	srand(static_cast<int>(time(NULL)));

	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			a[i][j]=rand()%10;
			cout<<setw(3)<<a[i][j];}
		cout<<endl;}
		cout<<"\n";
	for(i=n-1;i>0;i--)
		for (j=i-1;j>n-i-1;j--)
			{
			s+=a[i][j];
			cout<<"s="<<s<<" ";}
system("pause");
return 0;
}
