#include<iostream>
using namespace std;

bool KTSNT(int n) {
	if (n <= 1) {
		return false;
	}
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void PhanTich(int n) {
	int i = 2;
	while (n > 1) {
		while (!(KTSNT(i) && n % i == 0)) {
			i++;
		}
		cout << i << " ";
		n = n / i;
	}
}

void main() {
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	PhanTich(n);
}