#include <iostream>
#include "Operatii.h"

using namespace std;

int main() {
	Operatii op;
	cout << op.add(2, 54) << '\n';
	cout << op.diff(54, 32) << '\n';
	cout << op.mul(10, 41) << '\n';
	cout << op.div(12, 4) << '\n';

	NumarComplex c1(1, 2), c2(4, 3);
	op.afisare(op.add(c1, c2));
	op.afisare(op.diff(c1, c2));
	op.afisare(op.mul(c1, c2));
	op.afisare(op.div(c1, c2));
	return 0;
}