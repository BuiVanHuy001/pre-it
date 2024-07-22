#include<iostream>
using namespace std;

void main() {
	int a, b;
	cout << "Nhap 2 he so a va b: ";
	cin >> a >> b;

	/*if (a == 0 && b == 0) {
		cout << "PT vo so nghiem";
	}
	if (a == 0 && b != 0) {
		cout << "PT vo nghiem";
	}
	if (a != 0) {
		cout << "PT co nghiem x = " << -b / a;
	}*/

	if (a == 0) {
		if (b == 0) {
			cout << "PT vo so nghiem";
		}
		else {
			cout << "PT vo nghiem";
		}
	}
	else {
		cout << "PT co nghiem x = " << -b / (float)a;
	}
}