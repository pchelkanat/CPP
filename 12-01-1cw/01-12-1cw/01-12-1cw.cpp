// СЕДЛОВЫЕ ТОЧКИ. Найти все элементы прямоугольной матрицы, 
//    которые одновременно являются наибольшими в своей строке 
//    и наименьшими в своем столбце или наоборот. 
//    Напечатать в отдельных строках позиции седловых 
//    точек – номер строки и столбца.

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

const int N=10000, M=10000;
int i,j,n,m, a[N][M];;
//int** a=new int*[N];

//void create1(){
//	cin>>n>>m;
//	srand(static_cast<int>(time(NULL)));
//	for(i=0;i<n;i++){
//		a[i]=new int[N];
//		for (j=0;j<m;j++){
//			a[i][j]=rand()%11;}}}

void create2(){
	cin>>n>>m;
	for(i=0;i<n;i++)
		for (j=0;j<m;j++)
			cin>>a[i][j];}

//void print1(int** a,int n,int m){
//	for(i=0;i<n;i++){
//		for (j=0;j<m;j++){
//			cout<<setw(3)<<a[i][j]<<" ";}
//		cout<<endl;}}

void print2(){
	for(i=0;i<n;i++){
		for (j=0;j<m;j++){
			cout<<setw(3)<<a[i][j]<<" ";}
		cout<<endl;}}

void search(){
	int min_str[N],min_stb[N],max_str[N],max_stb[N],i_min,i_max;
    //в строке
	for(i=0;i<n;i++){
		i_max=i_min=0;
        for(j=0;j<m;j++){
			if(a[i][j]<a[i][i_min])
                i_min=j;
			if(a[i][j]>a[i][i_max])
				i_max=j;}
		cout<<endl;
        max_str[i]=a[i][i_max];
        min_str[i]=a[i][i_min];
    }
	//в столбце
	 for(j=0; j<m; j++){
        i_min=i_max=0;
        for(i=0; i<n; i++){
            if(a[i][j]<a[i_min][j])
                i_min=i;
            if(a[i][j]>a[i_max][j])
				i_max=i;}
        max_stb[j]=a[i_max][j];
        min_stb[j]=a[i_min][j];
    }
	 //печать
	for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            if(((a[i][j]==max_str[i]) && (a[i][j]==min_stb[j])) || ((a[i][j]==min_str[i]) && (a[i][j]==max_stb[j])))
                cout<<"("<<i+1<<" "<<j+1<<")"<<endl; 
}

int main (){
	int ;
	setlocale (LC_ALL, "Russian");
	cout<<"Введите размер матрицы n*m\n";
	create2();
	print2();
	cout<<"\n";
	search();
system("pause");
return 0;
}