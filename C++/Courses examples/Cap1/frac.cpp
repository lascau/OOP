#include "frac.h"

fraction operator + (fraction f1, fraction f2)
{
	fraction f;
	f.p = f1.p * f2.q + f2.p * f1.q;
	f.q = f1.q * f2.q;
	return f;
}

fraction operator * (fraction f1, fraction f2)
{
	fraction f;
	f.p = f1.p * f2.p;
	f.q = f1.q * f2.q;
	return f;
}

fraction operator / (fraction f1, fraction f2)
{
	fraction f;
	f.p = f1.p / f2.q;
	f.q = f1.q / f2.p;
	return f;
}