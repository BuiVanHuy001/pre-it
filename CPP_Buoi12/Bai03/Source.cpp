#include<iostream>
using namespace std;
#include<string>

int SoSanhChuoi(string s1, string s2) {
	int n = s1.length();
	for (int i = 0; i <= n; i++) {
		if (s1[i] > s2[i]) {
			return 1;
		}
		if (s1[i] < s2[i]) {
			return -1;
		}
	}
	return 0;
}

void main() {
	string s1, s2;
	cout << "Nhap chuoi #1: ";
	getline(cin, s1);
	cout << "Nhap chuoi #2: ";
	getline(cin, s2);
	
	switch (SoSanhChuoi(s1, s2)) {
	case 0: cout << "S1 = S2"; break;
	case 1: cout << "S1 > S2"; break;
	case -1: cout << "S1 < S2"; break;
	}
}