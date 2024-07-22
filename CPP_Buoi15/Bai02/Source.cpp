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

void NhapDaGiac(Diem daGiac[], int n) {
	for (int i = 0; i < n; i++)	{
		cout << "Nhap toa do dinh #" << i + 1 << ": ";
		Nhap(daGiac[i]);
	}
}

void XuatDaGiac(Diem daGiac[], int n) {
	for (int i = 0; i < n; i++)	{
		Xuat(daGiac[i]);
		cout << endl;
	}
}

float ChuVi(Diem daGiac[], int n) {
	float chuVi = 0;
	for (int i = 0; i < n - 1; i++)	{
		chuVi += KhoangCach(daGiac[i], daGiac[i + 1]);
	}
	chuVi += KhoangCach(daGiac[0], daGiac[n - 1]);
	return chuVi;
}

void main() {
	int n;
	cout << "Nhap so dinh cua da giac: ";
	cin >> n;

	Diem* daGiac = new Diem[n];
	NhapDaGiac(daGiac, n);

	cout << "Danh sach cac dinh: " << endl;
	XuatDaGiac(daGiac, n);

	cout << "Chu vi: " << ChuVi(daGiac, n);
}