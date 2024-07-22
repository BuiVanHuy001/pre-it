#include<iostream>
using namespace std;
#include<string>

void ThongBaoNgay(string s) {
	cout << "Hom nay la ngay " << s.substr(0, 2) << " thang " << s.substr(3, 2) << " nam " << s.substr(6, 4);
}

void main() {
	string s;
	cout << "Nhap ngay (dd/mm/yyyy): ";
	getline(cin, s);

	ThongBaoNgay(s);
}