#include<iostream>
using namespace std;

void main() {
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	int m = 0, n1 = n;
	while (n > 0) {
		m = m * 10 + n % 10;
		n /= 10;
	}
	cout << "So dao nguoc: " << m << endl;
	if (m == n1) {
		cout << "n la so doi xung";
	}
	else {
		cout << "n khong phai la so doi xung";
	}
}