#include <iostream>
#include "frac.h"

using namespace std;

int main() {
	fraction f1(1, 2);
	fraction f2(7, 4); 
	fraction f3;
	f3 = f1 * f2 + f1 / f2;
	return 0;
}