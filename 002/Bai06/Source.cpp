#include<iostream>
using namespace std;

void main() {
	int a, b;
	cout << "Nhap 2 so nguyen duong: ";
	cin >> a >> b;
	int bcnn = a;
	while (bcnn % a != 0 || bcnn % b != 0) {
		bcnn++;
	}
	cout << "BCNN = " << bcnn;
}