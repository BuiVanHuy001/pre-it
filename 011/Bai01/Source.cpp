#include<iostream>
using namespace std;

struct PhanSo {
	// Thuộc tính/Trường dữ liệu - Field
	int tuSo;
	int mauSo;
};

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

void Nhap(PhanSo& p) {
	cin >> p.tuSo >> p.mauSo;
}

void Xuat(PhanSo p) {
	if (p.mauSo == 1) {
		cout << p.tuSo;
	}
	else {
		cout << p.tuSo << "/" << p.mauSo;
	}
}

PhanSo RutGon(PhanSo& p) {
	int ucln = UCLN(p.tuSo, p.mauSo);
	p.tuSo /= ucln;
	p.mauSo /= ucln;
	return p;
}

PhanSo Cong(PhanSo p1, PhanSo p2) {
	PhanSo kq;
	kq.tuSo = p1.tuSo * p2.mauSo + p1.mauSo * p2.tuSo;
	kq.mauSo = p1.mauSo * p2.mauSo;
	return RutGon(kq);
}

PhanSo Tru(PhanSo p1, PhanSo p2) {
	PhanSo kq;
	kq.tuSo = p1.tuSo * p2.mauSo - p1.mauSo * p2.tuSo;
	kq.mauSo = p1.mauSo * p2.mauSo;
	return RutGon(kq);
}

PhanSo Nhan(PhanSo p1, PhanSo p2) {
	PhanSo kq;
	kq.tuSo = p1.tuSo * p2.tuSo;
	kq.mauSo = p1.mauSo * p2.mauSo;
	return RutGon(kq);
}

PhanSo Chia(PhanSo p1, PhanSo p2) {
	PhanSo kq;
	kq.tuSo = p1.tuSo * p2.mauSo;
	kq.mauSo = p1.mauSo * p2.tuSo;
	return RutGon(kq);
}

void main() {
	PhanSo a, b;
	cout << "Nhap phan so #1: ";
	Nhap(a);
	cout << "Nhap phan so #2: ";
	Nhap(b);

	cout << "Tong: ";
	Xuat(Cong(a, b));
	cout << endl;

	cout << "Hieu: ";
	Xuat(Tru(a, b));
	cout << endl;

	cout << "Tich: ";
	Xuat(Nhan(a, b));
	cout << endl;

	cout << "Thuong: ";
	Xuat(Chia(a, b));
	cout << endl;
}