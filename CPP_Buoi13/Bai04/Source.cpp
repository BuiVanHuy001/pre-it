#include<iostream>
using namespace std;
#include<string>

bool KTDoiXung(string s) {
	int i = 0, j = s.length() - 1;
	while (i <= j) {
		if (s[i] == s[j]) {
			i++;
			j--;
		}
		else {
			return false;
		}
	}
	return true;
}

void main() {
	string s;
	cout << "Nhap chuoi: ";
	getline(cin, s);

	if (KTDoiXung(s)) {
		cout << "Doi xung";
	}
	else {
		cout << "Khong doi xung";
	}
}