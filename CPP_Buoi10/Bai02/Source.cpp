#include<iostream>
using namespace std;

void NhapMang(int arr[], int n) {
	for (int i = 0; i < n; i++)	{
		cin >> arr[i];
	}
}

void XuatMang(int arr[], int n) {
	for (int i = 0; i < n; i++)	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

float TBC(int arr[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++)	{
		tong += arr[i];
	}
	return (float)tong / n;
}

int SoChanNhoNhat(int arr[], int n) {
	int min = arr[0];
	for (int i = 0; i < n; i++)	{
		if (arr[i] % 2 == 0) {
			if (min % 2 != 0) {
				min = arr[i];
			}
			else if (arr[i] < min) {
				min = arr[i];
			}
		}
	}
	if (min % 2 != 0) {
		return 0;
	}
	return min;
}

bool KTSoChinhPhuong(int x) {
	return sqrt(x) == (int)sqrt(x);
}

int ViTriSoChinhPhuongDauTien(int arr[], int n) {
	for (int i = 0; i < n; i++)	{
		if (KTSoChinhPhuong(arr[i])) {
			return i;
		}
	}
	return -1;
}

void SapXepGiamDan(int arr[], int n) {
	for (int i = 0; i < n; i++)	{
		for (int j = i + 1; j < n; j++) {
			if (arr[i] < arr[j]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void ThemPhanTu(int arr[], int& n, int giaTri, int viTri) {
	for (int i = n - 1; i >= viTri; i--) {
		arr[i + 1] = arr[i];
	}
	arr[viTri] = giaTri;
	n++;
}

void XoaPhanTu(int arr[], int& n, int viTri) {
	for (int i = viTri; i < n - 1; i++)	{
		arr[i] = arr[i + 1];
	}
	n--;
}

void main() {
	int n;
	do {
		cout << "Nhap so nguyen duong n (5-10): ";
		cin >> n;
	} while (!(n >= 5 && n <= 10));
	int* arr = new int[n + 1];

	cout << "Nhap mang: ";
	NhapMang(arr, n);
	cout << "Mang vua nhap la: ";
	XuatMang(arr, n);

	cout << "Trung binh cong: " << TBC(arr, n) << endl;
	int min = SoChanNhoNhat(arr, n);
	if (min == 0) {
		cout << "Mang khong co so chan" << endl;
	}
	else {
		cout << "So chan nho nhat: " << min << endl;
	}

	SapXepGiamDan(arr, n);
	cout << "Mang sau khi sap xep giam dan: ";
	XuatMang(arr, n);

	ThemPhanTu(arr, n, 9, 3);
	cout << "Mang sau khi them so 9 vao vi tri 3: ";
	XuatMang(arr, n);

	for (int i = 1; i <= 3; i++)	{
		XoaPhanTu(arr, n, 0);
	}
	cout << "Mang sau khi xoa 3 so dau tien: ";
	XuatMang(arr, n);
}