#include<iostream>
using namespace std;
#include<string>

struct SanPham {
	int maSo;
	string ten;
	int giaTien;
	int tonKho;
};

struct KhoHang {
	int soLuong;
	SanPham* dssp;
};

bool KTMaSoTonTai(KhoHang k, int maSo) {
	for (int i = 0; i < k.soLuong; i++) {
		if (k.dssp[i].maSo == maSo) {
			return true;
		}
	}
	return false;
}

void Nhap(KhoHang& k) {
	do {
		cout << "Nhap so luong san pham: ";
		cin >> k.soLuong;
	} while (!(k.soLuong >= 0 && k.soLuong <= 20));
	k.dssp = new SanPham[k.soLuong];
	for (int i = 0; i < k.soLuong; i++) {
		system("cls");
		cout << "Nhap thong tin san pham #" << i + 1 << ":" << endl;
		
		// Nhập mã số
		int maSoTam;
		do {
			cout << "\tMa so: ";
			cin >> maSoTam;
		} while (KTMaSoTonTai(k, maSoTam));
		k.dssp[i].maSo = maSoTam;

		// Nhập tên
		cin.ignore();
		cout << "\tTen: ";
		getline(cin, k.dssp[i].ten);

		// Nhập giá tiền và tồn kho
		do {
			cout << "\tGia tien: ";
			cin >> k.dssp[i].giaTien;
		} while (!(k.dssp[i].giaTien >= 0 && k.dssp[i].giaTien <= 50000000));
		do {
			cout << "\tTon kho: ";
			cin >> k.dssp[i].tonKho;
		} while (!(k.dssp[i].tonKho >= 0 && k.dssp[i].tonKho <= 1000));
		system("cls");
	}
}

void Xuat(SanPham sp) {
	cout << "\tMa so: " << sp.maSo << endl;
	cout << "\tTen: " << sp.ten << endl;
	cout << "\tGia tien: " << sp.giaTien << endl;
	cout << "\tTon kho: " << sp.tonKho << endl;
}

void Xuat(KhoHang k) {
	for (int i = 0; i < k.soLuong; i++) {
		cout << "San pham #" << i + 1 << ":" << endl;
		Xuat(k.dssp[i]);
	}
}

SanPham SPGiaCaoNhat(KhoHang k) {
	SanPham max = k.dssp[0];
	for (int i = 0; i < k.soLuong; i++) {
		if (k.dssp[i].giaTien > max.giaTien) {
			max = k.dssp[i];
		}
	}
	return max;
}

void SPSapHetHang(KhoHang k) {
	for (int i = 0; i < k.soLuong; i++)	{
		if (k.dssp[i].tonKho < 10) {
			Xuat(k.dssp[i]);
		}
	}
}

int TongTienHang(KhoHang k) {
	int tong = 0;
	for (int i = 0; i < k.soLuong; i++) {
		tong += k.dssp[i].giaTien * k.dssp[i].tonKho;
	}
	return tong;
}

void Menu() {
	cout << "1. Nhap kho hang" << endl;
	cout << "2. Xuat kho hang" << endl;
	cout << "3. San pham gia cao nhat" << endl;
	cout << "4. San pham sap het hang" << endl;
	cout << "5. Tong tien hang" << endl;
	cout << "6. Thoat" << endl;
	cout << "Nhap lua chon cua ban: ";
}

void main() {
	KhoHang k;

	while (true) {
		Menu();
		int luaChon;
		cin >> luaChon;
		switch (luaChon) {
		case 1: Nhap(k); break;
		case 2: Xuat(k); break;
		case 3: Xuat(SPGiaCaoNhat(k)); break;
		case 4: SPSapHetHang(k); break;
		case 5: cout << TongTienHang(k); break;
		case 6: return;
		}
	}
}