// В квадратной матрице переставить элементы, чтобы 
//    она повернулась на 180 градусов. 
//    Напечатать матрицу после поворота.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

const int N=10000, M=10000;
int i,j,n;
int** a=new int*[N];

void create(){
	cin>>n;
	srand(static_cast<int>(time(NULL)));
	for(i=0;i<n;i++){
		a[i]=new int[N];
		for (j=0;j<n;j++){
			a[i][j]=rand()%10;}}}

void print(int** a,int n){
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			cout<<setw(3)<<a[i][j]<<" ";}
		cout<<endl;}}

void turn(){
	for(i=0;i<n/2;i++)
		for(j=0;j<n/2+1;j++){
			int temp1=a[i][j];
			a[i][j]=a[j][n-i-1];
			a[j][n-i-1]=a[n-i-1][n-j-1];
			a[n-i-1][n-j-1]=a[n-j-1][i];
			a[n-j-1][i]=temp1;
		}}

int main (){
	int m;
	setlocale (LC_ALL, "Russian");
	cout<<"Введите размер матрицы n\n";
	create();
	print(a,n);
	cout<<"\n";
	turn();
	turn();
	print(a,n);
system("pause");
return 0;
}
