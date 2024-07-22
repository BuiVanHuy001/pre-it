#include<iostream>
using namespace std;
#include<string>

int TongChuSo(string s) {
	int hangChuc = s[0] - '0';
	int hangDonVi = s[1] - '0';
	return hangChuc + hangDonVi;
}

void main() {
	string s;
	cout << "Nhap so co 2 chu so: ";
	getline(cin, s);

	cout << "Tong 2 chu so: " << TongChuSo(s);
}