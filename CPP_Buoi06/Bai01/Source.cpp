#include<iostream>
using namespace std;

int GiaiThua(int n) {
	int kq = 1;
	for (int i = 1; i <= n; i++) {
		kq *= i;
	}
	return kq;
}

void main() {
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	cout << "n! = " << GiaiThua(n);
}