// MSSV: 1612112
// Họ và tên: Lê Minh Đức
// Email: 1612112@student.hcmus.edu.vn / duc1612112@gmail.com

#include "mangphanso.h"

void main()
{
	PHANSO* a;
	int n;
	cout << "NHAP MANG PHAN SO" << endl;
	cout << "Nhap so phan tu cua mang phan so: ";
	cin >> n;
	a = (PHANSO*)malloc(n * sizeof(PHANSO));
	if (a == NULL) {
		return;
	}
	NhapMangPhanSo(a, n);

	cout << endl << "XUAT MANG PHAN SO" << endl;
	XuatMangPhanSo(a, n);

	cout << endl << "THEM PHAN TU VAO CUOI MANG" << endl;
	PHANSO p;
	cout << "Nhap phan so can them: " << endl;
	cin >> p;
	ChenPhanSoVaoCuoiMang(a, n, p);
	cout << "Mang phan so sau khi them la: ";
	XuatMangPhanSo(a, n);

	cout << endl << "XOA PHAN TU O CUOI MANG" << endl;
	XoaPhanSoCuoiMang(a, n);
	cout << "Mang phan so sau khi da xoa phan tu cuoi mang: ";
	XuatMangPhanSo(a, n);

	cout << endl << "HUY MANG PHAN SO" << endl;
	HuyMangPhanSo(a);
	cout << "Mang phan so sau khi da huy: ";
	XuatMangPhanSo(a, n);
}
