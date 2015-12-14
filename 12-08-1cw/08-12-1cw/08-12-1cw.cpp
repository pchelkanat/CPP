// Печать элементов по спирали. Из заданной прямоугольной матрицы 
//    напечатать элементы, начиная с правого верхнего угла и по часовой 
//    стрелке в направлении центра матрицы. В первой строке задаются 
//   размеры матрицы – натуральные числа n и m. В следующих n строках 
//    записано по m целых чисел – сама матрица. Напечатать все числа в 
//    одну строку.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

const int n=10000;
int** a=new int*[n];

void create(){
	int n;
	cin>>n;
	srand(static_cast<int>(time(NULL)));
	for(int i=0;i<n;i++){
		a[i]=new int[n];
		for (int j=0;j<n;j++)
			a[i][j]=rand()%10;}}

void print1(){
	for(int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cout<<setw(3)<<a[i][j]<<" ";}
		cout<<endl;}}

void print2(){
	int nn=n*n,p;
	for(int k=0; k<n/2;k++) 
        {       p = n-1-k;
                for(int j=k;j<p;j++,nn--)             
                        cout<<setw(3)<<a[k][j]<<endl;
                for(int i=k;i<p;i++, nn--)             
                        cout<<setw(3)<<a[i][p]<<endl;
                for(int j=p;j>k;j--, nn--)    
                        cout<<setw(3)<<a[p][j]<<endl;
                for(int i=p;i>k;i--, nn--)             
					cout<<setw(3)<<a[i][k]<<endl;}}


int main (){
	setlocale (LC_ALL, "Russian");
	cout<<"Введите размер матрицы (n*n)\n";
	create();
	print1();
	cout<<endl;
	print2();
system("pause");
return 0;
}