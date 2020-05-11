#include "mangphanso.h"

void NhapMangPhanSo(PHANSO*& a, int& n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan so thu " << i << ": " << endl;
		cin >> a[i];
	}
}

void XuatMangPhanSo(PHANSO*& a, int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void HuyMangPhanSo(PHANSO*& a) {
	free(a);
}

void ChenPhanSoVaoCuoiMang(PHANSO*& a, int& n, PHANSO p) {
	int m = n + 1;
	PHANSO* anew = (PHANSO*)realloc(a, m * sizeof(PHANSO));
	if (anew != NULL) {
		anew[n] = p;
		n++;
		a = anew;
	}
}

void XoaPhanSoCuoiMang(PHANSO*& a, int& n) {
	int m = n - 1;
	PHANSO* anew = (PHANSO*)realloc(a, m * sizeof(PHANSO));
	n--;
	a = anew;
}