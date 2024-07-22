#include<iostream>
using namespace std;

bool KTSoTuMan(int n) {
	int tong = 0, n1 = n;
	while (n > 0) {
		tong += pow(n % 10, 3);
		n /= 10;
	}
	return tong == n1;
}

void main() {
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	if (KTSoTuMan(n)) {
		cout << "n la so tu man";
	}
	else {
		cout << "n khong phai la so tu man";
	}
}