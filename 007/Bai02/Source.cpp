#include<iostream>
using namespace std;

void HoanVi(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void NhapMang(int arr[], int n) {
	cout << "Nhap gia tri cac phan tu: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

void XuatMang(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void SapXep(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				HoanVi(arr[i], arr[j]);
			}
		}
	}
}

void main() {
	int n;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	int* arr = new int[n];

	NhapMang(arr, n);

	cout << "Mang truoc khi sap xep la: ";
	XuatMang(arr, n);

	SapXep(arr, n);

	cout << "Mang sau khi sap xep la: ";
	XuatMang(arr, n);
}