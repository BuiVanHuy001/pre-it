#include<iostream>
using namespace std;

int TinhTong(int x) {
	int tong = 0, y = 5;
	for (int i = 1; i <= x; i++) {
		tong += i;
	}
	return tong;
}

void main() {
	int x;
	cout << "Nhap so nguyen x: ";
	cin >> x;
	cout << "Tong 1 -> x la " << TinhTong(x) << endl;
}