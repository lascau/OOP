#include "Operatii.h"
#include <iostream>

using namespace std;

double Operatii::add(double x, double y) {
	return x + y;
}

double Operatii::diff(double x, double y) {
	return x - y;
}

double Operatii::mul(double x, double y) {
	return x * y;
}

double Operatii::div(double x, double y) {
	return x / y;
}

NumarComplex Operatii::add(NumarComplex c1, NumarComplex c2) {
	double r = c1.getRealPart() + c2.getRealPart();
	double i = c1.getImagPart() + c2.getImagPart();
	NumarComplex res(r, i);
	return res;
}

NumarComplex Operatii::diff(NumarComplex c1, NumarComplex c2) {
	double r = c1.getRealPart() - c2.getRealPart();
	double i = c1.getImagPart() - c2.getImagPart();
	NumarComplex res(r, i);
	return res;
}

NumarComplex Operatii::mul(NumarComplex c1, NumarComplex c2) {
	double r = c1.getRealPart() * c2.getRealPart() - c1.getImagPart() * c2.getImagPart();
	double i = c1.getRealPart() * c2.getImagPart() + c1.getImagPart() * c2.getRealPart();
	NumarComplex res(r, i);
	return res;
}

NumarComplex Operatii::div(NumarComplex c1, NumarComplex c2) {
	NumarComplex c2_conjugat(c2.getRealPart(), -c2.getImagPart());
	NumarComplex denominator = mul(c2, c2_conjugat);
	NumarComplex numerator = mul(c1, c2_conjugat);
	NumarComplex res(numerator.getRealPart() / denominator.getRealPart(), numerator.getImagPart() / denominator.getRealPart());
	return res;
}

void Operatii::afisare(double real) {
	cout << "Nr real este: " << real << '\n';
}

void Operatii::afisare(NumarComplex c) {
	cout << "Nr complex este: (" << c.getRealPart() << ")+(" << c.getImagPart() << ")i\n";
}