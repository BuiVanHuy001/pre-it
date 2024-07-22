#include<iostream>
using namespace std;

int TongChuSo(int n) {
	int tong = 0;
	while (n > 0) {
		tong += n % 10;
		n /= 10;
	}
	return tong;
}

void main() {
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "Tong cac chu so cua n la " << TongChuSo(n);
}