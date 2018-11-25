#pragma once

#include "NumarComplex.h"

class Operatii
{
public:
	static double x;
	static double y;
	static NumarComplex c1;
	static NumarComplex c2;
	static double add(double, double);
	static double diff(double, double);
	static double mul(double, double);
	static double div(double, double);
	static NumarComplex add(NumarComplex, NumarComplex);
	static NumarComplex diff(NumarComplex, NumarComplex);
	static NumarComplex mul(NumarComplex, NumarComplex);
	static NumarComplex div(NumarComplex, NumarComplex);
	static void afisare(double);
	static void afisare(NumarComplex);
};