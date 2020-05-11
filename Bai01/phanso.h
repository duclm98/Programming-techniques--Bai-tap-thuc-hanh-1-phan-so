#pragma once
#include <iostream>
using namespace std;

struct phanso
{
	int tuso, mauso;
};
typedef struct phanso PHANSO;

istream& operator>>(istream& inDev, PHANSO& ps);
ostream& operator<<(ostream& outDev, PHANSO& ps);