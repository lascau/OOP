#include <iostream>
#include "frac.h"

using namespace std;

int main() {
	fraction f1(1, 2);
	fraction f2(7, 4); 
	fraction f3, f4, f5, f6;
	f3 = f1 / f2;
	f4 = f1 * f2;
	f5 = f3 + f4;
	f6 = f1 * f2 + f1 / f2;
	f1.Getter();
	f2.Getter();
	f3.Getter();
	f4.Getter();
	f5.Getter();
	f6.Getter();
	system("pause");
	return 0;
}