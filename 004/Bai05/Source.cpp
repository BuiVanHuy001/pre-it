#include<iostream>
using namespace std;

void GiaiPTBac2(float a, float b, float c) {
	if (a == 0) {
		cout << "Khong phat PT bac 2";
		return;
	}
	float delta = b * b - 4 * a * c;
	if (delta < 0) {
		cout << "PT vo nghiem";
	}
	else if (delta == 0) {
		cout << "PT co nghiem kep x = " << -b / (2 * a);
	}
	else {
		float x1 = (-b + sqrt(delta)) / (2 * a);
		float x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "PT co nghiem x1 = " << x1 << " va x2 = " << x2;
	}
}

void main() {
	float a, b, c;
	cout << "Nhap 3 he so a, b, c: ";
	cin >> a >> b >> c;

	GiaiPTBac2(a, b, c);
}