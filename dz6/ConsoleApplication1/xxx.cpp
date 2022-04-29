#include "xxx.h"
void sort(int* a, int b) {
	for (int i=1; i < b; i++) {
		for (int j = i; j > 0 && a[j - 1] > a[j];j--) {
			int c = a[j - 1];
			a[j - 1] = a[j];
			a[j]= c;
		}
	}
}
void sort(double* a, int b) {
	for (int i=1; i < b; i++) {
		for (int j = i; j > 0 && a[j - 1] > a[j]; j--) {
			double c = a[j - 1];
			a[j - 1] = a[j];
			a[j] = c;
		}
	}
}
void zap(int* a, int b) {
	for (int i=0; i < b; i++) {
		a[i] = rand() % 10;
	}
}
void zap(double* a, int b) {
	for (int i=0; i < b; i++) {
		a[i] = (rand() % 100)/10.0;
	}
}
void coutm(double* a, int b) {
	cout << "\n";
	for (int i=0; i < b; i++) {
		cout << a[i] << setw(4);
	}
	cout << "\n";
}
void coutm(int* a, int b) {
	cout << "\n";
	for (int i=0; i < b; i++) {
		cout << a[i] << setw(4);
	}
	cout << "\n";
}
int sum(int a, int b) {
	return a + b;
}
double sum(double a, double b) {
	return a + b;
}
int ras(int a, int b) {
	return a - b;
}
double ras(double a, double b) {
	return a - b;
}
int pro(int a, int b) {
	return a * b;
}
double pro(double a, double b) {
	return a * b;
}
int del(int a, int b) {
	return a / b;
}
double del(double a, double b) {
	return a / b;
}
