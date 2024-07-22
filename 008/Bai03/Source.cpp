#include<iostream>
using namespace std;

int TienLai(int tienGoc, float laiSuat) {
	return tienGoc * laiSuat / 100;
}

int SoTienRut(int tienGoc, float laiSuat, int nam) {
	for (int i = 1; i <= nam; i++) {
		tienGoc += TienLai(tienGoc, laiSuat);
	}
	return tienGoc;
}

int SoNamMuaNha(int tienGoc, float laiSuat, int tienNha) {
	int i = 0;
	while (SoTienRut(tienGoc, laiSuat, i) < tienNha) {
		i++;
	}
	return i;
}

void main() {
	int tienGoc, nam;
	cout << "Nhap so tien goc: ";
	cin >> tienGoc;
	cout << "Nhap so nam gui tiet kiem: ";
	cin >> nam;
	cout << "So tien rut ra duoc sau " << nam << " nam: " << SoTienRut(tienGoc, 6.3, nam) << endl;

	int dienTich;
	cout << "Nhap dien tich can nha muon mua: ";
	cin >> dienTich;
	int tienNha = dienTich * 15000000;
	cout << "Tien mua nha: " << tienNha << endl;
	int namMuaNha = SoNamMuaNha(tienGoc, 6.3, tienNha);
	cout << "So nam toi thieu can gui tiet kiem de mua nha: " << namMuaNha << endl;
	cout << "So tien rut luc do: " << SoTienRut(tienGoc, 6.3, namMuaNha);
}