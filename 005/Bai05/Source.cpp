#include<iostream>
using namespace std;

bool KTTamGiac(float a, float b, float c) {
	return a > abs(b - c) && a < b + c &&
		   b > abs(c - a) && b < c + a &&
		   c > abs(a - b) && c < a + b;
}

float ChuVi(float a, float b, float c) {
	return a + b + c;
}

float DienTich(float a, float b, float c) {
	float p = ChuVi(a, b, c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

bool KTTamGiacVuong(float a, float b, float c) {
	return a * a == b * b + c * c ||
		b * b == c * c + a * a ||
		c * c == a * a + b * b;
}

void main() {
	float a, b, c;
	cout << "Nhap 3 so duong a, b, c: ";
	cin >> a >> b >> c;

	if (!KTTamGiac(a, b, c)) {
		cout << "a, b, c khong tao thanh tam giac";
		return;
	}
	cout << "Chu vi: " << ChuVi(a, b, c) << endl;
	cout << "Dien tich: " << DienTich(a, b, c) << endl;
	if (KTTamGiacVuong(a, b, c)) {
		cout << "Tam giac vuong";
	}
	else {
		cout << "Khong phai tam giac vuong";
	}
}