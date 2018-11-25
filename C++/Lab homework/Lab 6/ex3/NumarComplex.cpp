#include "NumarComplex.h"

NumarComplex::NumarComplex() {}

NumarComplex::NumarComplex(double real, double imag) : real(real), imag(imag) {}

double NumarComplex::getRealPart() {
	return this->real;
}

double NumarComplex::getImagPart() {
	return this->imag;
}