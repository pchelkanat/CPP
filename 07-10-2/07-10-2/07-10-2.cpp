#include "stdafx.h"
#include <iostream>
#include "cmath"

using namespace std;

int main(){
	int x1,x2,y1,y2,r1,r2;
	double S=0;
	cout<<"Vvedite (x1,y1,r1)\n";
	cin>>x1>>y1>>r1;
	cout<<"Vvedite (x2,y2,r2)\n";
	cin>>x2>>y2>>r2;
	//найдем расстояние между центрами окружностей
	double d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	// проверим, пересекаются ли окружности
	if ((r1+r2)<=d) {
		cout<<"NO";
		system("pause");
		return 0;}
	else{
	// радианная величина 1/2 дуги окружностей равна f1 и f2
	double f1=acos((pow(r1,2)+pow(d,2)-pow(r2,2))/(2*r1*d));
	double f2=acos((pow(r2,2)+pow(d,2)-pow(r1,2))/(2*r2*d));
	// так как общая часть состоит из двух сегментов, то можно найти их площади и сложить
	// индек углов и радиусов противоположен
	S=pow(r2,2)*(f1-sin(f1))/2+pow(r1,2)*(f2-sin(f2))/2;
	cout<<"S="<<S<<"\n";
	system("pause");
	return 0;
	};
}
