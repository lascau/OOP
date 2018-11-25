#include <iostream>
#include "Operatii.h"

using namespace std;

int main() {
	NumarComplex C(2, 3);
	Operatii op;
	cout << op.modul(-35) << '\n';
	cout << op.modul(C) << '\n';
	op.afisare(C);
	op.afisare(32);
	return 0;
}