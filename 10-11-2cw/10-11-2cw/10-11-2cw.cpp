//  Слияние 3-х упорядоченных массивов. Даны три массива целых 
//  чисел из k, n и m элементов. Слить все три массива в новый
//  из k+n+m элементов, пройдя по каждому исходному массиву от 
//  начала до конца по одному разу. В первой строке задаётся 
//  размер первого массива n, во второй строке – сам массив. 
//  Второй и третий массивы заданы таким же образом. Вывести 
//  массив-результат.
    
//  Пример:
//  1 2 5 6
//  1 3 5 7 7 9
//  1 2 3 4 5
//  Результат:
//  1 1 1 2 2 3 3 4 5 5 5 6 7 7 9

#include "stdafx.h"
#include <iostream>

using namespace std;

const int N=100000;
int n,k,m;
int main(){
	int a[N],b[N],c[N],d[N],i,j,l,s;
	cout<<"Vvedite k\n";
	cin>>k;
	cout<<"Vvedite massivy\n";
	for (i=0;i<k;i++){
		a[i]=rand()% 51-25;
		cout<<a[i]<<" ";}
	cout<<"\n";

	cout<<"Vvedite n\n";
	cin>>n;
	cout<<"Vvedite massivy\n";
	for (j=0;j<n;j++){
		b[j]=rand()% 51-25;
		cout<<b[j]<<" ";}
	cout<<"\n";

	cout<<"Vvedite n\n";
	cin>>n;
	cout<<"Vvedite massivy\n";
	for (l=0;l<m;l++){
		c[l]=rand()% 51-25;
		cout<<c[l]<<" ";}
	//начало решения
 	for(i=0,j=0,s=0;i<k,j<n,s<k+n;i++,j++ ){
		if (a[i]>b[j])
			swap(a[i],b[j]);
		d[s]=a[i];
		d[s+1]=b[j];
		s+=2;}
	for (l=0,s=0;l<m,s<k+n+m;l++)
		if (c[l]>d[s])
			swap(c[l],d[s]);
		d[s]=c[l];
		s+=2;}