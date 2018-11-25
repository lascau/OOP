#include "NumarComplex.h"

NumarComplex::NumarComplex() {}

NumarComplex::NumarComplex(int real, int imag) : real(real), imag(imag) {}

int NumarComplex::getRealPart() {
	return this->real;
}

int NumarComplex::getImagPart() {
	return this->imag;
}