#include <iostream>
#include <string>

using namespace std;

class Form {
private:
	string color;
protected:
	string name;
public:
	int x = 34;
	string getName() {
		return this->name;
	}
	void setName(string name) {
		this->name = name;
	}
	string getColor() {
		return this->color;
	}
	void setColor(string color) {
		this->color = color;
	}
};

class Rectangle :public Form {
protected:
	int width;
	int height;
public:
	void setWidth(int width) {
		this->width = width;
	}
	int getWidth() {
		return this->width;
	}
	void setHeight(int height) {
		this->width = height;
	}
	int getHeight() {
		return this->height;
	}
	string getNumePrenume(string prenume) {
		return this->name + prenume;
	}
};

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
