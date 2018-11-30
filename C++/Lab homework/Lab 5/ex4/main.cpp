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
	void showMessage() {
		cout << "mesaj din Form" << endl;
	}
	int calculArie(){}
	int calculPerimetru(){}
};

class Rectangle :public Form {
protected:
	int width;
	int height;
public:
	Rectangle(string name, int width, int height) :Form(name) {
		this->width = width;
		this->height = height;
	}
	void setWidth(int width) {
		this->width = width;
	}
	int getWidth() {
		return this->width;
	}
	void showMessage() {
		Form::showMessage(); // operator :: folosit pentru a apela showMessage din clasa de baza
		cout << "mesaj din Rectangle" << endl;
	}
	int calculArie(){
		return width * height;
	}
	int calculPerimetru() {
		return 2 * (width + height);
	}
};

class Square :public Form {
protected:
	int side;
public:
	Square(string name, int side) :Form(name) {
		this->side = side;
	}
	void setSide(int side) {
		this->side = side;
	}
	int getSide() {
		return this->side;
	}
	void showMessage() {
		cout << "mesaj din Square" << endl;
	}
	int calculArie(){
		return side * side;
	}
	int calculPerimetru() {
		return 4 * side;
	}
};

int main()
{
	Form *f = new Form("forma1");
	cout << "forma: " << f->getName() << endl;
	f->showMessage();

	Rectangle *r = new Rectangle("rectangle 1", 1, 2);
	cout << "rectangle name: " << r->getName() << " width:" << r->getWidth() << endl;
	r->showMessage();
	cout << r->calculArie() << " " << r->calculPerimetru() << "\n";

	Square *s = new Square("square 1", 20);
	cout << "square name: " << s->getName() << " side:" << s->getSide() << endl;
	s->showMessage();
	cout << s->calculArie() << " " << s->calculPerimetru();
	return 0;
}
