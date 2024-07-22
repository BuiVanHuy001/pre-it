#include<iostream>
using namespace std;

void main() {
	int thang, nam;
	cout << "Nhap thang va nam: ";
	cin >> thang >> nam;

	switch (thang) {
	case 2:
		if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {
			cout << "29 ngay";
		}
		else {
			cout << "28 ngay";
		}
		break;
	case 4:
	case 6:
	case 9:
	case 11: cout << "30 ngay"; break;
	default: cout << "31 ngay";
	}
}