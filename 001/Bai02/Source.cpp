#include<iostream>
using namespace std;

void main() {
	int luong;
	cout << "Nhap luong: ";
	cin >> luong;

	int thue;
	if (luong >= 15000000) {
		thue = luong * 0.3;
	}
	else if (luong >= 7000000) {
		thue = luong * 0.2;
	}
	else {
		thue = luong * 0.1;
	}
	cout << "Thue TNCN: " << thue << endl;
	cout << "Luong thuc nhan: " << luong - thue << endl;
}