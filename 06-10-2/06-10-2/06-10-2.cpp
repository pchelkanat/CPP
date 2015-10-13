#include "stdafx.h"
#include <iostream>
#include "cmath"

using namespace std;

int main(){
	int x,y,r,k=0,x1,y1;
	cout<<"Vvedite koordinaty tsentra okruzhnosti\n";
	cin>>x>>y;
	cout<<"Vvedite radius\n";
	cin>>r;
	// координаты центра окружости не важны, так как мы будем использовать уравнение окружности.
	// гипотетически "строим" квадрат, описанный около окружности и проверяем целочисленные координаты по порядку (сеткой),
	// лежат ли они внутри или на окружности, или не лежат.
		for (x1=-r;x1<=r;x1++){
			for (y1=-r;y1<=r;y1++){
				if(pow(x1,2.0) + pow(y1,2.0) <= pow(r,2.0)) k=k+1;}}
	cout<<k;
system("pause");
}


