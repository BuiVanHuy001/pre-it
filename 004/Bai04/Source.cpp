#include<iostream>
using namespace std;

bool KTSNT(int x) {
	if (x <= 1) {
		return false;
	}
	for (int i = 2; i <= x / 2; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

void main() {
	int x;
	cout << "Nhap so nguyen x: ";
	cin >> x;

	if (KTSNT(x)) {
		cout << "x la so nguyen to";
	}
	else {
		cout << "x khong phai la so nguyen to";
	}
}