#include<iostream>
using namespace std;

void main() {
	int arr[10];
	for (int i = 0; i < 10; i++) {
		cout << "Nhap phan tu thu " << i << ": ";
		cin >> arr[i];
	}
	int tong = 0;
	cout << "Mang vua nhap la: ";
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
		tong += arr[i];
	}
	cout << endl;
	cout << "Tong: " << tong;
}