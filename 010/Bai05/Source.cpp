#include<iostream>
using namespace std;
#include<string>

void TachHoTen(string hoTen) {
	int i;
	for (i = hoTen.length() - 1; i >= 0; i--) {
		if (hoTen[i] == ' ') {
			break;
		}
	}
	cout << "Ho: " << hoTen.substr(0, i) << endl;
	cout << "Ten: " << hoTen.substr(i + 1, hoTen.length() - i - 1);
}

void main() {
	string s;
	cout << "Nhap ho ten: ";
	getline(cin, s);

	TachHoTen(s);
}