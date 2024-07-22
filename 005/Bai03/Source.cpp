#include<iostream>
using namespace std;

int DaoNguoc(int n) {
	int kq = 0;
	while (n > 0) {
		kq = kq * 10 + n % 10;
		n /= 10;
	}
	return kq;
}

void main() {
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "So dao nguoc cua n la " << DaoNguoc(n);
}