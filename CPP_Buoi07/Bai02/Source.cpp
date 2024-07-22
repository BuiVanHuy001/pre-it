#include<iostream>
using namespace std;

void main() {
	int n;
	cout << "Nhap so luong phan tu: ";
	cin >> n;

	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i << ": ";
		cin >> arr[i];
	}
	int tong = 0, max = arr[0], min = arr[0], dem = 0;
	cout << "Mang vua nhap: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
		tong += arr[i];
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] % 2 == 0) {
			dem++;
		}
	}
	cout << endl;
	cout << "Tong: " << tong << endl;
	cout << "So lon nhat: " << max << endl;
	cout << "So nho nhat: " << min << endl;
	cout << "So luong so chan: " << dem << endl;
}