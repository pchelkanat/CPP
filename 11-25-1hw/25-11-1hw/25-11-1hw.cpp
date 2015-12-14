// Копировать построчно прямоугольную матрицу размера 
//    n на m в одномерный массив из nm элементов. 
//    Напечатать элементы массива в одну строку.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

const int N=10000, M=10000;
int n,m;
int** a=new int*[N];
int* b=new int[N];

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
	int k=0;
	for(int i=0;i<n;i++){
		for (int j=0;j<m;j++)
			b[k++]=a[i][j];}		
	for(int i=0;i<m*n;i++)
		cout<<b[i]<<" ";}

int main (){
	setlocale (LC_ALL, "Russian");
	cout<<"Введите размер матрицы (n*m)\n";
	create();
	print1();
	cout<<"\n";
	print2();
system("pause");
return 0;
}
			
