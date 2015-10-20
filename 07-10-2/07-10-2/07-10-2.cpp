#include "stdafx.h"
#include <iostream>
#include "cmath"

using namespace std;

int main(){
	int x1,x2,y1,y2,r1,r2;
	double S=0, pi=3.141592,f1,f2;
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
		double p1=(pow(r1,2)+pow(d,2)-pow(r2,2))/(2*r1*d);
		double p2=(pow(r2,2)+pow(d,2)-pow(r1,2))/(2*r2*d);
			f1=acos(p1);
			f2=acos(p2);
			double S1=0.5*pow(r2,2)*(2*f1-sin(2*f1));
			double S2=0.5*pow(r1,2)*(2*f2-sin(2*f2));
			if ((p1<(pi*0.5))&&(p2<(pi*0.5))) S=S1+S2;
			if (p1>(pi*0.5)){
				S1=0.5*pow(r2,2)*(2*(pi+f1)-sin(2*(pi+f1)));
				S=S1+S2;}	
			if (p2>(pi*0.5)){
				S2=0.5*pow(r1,2)*(2*(pi+f2)-sin(2*(pi+f2)));
				S=S1+S2;}
	}
	cout<<"S="<<S<<"\n";
	system("pause");
	return 0;
}
