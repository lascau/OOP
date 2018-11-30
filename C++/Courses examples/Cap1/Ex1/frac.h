#pragma once

class fraction
{
	int p;
	int q;
public:
	//the class constructor
	fraction(int a = 0, int b = 1) {
		p = a;
		q = b;
	}
	void Getter();
	//the declaration of the overloaded operators
	//eroare - nu era tipul de date specificat(fraction)
	friend fraction operator + (fraction, fraction);
	friend fraction operator * (fraction, fraction);
	friend fraction operator / (fraction, fraction);
};
