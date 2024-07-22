#include<iostream>
using namespace std;

struct Diem {
	float x;
	float y;
};

// Các hàm về Diem
void Nhap(Diem& d) {
	cin >> d.x >> d.y;
}

void Xuat(Diem d) {
	cout << "(" << d.x << ", " << d.y << ")";
}

float KhoangCach(Diem d1, Diem d2) {
	return sqrt(pow(d1.x - d2.x, 2) + pow(d1.y - d2.y, 2));
}

/////////////////////////////

struct TamGiac {
	Diem A;
	Diem B;
	Diem C;
};

// Các hàm về TamGiac
void Nhap(TamGiac& t) {
	cout << "Nhap dinh A: ";
	Nhap(t.A);
	cout << "Nhap dinh B: ";
	Nhap(t.B);
	cout << "Nhap dinh C: ";
	Nhap(t.C);
}

void Xuat(TamGiac t) {
	Xuat(t.A);
	cout << ", ";
	Xuat(t.B);
	cout << ", ";
	Xuat(t.C);
	cout << endl;
}

float ChuVi(TamGiac t) {
	return KhoangCach(t.A, t.B) + KhoangCach(t.B, t.C) + KhoangCach(t.C, t.A);
}

float DienTich(TamGiac t) {
	float p = ChuVi(t) / 2;
	float AB = KhoangCach(t.A, t.B);
	float BC = KhoangCach(t.B, t.C);
	float CA = KhoangCach(t.C, t.A);
	return sqrt(p * (p - AB) * (p - BC) * (p - CA));
}

void main() {
	TamGiac t;
	cout << "Nhap thong tin tam giac:" << endl;
	Nhap(t);

	cout << "3 dinh cua tam giac: ";
	Xuat(t);

	cout << "Chu vi: " << ChuVi(t) << endl;
	cout << "Dien tich: " << DienTich(t) << endl;
}