#include<iostream>
using namespace std;

bool KiemTraSNT(int x) {
	if (x < 2) {
		return false;
	}
	for (int i = 2; i <= x / 2; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

void NhapMang(int arr[], int n) {
	cout << "Nhap gia tri cac phan tu: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

void XuatMang(int arr[], int n) {
	for (int i = 0; i < n; i++)	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int TongViTriChan(int arr[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i += 2) {
		tong += arr[i];
	}
	return tong;
}

int DemSNT(int arr[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (KiemTraSNT(arr[i])) {
			dem++;
		}
	}
	return dem;
}

void XuatSNT(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (KiemTraSNT(arr[i])) {
			cout << arr[i] << " ";
		}
	}
	cout << endl;
}

int TimViTri(int arr[], int n, int k) {
	for (int i = 0; i < n; i++) {
		if (arr[i] == k) {
			return i;
		}
	}
	return -1;
}

void main() {
	int n;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	int* arr = new int[n];
	NhapMang(arr, n);
	cout << "Mang vua nhap la: ";
	XuatMang(arr, n);
	cout << "Tong cac phan tu o vi tri chan: " << TongViTriChan(arr, n) << endl;
	cout << "Trong mang co " << DemSNT(arr, n) << " so nguyen to la: ";
	XuatSNT(arr, n);
	int k;
	cout << "Nhap so nguyen can tim: ";
	cin >> k;
	int viTri = TimViTri(arr, n, k);
	if (viTri == -1) {
		cout << "Mang khong co so " << k;
	}
	else {
		cout << "Vi tri xuat hien dau tien cua so " << k << " trong mang la " << viTri;
	}
}