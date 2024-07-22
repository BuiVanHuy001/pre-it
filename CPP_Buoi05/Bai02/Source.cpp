#include<iostream>
using namespace std;

int TinhTong(int x, int y) {
	int tong = 0;
	for (int i = x; i <= y; i++) {
		tong += i;
	}
	return tong;
}

void main() {
	int x, y;
	cout << "Nhap so nguyen x va y: ";
	cin >> x >> y;
	cout << "Tong x -> y la " << TinhTong(x, y) << endl;
}

