#pragma once

#include "NumarComplex.h"

class Operatii
{
private:
	NumarComplex c;
public:
	Operatii();
	Operatii(double);
	Operatii(NumarComplex);
	double modul(double);
	double modul(NumarComplex);
	void afisare(int);
	void afisare(NumarComplex);
};

