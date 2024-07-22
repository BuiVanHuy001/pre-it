#include<iostream>
using namespace std;

void main() {
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	bool kt = true;
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			kt = false;
			break;
		}
	}
	if (kt == true) {
		cout << "n la so nguyen to";
	}
	else {
		cout << "n khong phai la so nguyen to";
	}
}