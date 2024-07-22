#include<iostream>
using namespace std;
#include<string>

int DoDaiChuoi(string s) {
	int i = 0;
	while (s[i] != '\0') {
		i++;
	}
	return i;
}

void main() {
	string s;
	cout << "Nhap chuoi: ";
	getline(cin, s);
	cout << "Do dai chuoi: " << DoDaiChuoi(s);
}