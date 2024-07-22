#include<iostream>
using namespace std;
#include<string>

int CharToInt(char c) {
	return c - '0';
}

void main() {
	string ip;
	cout << "Nhap dia chi IP: ";
	getline(cin, ip);
	int tong = 0;
	int giaTri = 0;
	for (int i = 0; i < ip.length(); i++) {
		if (ip[i] != '.') {
			giaTri = giaTri * 10 + CharToInt(ip[i]);
		}
		else {
			tong += giaTri;
			giaTri = 0;
		}
	}
	tong += giaTri;
	cout << "Tong cac gia tri IP: " << tong;
}