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

int DemSNT(int n) {
	int dem = 0;
	for (int i = 1; i <= n; i++) {
		if (KTSNT(i)) {
			dem++;
		}
	}
	return dem;
}

void main() {
	int n;
	cout << "Nhap so nguyen n: ";
	cin >> n;

	cout << "So luong SNT tu 1 -> n la " << DemSNT(n);
}