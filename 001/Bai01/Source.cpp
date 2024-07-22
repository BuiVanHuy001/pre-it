#include<iostream>
using namespace std;

void main() {
	int x, y, z;
	cout << "Nhap 3 so nguyen: ";
	cin >> x >> y >> z;

	int max = x;
	if (y > max) {
		max = y;
	}
	if (z > max) {
		max = z;
	}
	cout << "So lon nhat la: " << max;
}