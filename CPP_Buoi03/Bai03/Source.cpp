#include<iostream>
using namespace std;

void main() {
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	int dem = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			dem++;
		}
	}
	cout << "So luong so chan: " << dem;
}