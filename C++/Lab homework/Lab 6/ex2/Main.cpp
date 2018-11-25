#include <iostream>
#include "Operatii.h"

using namespace std;

NumarComplex Operatii::c(2, 3);

int main() {
	Operatii::afisare(3);
	Operatii::afisare(Operatii::c);
	cout << Operatii::modul(3) << '\n';
	cout << Operatii::modul(-33) << '\n';
	cout << Operatii::modul(Operatii::c);
	return 0;
}