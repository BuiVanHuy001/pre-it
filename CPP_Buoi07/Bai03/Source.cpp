#include<iostream>
using namespace std;

void NhapMang(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i << ": ";
		cin >> arr[i];
	}
}

void XuatMang(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int TinhTong(int arr[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		tong += arr[i];
	}
	return tong;
}

int TimMax(int arr[], int n) {
	int max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int TimMin(int arr[], int n) {
	int min = arr[0];
	for (int i = 0; i < n; i++)	{
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

int DemSoChan(int arr[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			dem++;
		}
	}
	return dem;
}

void main() {
	int n;
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	int* arr = new int[n];
	NhapMang(arr, n);
	cout << "Mang vua nhap la: ";
	XuatMang(arr, n);
	cout << "Tong: " << TinhTong(arr, n) << endl;
	cout << "So lon nhat: " << TimMax(arr, n) << endl;
	cout << "So nho nhat: " << TimMin(arr, n) << endl;
	cout << "So luong so chan: " << DemSoChan(arr, n) << endl;
}