#include<iostream>
using namespace std;

void main() {
	int thang;
	cout << "Nhap thang: ";
	cin >> thang;

	switch (thang) {
	case 1:
	case 2:
	case 3: cout << "Mua Xuan"; break;
	case 4:
	case 5:
	case 6: cout << "Mua He"; break;
	case 7:
	case 8:
	case 9: cout << "Mua Thu"; break;
	default: cout << "Mua Dong";
	}
}