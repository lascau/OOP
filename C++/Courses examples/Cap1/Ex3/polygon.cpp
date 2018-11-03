#include <math.h>
#include "polygon.h"

Polygon::Polygon(int x0, int y0, int x1, int y1) : x0(x0), x1(x1), y0(y0), y1(y1) {}

double Polygon::Perimeter() {
	double l;
	l = sqrt((x0 - x1) * (x0 - x1) + (y0 - y1) * (y0 - y1));
	return l;
}

Triangle::Triangle(int x0, int y0, int x1, int y1, int x2, int y2) : Polygon(x0, y0, x1, y1), x2(x2), y2(y2) {}

double Triangle::TwoEdges() {
	double a, b;
	a = sqrt((x0 - x2) * (x0 - x2) + (y0 - y2) * (y0 - y2));
	b = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	return a + b;
}

double Triangle::OneEdge() {
	double l;
	l = sqrt((x0 - x1) * (x0 - x1) + (y0 - y1) * (y0 - y1));
	return l;
}double Triangle::Perimeter() {
	double p;
	p = Polygon::Perimeter() + TwoEdges();
	return p;
}