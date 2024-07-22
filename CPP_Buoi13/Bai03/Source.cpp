#include<iostream>
using namespace std;
#include<string>

string ThayThe(string& s1, string s2, int viTri) {
	int i = viTri, j = 0;
	while (i < s1.length() && j < s2.length()) {
		s1[i] = s2[j];
		i++;
		j++;
	}
	return s1;
}

void main() {
	string s1, s2;
	cout << "Nhap chuoi ban dau: ";
	getline(cin, s1);
	do {
		cout << "Nhap chuoi thay the: ";
		getline(cin, s2);
	} while (s2.length() > s1.length());

	int viTri;
	cout << "Nhap vi tri thay the: ";
	cin >> viTri;

	ThayThe(s1, s2, viTri);
	cout << "Chuoi sau khi thay the: " << s1;
}