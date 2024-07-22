#include<iostream>
using namespace std;

void main() {
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	int dem = 0, tong = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			dem++;
			tong += i;
		}
	}
	cout << "So luong uoc so: " << dem << endl;
	cout << "Tong cac uoc so: " << tong;
}