#pragma once

#include "NumarComplex.h"

class Operatii
{
private:
	double x;
	double y;
	NumarComplex c1;
	NumarComplex c2;
public:
	Operatii();
	Operatii(double, double);
	Operatii(NumarComplex, NumarComplex);
	double add(double, double);
	double diff(double, double);
	double mul(double, double);
	double div(double, double);
	NumarComplex add(NumarComplex, NumarComplex);
	NumarComplex diff(NumarComplex, NumarComplex);
	NumarComplex mul(NumarComplex, NumarComplex);
	NumarComplex div(NumarComplex, NumarComplex);
	void afisare(double);
	void afisare(NumarComplex);
};