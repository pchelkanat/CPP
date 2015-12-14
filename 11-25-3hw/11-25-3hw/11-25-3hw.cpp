// Приведение матрицы к треугольному виду

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

const int N=10000, M=10000;
int n,m;
float** a = new float*[n];

    void create() {
		cin>>n;

		srand(static_cast<int>(time(NULL)));     
        for (int i = 0; i < n; i++) {
            a[i] = new float[n];
            for (int j = 0; j < n; j++)
                a[i][j] = rand() % 11;
          
		}}


	void treug(){
        for (int k = 0; k < n - 1; k++) {
            for (int i = k + 1; i < n; i++) {

                // Коэфф. для домножения строки
                float c = a[i][k] / a[k][k];

                for (int j = k; j < n; j++) {
                    a[i][j] = a[i][j] - c * a[k][j];
                }
            }
		}}
        

    void print() {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << setw(7) << setprecision(2) << a[i][j] << " ";
            }
            cout << endl;
            cout << endl;
        }
    }


int main(){
	create();
	print();
    cout << endl;
	treug();
	cout << "Result:\n";
    print();
      // Освобождение памяти
	for (int i = 0; i < n; i++) delete[] a[i];
        delete[] a;
    system("pause");
return 0;}
