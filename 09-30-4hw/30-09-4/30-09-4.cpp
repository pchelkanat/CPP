#include "stdafx.h"
#include <iostream>
#include "cmath"

using namespace std;

int main(){
double x1,y1,x2,y2,x3,y3,x4,y4,s;
cout<<"Vvedite koorditaty tochek x1 y1 x2 y2 x3 y3 x4 y4\n";
cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
//���������� ������� ��� ���������� ������� ����������� �� �����������. s=fabs((x1-x3)*(y2-y3)-(x2-x3))/2
//� ������ ������ ������� �������� ��������� �� ��� ������������ � ��������� �� �������
//����� ����� ����������.
s=fabs((((x1-x3)*(y2-y3)-(x2-x3)*(y1-y3))+((x1-x3)*(y4-y3)-(x4-x3)*(y1-y3)))/2);
cout<<"Plozhad' chetyrehugol'nika s="<<s;
system("pause");
return 0;
}