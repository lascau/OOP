#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

int main()
{
	Form *f = new Form();
	f->setName("forma1");
	f->setColor("blue");
	cout << "forma: " << f->getName() << " culoare " << f->getColor() << endl;

	Rectangle *r = new Rectangle();
	r->setWidth(23);
	r->setName("rectangle 1");
	r->setColor("REd");
	cout << "rectangle name: " << r->getName() << " width:" << r->getWidth() << endl;

	cout << r->getColor() << '\n';
	cout << r->x << '\n';
	cout << r->getNumePrenume("-George") << '\n';
	system("pause");
	return 0;
}