#include <iostream>
#include "Operatii.h"

using namespace std;

double Operatii::x = 3;
double Operatii::y = 5;
NumarComplex Operatii::c1(1, 2);
NumarComplex Operatii::c2(4, 3);

int main() {
	Operatii::afisare(Operatii::add(Operatii::x, Operatii::y));
	Operatii::afisare(Operatii::diff(Operatii::x, Operatii::y));
	Operatii::afisare(Operatii::mul(Operatii::x, Operatii::y));
	Operatii::afisare(Operatii::div(Operatii::x, Operatii::y));
	
	Operatii::afisare(Operatii::add(Operatii::c1, Operatii::c2));
	Operatii::afisare(Operatii::diff(Operatii::c1, Operatii::c2));
	Operatii::afisare(Operatii::mul(Operatii::c1, Operatii::c2));
	Operatii::afisare(Operatii::div(Operatii::c1, Operatii::c2));
	
	return 0;
}