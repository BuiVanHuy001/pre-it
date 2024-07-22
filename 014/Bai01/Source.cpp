#include<iostream>
using namespace std;

void TaoMang(int a[], int n) {
	for (int i = 0; i < n; i++)	{
		a[i] = 2 * i + 1;
	}
}
void XuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void ThemPhanTu(int a[], int& n, int x) {
	int viTri = 0;
	while (a[viTri] <= x && viTri < n) {
		viTri++;
	}
	for (int i = n - 1; i >= viTri; i--)	{
		a[i + 1] = a[i];
	}
	a[viTri] = x;
	n++;
}

void XoaCuoi(int a[], int& n, int m) {
	n = n - m;
}

void main() {
	int n;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	int* a = new int[n + 1];

	TaoMang(a, n);
	cout << "Mang can tao: ";
	XuatMang(a, n);

	int x;
	cout << "Nhap gia tri can them: ";
	cin >> x;
	ThemPhanTu(a, n, x);
	cout << "Mang sau khi them: ";
	XuatMang(a, n);

	int m;
	cout << "Nhap so luong phan tu muon xoa o cuoi mang: ";
	cin >> m;
	XoaCuoi(a, n, m);
	cout << "Mang sau khi xoa: ";
	XuatMang(a, n);
}