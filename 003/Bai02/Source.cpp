#include<iostream>
using namespace std;

void main() {
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	int tong = 0;

	while (n > 0) {
		tong += n % 10;
		n /= 10;
	}
	cout << "Tong cac chu so: " << tong;
}