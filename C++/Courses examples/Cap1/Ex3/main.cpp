#include <iostream>
#include "polygon.h"

using namespace std;

int main() {
	Polygon* f1 = new Triangle(0, 0, 0, 1, 1, 0);
	Polygon* f2 = new Quadrilater(0, 0, 0, 1, 1, 0, 1, 1);
	double p1 = f1->Perimeter();
	double p2 = f2->Perimeter();
	cout << p1 << ' ' << p2;
	system("pause");
	return 0;
}