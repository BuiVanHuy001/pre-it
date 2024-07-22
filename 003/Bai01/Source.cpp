#include<iostream>
using namespace std;

void main() {
	int n;
	cout << "Nhap so nguyen duong n: ";
	cin >> n;

	int s0 = 0, s1 = 0, s4 = 0;
	float s2 = 0, s3 = 0;

	for (int i = 1; i <= n; i++) {
		s0 += i;
		s1 += pow(i, 2);
		s2 += 1.0 / i;
		s3 = i / (i + 1.0);
		s4 += s0;
	}

	cout << "S1 = " << s1 << endl;
	cout << "S2 = " << s2 << endl;
	cout << "S3 = " << s3 << endl;
	cout << "S4 = " << s4 << endl;
}