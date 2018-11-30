#include "frac.h"
#include <iostream>

int gcd(int a, int b) {
	while (a != b)
		if (a > b)
			a -= b;
		else
			b -= a;
	return a;
}

fraction operator + (fraction f1, fraction f2) {
	fraction f;
	f.p = f1.p * f2.q + f2.p * f1.q;
	f.q = f1.q * f2.q;

	//aduc la forma ireductibila
	f.p /= gcd(f.p, f.q);
	f.q /= gcd(f.p, f.q);

	return f;
}

fraction operator * (fraction f1, fraction f2) {
	fraction f;
	f.p = f1.p * f2.p;
	f.q = f1.q * f2.q;

	//aduc la forma ireductibila
	f.p /= gcd(f.p, f.q);
	f.q /= gcd(f.p, f.q);
	
	return f;
}

fraction operator / (fraction f1, fraction f2) {
	fraction f;
	f.p = f1.p * f2.q; // greseala era / in loc de *
	f.q = f1.q * f2.p; // greseala era / in loc de *

	//aduc la forma ireductibila
	f.p /= gcd(f.p, f.q);
	f.q /= gcd(f.p, f.q);

	return f;
}void fraction::Getter() {
	std::cout << this->p << ' ' << this->q << '\n';
}