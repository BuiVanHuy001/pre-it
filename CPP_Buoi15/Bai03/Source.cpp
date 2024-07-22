#include<iostream>
using namespace std;
#include<string>

struct SinhVien {
	int maSo;
	string hoTen;
	float diemLT;
	float diemTH;
	float diemTB;
};

void Nhap(SinhVien& sv) {
	cout << "\tMa so: ";
	cin >> sv.maSo;
	cin.ignore();
	cout << "\tHo ten: ";
	getline(cin, sv.hoTen);
	cout << "\tDiem LT va diem TH: ";
	cin >> sv.diemLT >> sv.diemTH;
	sv.diemTB = (sv.diemLT + sv.diemTH) / 2;
}

void Xuat(SinhVien sv) {
	cout << sv.maSo << " - " << sv.hoTen << " - " << sv.diemLT << " - " << sv.diemTH << " - " << sv.diemTB << endl;
}

void NhapDSSV(SinhVien ds[], int n) {
	for (int i = 0; i < n; i++)	{
		cout << "Nhap sinh vien #" << i + 1 << ":" << endl;
		Nhap(ds[i]);
		system("cls");
	}
}

void XuatDSSV(SinhVien ds[], int n) {
	for (int i = 0; i < n; i++)	{
		Xuat(ds[i]);
	}
}

SinhVien SVCoDiemLTCaoNhat(SinhVien ds[], int n) {
	SinhVien max = ds[0];
	for (int i = 0; i < n; i++)	{
		if (ds[i].diemLT > max.diemLT) {
			max = ds[i];
		}
	}
	return max;
}

void DSSVRot(SinhVien ds[], int n) {
	for (int i = 0; i < n; i++)	{
		if (ds[i].diemTB < 5) {
			Xuat(ds[i]);
		}
	}
}

SinhVien TimSVTheoMaSo(SinhVien ds[], int n, int maSo) {
	for (int i = 0; i < n; i++)	{
		if (ds[i].maSo == maSo) {
			return ds[i];
		}
	}
	SinhVien sv;
	sv.maSo = -1;
	return sv;
}

void main() {
	int n;
	cout << "Nhap so luong SV: ";
	cin >> n;
	system("cls");

	SinhVien* ds = new SinhVien[n];
	NhapDSSV(ds, n);

	cout << "Danh sach SV vua nhap:" << endl;
	XuatDSSV(ds, n);

	cout << "SV co diem LT cao nhat:" << endl;
	Xuat(SVCoDiemLTCaoNhat(ds, n));

	cout << "Danh sach SV rot:" << endl;
	DSSVRot(ds, n);

	int maSo;
	cout << "Nhap ma so sinh vien can tim: ";
	cin >> maSo;
	SinhVien kq = TimSVTheoMaSo(ds, n, maSo);
	if (kq.maSo == -1) {
		cout << "Khong co SV co ma so nhu vay";
	}
	else {
		cout << "Thong tin SV can tim:" << endl;
		Xuat(kq);
	}
}