#include<iostream>
using namespace std;

void main() {
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	int k = 0, tong = 0;
	do {
		k++;
		tong += k;
	} while (tong <= n);
	cout << "k can tim la: " << k - 1;
}