// Тагиров. Задачас вагонами.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

const int N=1000000;
int a[N];
char s[N];

int main () {
	cin>>s;
	int n =strlen(s);
	int k=0, m=0,l=1;
	for(int i=0;i<n;i++){
		if (s[i]=='s')
			k++;
		if (s[i]=='x')
			m++;
		if (k<m){
			break;
			l=0;}}
		if ((l==1)&&(m==k))
			cout<<"YES";
		else cout<<"NO";
		
	system("pause");
	return 0;}