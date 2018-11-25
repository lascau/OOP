#pragma once

class NumarComplex
{
private:
	double real;
	double imag;
public:
	NumarComplex();
	NumarComplex(double, double);
	double getRealPart();
	double getImagPart();
};