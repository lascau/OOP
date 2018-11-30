#include <iostream>
#include <string>

using namespace std;

class Form {
private:
	string color;

protected:
	string name;
	void setColor(string color) {
		this->color = color;
	}
public:
	Form(string name) {
		this->name = name;
	}
	string getName() {
		return this->name;
	}
	void setName(string name) {
		this->name = name;
	}
	~Form() {
		cout << "A fost apelat destructorul clasei Form!\n";
	}
};

class Rectangle :public Form {
protected:
	int width;
	int height;
public:
	Rectangle(string name, int width, int height) :Form(name) {
		// apelul :Form(name){ poate lipsi
		this->width = width;
		this->height = height;
	}
	void setWidth(int width) {
		this->width = width;
	}
	int getWidth() {
		return this->width;
	}
	~Rectangle() {
		cout << "A fost apelat destructorul clasei Rectangle!\n";
	}
};

int main()
{
	Form *f = new Form("forma1");
	cout << "forma: " << f->getName() << endl;

	Rectangle *r = new Rectangle("rectangle 1", 1, 2);
	cout << "rectangle name: " << r->getName() << " width:" << r->getWidth() << endl;
	//sau putem apela cu f->~Form(), respectiv r->Rectangle()
	delete f;
	delete r;
	return 0;
}
