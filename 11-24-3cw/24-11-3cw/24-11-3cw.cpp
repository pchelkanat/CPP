//Написать программу, которая поменяет местами первую строку 
//    и первый столбец  в квадратной матрице. В первой строке 
//    задаётся размер матрицы. Потом сама матрица.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>


using namespace std;

const int N=1000, M=1000;
int a[N][M];

int main (){
	int i,j,n;
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
	for (i=1,j=1;i<n,j<n;i++,j++)
		swap(a[0][j],a[i][0]);
	for(i=0;i<n;i++){
		for (j=0;j<n;j++)
			cout<<setw(3)<<a[i][j];
		cout<<endl;}
system("pause");
return 0;
}

