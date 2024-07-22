#include<iostream>
using namespace std;
#include<string>

int FindString(string s1, string s2) {
	char c = s2[0];
	int i = 0;
	bool check = true;
	while (i < s1.length()) {
		if (s1[i] != c) {
			i++;
			continue;
		}
		check = true;
		for (int j = 0; j < s2.length(); j++) {
			if (s1[i + j] != s2[j]) {
				i++;
				check = false;
				break;
			}
		}
		if (check) {
			return i;
		}
	}
	return -1;
}

void main() {
	string s1;
	cout << "Nhap chuoi: ";
	getline(cin, s1);
	cout << "Chuoi vua nhap: " << s1 << endl;

	string s2;
	cout << "Nhap chuoi can tim: ";
	getline(cin, s2);

	cout << "Vi tri: " << FindString(s1, s2) << endl;
}