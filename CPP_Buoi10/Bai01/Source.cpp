#include<iostream>
using namespace std;

bool KTNamNhuan(int nam) {
	return (nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0;
}

int SoNgayCuaThang(int thang, int nam) {
	int ngayToiDa[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (KTNamNhuan(nam)) {
		ngayToiDa[2] = 29;
	}
	return ngayToiDa[thang];
}

bool KTHopLe(int ngay, int thang, int nam) {
	if (nam < 0) {
		return false;
	}
	if (thang < 1 || thang > 12) {
		return false;
	}
	if (ngay < 1 || ngay > SoNgayCuaThang(thang, nam)) {
		return false;
	}
	return true;
}

int STTNgay(int ngay, int thang, int nam) {
	int ngayToiDa[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (KTNamNhuan(nam)) {
		ngayToiDa[2] = 29;
	}
	int stt = 0;
	for (int i = 1; i < thang; i++) {
		stt += ngayToiDa[i];
	}
	return stt + ngay;
}

int ThuTrongTuan(int ngay, int thang) {
	int khoangCach = STTNgay(ngay, thang, 2023) - 1;
	return khoangCach % 7;
}

void main() {
	int ngay, thang, nam;
	do {
		cout << "Nhap ngay, thang, nam: ";
		cin >> ngay >> thang >> nam;
	} while (!KTHopLe(ngay, thang, nam));

	cout << "So ngay trong thang: " << SoNgayCuaThang(thang, nam) << endl;
	cout << "Day la ngay thu " << STTNgay(ngay, thang, nam) << " trong nam" << endl;
	cout << "Thu trong tuan: ";
	switch (ThuTrongTuan(ngay, thang)) {
	case 0: cout << "Chu Nhat"; break;
	case 1: cout << "Thu Hai"; break;
	case 2: cout << "Thu Ba"; break;
	case 3: cout << "Thu Tu"; break;
	case 4: cout << "Thu Nam"; break;
	case 5: cout << "Thu Sau"; break;
	case 6: cout << "Thu Bay"; break;
	}
}