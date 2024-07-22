#include<iostream>
using namespace std;
#include<string>

string VietHoa(string s) {
	int n = s.length();
	for (int i = 0; i < n; i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] -= 32;
		}
	}
	return s;
}

string VietThuong(string s) {
	int n = s.length();
	for (int i = 0; i < n; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += 32;
		}
	}
	return s;
}

string VietChuan(string s) {
	s = VietThuong(s);
	int n = s.length();
	s[0] -= 32;
	for (int i = 1; i < n; i++) {
		if (s[i - 1] == ' ') {
			s[i] -= 32;
		}
	}
	return s;
}

void main() {
	string s;
	cout << "Nhap chuoi: ";
	getline(cin, s);
	cout << "Viet hoa: " << VietHoa(s) << endl;
	cout << "Viet thuong: " << VietThuong(s) << endl;
	cout << "Viet chuan: " << VietChuan(s) << endl;
}