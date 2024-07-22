#include<iostream>
using namespace std;
#include<string>

struct Date {
	int day;
	int month;
	int year;
};

void Input(Date& d) {
	cin >> d.day >> d.month >> d.year;
}

void Output(Date d) {
	cout << d.day << "/" << d.month << "/" << d.year;
}

struct Customer {
	string name;
	Date regDay;
	int type;
};

void Input(Customer& c) {
	cout << "\tNhap ten: ";
	cin.ignore();
	getline(cin, c.name);
	cout << "\tNhap ngay dang ky: ";
	Input(c.regDay);
	if (c.regDay.year < 2022) {
		c.type = 1;
	}
	else {
		c.type = 2;
	}
}

void Output(Customer c) {
	cout << "\t- Ho ten: " << c.name << endl;
	cout << "\t- Ngay dang ky: ";
	Output(c.regDay);
	cout << endl;
	cout << "\t- Loai khach hang: ";
	if (c.type == 1) {
		cout << "Thuong xuyen";
	}
	else {
		cout << "Moi";
	}
	cout << endl;
}

void Input(Customer list[], int n) {
	for (int i = 0; i < n; i++)	{
		cout << "Nhap thong tin khach hang #" << i + 1 << ":" << endl;
		Input(list[i]);
	}
}

void Output(Customer list[], int n) {
	for (int i = 0; i < n; i++)	{
		cout << "Khach hang #" << i + 1 << ":" << endl;
		Output(list[i]);
	}
}

void ListCustomersJuly2022(Customer list[], int n) {
	for (int i = 0; i < n; i++)	{
		if (list[i].regDay.month == 7 && list[i].regDay.year == 2022) {
			cout << "Khach hang #" << i + 1 << ":" << endl;
			Output(list[i]);
		}
	}
}

void main() {
	int n;
	cout << "Nhap so luong khach hang: ";
	cin >> n;
	Customer* list = new Customer[n];

	Input(list, n);
	cout << "Danh sach khach hang:" << endl;
	Output(list, n);

	cout << "Danh sach khach hang dang ky thang 07/2022:" << endl;
	ListCustomersJuly2022(list, n);
}