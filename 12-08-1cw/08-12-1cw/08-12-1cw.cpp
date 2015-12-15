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

const int N=10000;
int** a=new int*[N];
int n;

void print1(){
	cin>>n;
	srand(static_cast<int>(time(NULL)));
	for(int i=0;i<n;i++){
		a[i]=new int[n];
		for (int j=0;j<n;j++){
			a[i][j]=rand()%10;
			cout<<setw(2)<<a[i][j]<<" ";}
		cout<<endl;}}

void print2(){
	int i,j,p;
	for(int k=0; k<n/2;k++) 
        {       p=n-k-1;
                for(j=k;j<p;j++)             
                        cout<<setw(2)<<a[k][j]<<" ";
                for(i=k;i<p;i++)             
                        cout<<setw(2)<<a[i][p]<<" ";
                for(j=p;j>k;j--)    
                        cout<<setw(2)<<a[p][j]<<" ";
                for(i=p;i>k;i--)             
						cout<<setw(2)<<a[i][k]<<" ";}}



int main (){
	setlocale (LC_ALL, "Russian");
	cout<<"Введите размер матрицы (n*n)\n";
	print1();
	cout<<endl;
	print2();
system("pause");
return 0;
}
