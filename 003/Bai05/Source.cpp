#include<iostream>
using namespace std;

void main() {
	int n;
	do {
		cout << "Nhap so nguyen duong n: ";
		cin >> n;
	} while (n <= 0);

	int tong = 0;
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			tong += i;
		}
	}
	if (tong == n) {
		cout << "n la so hoan thien";
	}
	else {
		cout << "n khong phai la so hoan thien";
	}
}