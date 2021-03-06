#include "Operatii.h"
#include <iostream>
#include <math.h>

using namespace std;

Operatii::Operatii(){}

Operatii::Operatii(double r) : c(NumarComplex(r, 0)) {}

Operatii::Operatii(NumarComplex c) : c(c) {};

double Operatii::modul(double r) {
	return abs(r);
}

double Operatii::modul(NumarComplex c) {
	return sqrt(c.getRealPart() * c.getRealPart() + c.getImagPart() * c.getImagPart());
}

void Operatii::afisare(int r) {//afiseaza partea reala a unui numar complex care are partea imaginara 0? sau pur si simplu un nr real oarecare
	cout << "Nr real este: " << r;
}

void Operatii::afisare(NumarComplex c) {
	cout << "Nr complex este: " << c.getRealPart() << "+" << c.getImagPart() << "i\n";
}
