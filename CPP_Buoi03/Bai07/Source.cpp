#include<iostream>
using namespace std;

void main() {
	int a, b;
	cout << "Nhap 2 so nguyen duong: ";
	cin >> a >> b;
	
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	cout << "UCLN: " << a;
}