//Параллельная сортировка. Даны два целочисленных массива из n 
//  элементов. Упорядочить элементы первого массива по возрастанию,
//  параллельно переставляя соответствующие элементы и второго 
//  массива. В первой строке задаётся размер каждого массива n, во
//  второй и третьей строке – сами массивы. Вывести массивы-результаты.
    
//  Пример:
//  3 1 2 5 4 6
//  1 3 5 7 8 9
//  Результат:
//  1 2 3 4 5 6
//  3 5 1 8 7 9

#include "stdafx.h"
#include <iostream>

using namespace std;

const int N=100000;
int n;
int main(){
	int a[N],b[N],i,j;
	cout<<"Vvedite n\n";
	cin>>n;
	cout<<"Vvedite massivy\n";
	for (i=0;i<n;i++){
		a[i]=rand()% 51-25;
		cout<<a[i]<<" ";}
	cout<<"\n";
	for (i=0;i<n;i++){
		b[i]=rand()% 51-25;
		cout<<b[i]<<" ";}
	cout<<"\n";
	for (int j = 1; j < n; j++)
            for (int i = 0; i < n - j; i++)
                if (a[i] > a[i + 1]){
					swap(a[i], a[i + 1]);
					swap(b[i],b[i+1]);}
	for (i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"\n";
	for (i=0;i<n;i++)
		cout<<b[i]<<" ";
system("pause");
return 0;
}