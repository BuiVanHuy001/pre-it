#include<iostream>
using namespace std;

void HoanVi(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void main() {
	int a = 5, b = 9;
	cout << "Truoc khi hoan vi: " << a << " " << b << endl;
	HoanVi(a, b);
	cout << "Sau khi hoan vi: " << a << " " << b << endl;
}