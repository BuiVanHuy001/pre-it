#include<iostream>
using namespace std;
#include<string>

int FindChar(string s, char c) {
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == c) {
			return i;
		}
	}
	return -1;
}

int FindCharLast(string s, char c) {
	for (int i = s.length() - 1; i >= 0; i--) {
		if (s[i] == c) {
			return i;
		}
	}
	return -1;
}

int CountChar(string s, char c) {
	int dem = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == c) {
			dem++;
		}
	}
	return dem;
}

void main() {
	string s;
	cout << "Nhap chuoi: ";
	getline(cin, s);
	cout << "Chuoi vua nhap: " << s << endl;

	char c;
	cout << "Nhap 1 ki tu: ";
	cin >> c;

	int dem = CountChar(s, c);
	cout << "So lan xuat hien ki tu: " << dem << endl;
	if (dem > 0) {
		cout << "Vi tri xuat hien dau tien: " << FindChar(s, c) << endl;
		cout << "Vi tri xuat hien cuoi cung: " << FindCharLast(s, c) << endl;
	}
}