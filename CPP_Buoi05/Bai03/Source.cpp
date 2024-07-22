#include<iostream>
using namespace std;

int UCLN(int a, int b) {
	a = abs(a);
	b = abs(b);
	if (a * b == 0) {
		return a + b;
	}
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	return a;
}

void main() {
	int x, y;
	cout << "Nhap 2 so nguyen: ";
	cin >> x >> y;
	cout << "UCLN cua 2 so: " << UCLN(x, y);
}

