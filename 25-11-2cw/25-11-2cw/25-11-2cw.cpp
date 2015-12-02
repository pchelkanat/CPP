#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

const int N=100, M=100;
int a[N][M],b[N][M],c[N][M];

int main (){
	int i,j,l,n,m,k,s;
	setlocale (LC_ALL, "Russian");
	cout<<"¬ведите размер матриц n*m m*k\n";
	cin>>n>>m>>k;

	srand(static_cast<int>(time(NULL)));

	for(i=0;i<n;i++){
	for (j=0;j<m;j++){
		a[i][j]=rand()%10;
		cout<<setw(3)<<a[i][j];}
	cout<<endl;}
	cout<<"\n";

	for(i=0;i<m;i++){
	for (j=0;j<k;j++){
		b[i][j]=rand()%10;
		cout<<setw(3)<<b[i][j];}
	cout<<endl;}
	cout<<"\n";

	for(i=0;i<n;i++){
	for (j=0;j<k;j++){
		s=0;
		for (l=0;l<k;j++){
			s=s+a[i][l]*b[l][j];}
		c[i][j]=s;}}
	
	for(i=0;i<n;i++){
	for (j=0;j<k;j++){
		cout<<setw(3)<<c[i][j];}
	cout<<endl;}
system("pause");
return 0;
}
