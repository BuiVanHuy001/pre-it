#include<iostream>
using namespace std;

struct PhanSo {
	int tuSo;
	int mauSo;
};

void Nhap(PhanSo& p) {
	cin >> p.tuSo >> p.mauSo;
}

void Xuat(PhanSo p) {
	cout << p.tuSo << "/" << p.mauSo;
}

PhanSo Cong(PhanSo p1, PhanSo p2) {
	PhanSo kq;
	kq.tuSo = p1.tuSo * p2.mauSo + p1.mauSo * p2.tuSo;
	kq.mauSo = p1.mauSo * p2.mauSo;
	return kq;
}

int SoSanh(PhanSo p1, PhanSo p2) {
	return p1.tuSo * p2.mauSo - p1.mauSo * p2.tuSo;
}

void NhapMangPS(PhanSo arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan so #" << i + 1 << ": ";
		Nhap(arr[i]);
	}
}

void XuatMangPS(PhanSo arr[], int n) {
	for (int i = 0; i < n; i++) {
		Xuat(arr[i]);
		cout << endl;
	}
}

PhanSo TinhTong(PhanSo arr[], int n) {
	PhanSo tong;
	tong.tuSo = 0;
	tong.mauSo = 1;
	for (int i = 0; i < n; i++) {
		tong = Cong(tong, arr[i]);
	}
	return tong;
}

PhanSo TimLonNhat(PhanSo arr[], int n) {
	PhanSo max = arr[0];
	for (int i = 0; i < n; i++)	{
		if (SoSanh(arr[i], max) > 0) {
			max = arr[i];
		}
	}
	return max;
}

void main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;

	PhanSo* arr = new PhanSo[n];
	NhapMangPS(arr, n);

	cout << "Danh sach phan so vua nhap: " << endl;
	XuatMangPS(arr, n);

	cout << "Tong tat ca phan so: ";
	Xuat(TinhTong(arr, n));
	cout << endl;

	cout << "Phan so lon nhat: ";
	Xuat(TimLonNhat(arr, n));
}