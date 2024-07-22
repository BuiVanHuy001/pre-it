#include<iostream>
using namespace std;

bool KTNamNhuan(int nam) {
	return (nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0;
}

int STTNgay(int ngay, int thang, int nam) {
	int kq = 0;
	switch (thang) {
	case 12: kq += 30;
	case 11: kq += 31;
	case 10: kq += 30;
	case 9: kq += 31;
	case 8: kq += 31;
	case 7: kq += 30;
	case 6: kq += 31;
	case 5: kq += 30;
	case 4: kq += 31;
	case 3: kq += 28;
	case 2: kq += 31;
	default: kq += ngay;
	}
	if (KTNamNhuan(nam) && thang >= 3) {
		kq++;
	}
	return kq;
}

void main() {
	int ngay, thang, nam;
	cout << "Nhap ngay, thang, nam: ";
	cin >> ngay >> thang >> nam;

	cout << "STT ngay trong nam: " << STTNgay(ngay, thang, nam);
}