#pragma once
class Fraction
{
	int p;
	int q;
public:
	//the class constructor
	fraction(int a = 0, int b = 1) {
		p = a;
		q = b;
	}
	//the declaration of the overloaded operators
	friend operator + (fraction, fraction);
	friend operator * (fraction, fraction);
	friend operator / (fraction, fraction);
};