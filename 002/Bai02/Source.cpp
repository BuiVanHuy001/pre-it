#include<iostream>
using namespace std;

void main() {
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;
	int i, tong = 0;
	for (i = 1; i <= n; i++) {
		tong += i;
	}
	cout << "Tong: " << tong;
}