#include<iostream>
using namespace std;

void main() {
	int thang;
	cout << "Nhap thang: ";
	cin >> thang;

	switch (thang) {
	case 1: cout << "Jan"; break;
	case 2: cout << "Feb"; break;
	case 3: cout << "Mar"; break;
	case 4: cout << "Apr"; break;
	}
}