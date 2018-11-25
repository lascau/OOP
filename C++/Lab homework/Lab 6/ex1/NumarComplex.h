#pragma once

class NumarComplex
{
private:
	int real;
	int imag;
public:
	NumarComplex();
	NumarComplex(int, int);
	int getRealPart();
	int getImagPart();
};

