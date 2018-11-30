#pragma once
class Polygon
{
public:
	Polygon(int x0, int y0, int x1, int y1);
	virtual ~Polygon();
	virtual double Perimeter();
protected:
	double x0, y0, x1, y1;
	virtual double TwoEdges() = 0;
	virtual double OneEdge() = 0;
};
class Triangle : public Polygon
{
public:
	Triangle(int x0, int y0, int x1, int y1, int x2, int y2);
	double Perimeter();
protected:
	double x2, y2;
	double TwoEdges();
	double OneEdge();
};class Quadrilater : public Triangle
{
public:
	Quadrilater(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3);
	double Perimeter();
protected:
	double x3, y3;
	double TwoEdges();
	double OneEdge();
};
