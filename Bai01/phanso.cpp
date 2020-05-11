#include "phanso.h"

istream& operator>>(istream& inDev, PHANSO& ps) {
	cout << "Nhap tu so: ";
	inDev >> ps.tuso;
	cout << "Nhap mau so: ";
	inDev >> ps.mauso;
	return inDev;
}

ostream& operator<<(ostream& outDev, PHANSO& ps) {
	if (ps.mauso == 1 || ps.tuso == 0) {
		outDev << ps.tuso;
	}
	else
	{
		outDev << ps.tuso << "/" << ps.mauso;
	}
	return outDev;
}