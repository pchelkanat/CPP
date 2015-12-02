// Написать программу, которая поменяет местами две строки 
//    (столбцы) с заданными номерами в прямоугольной матрице. 
//    В первой строке задаются размеры матрицы. Потом сама матрица.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>


using namespace std;

const int N=1000, M=1000;
int a[N][M];

int main (){
	int i,j,n,p,q;
	setlocale (LC_ALL, "Russian");
	cout<<"Введите размер матрицы n, номера строк p и q\n";
	cin>>n>>p>>q;
	srand(static_cast<int>(time(NULL)));
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			a[i][j]=rand()%10;
			cout<<setw(3)<<a[i][j];}
		cout<<endl;}
		cout<<"\n";
	for (j=0;j<n;j++)
		swap(a[p-1][j],a[q-1][j]);
	for(i=0;i<n;i++){
		for (j=0;j<n;j++)
			cout<<setw(3)<<a[i][j];
		cout<<endl;}
system("pause");
return 0;
}
