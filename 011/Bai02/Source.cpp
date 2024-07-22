#include<iostream>
using namespace std;

struct Diem {
	float x;
	float y;
};

void Nhap(Diem& d) {
	cin >> d.x >> d.y;
}

void Xuat(Diem d) {
	cout << "(" << d.x << ", " << d.y << ")";
}

float KhoangCach(Diem d1, Diem d2) {
	return sqrt(pow(d1.x - d2.x, 2) + pow(d1.y - d2.y, 2));
}

void main() {
	Diem A, B;
	cout << "Nhap diem A: ";
	Nhap(A);
	cout << "Nhap diem B: ";
	Nhap(B);

	cout << "2 diem vua nhap la: ";
	Xuat(A);
	cout << ", ";
	Xuat(B);
	cout << endl;

	cout << "Khoang cach 2 diem: " << KhoangCach(A, B);
}