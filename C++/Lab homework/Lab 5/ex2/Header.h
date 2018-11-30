#pragma once

#include <string>

using namespace std;

class Form {
private:
	string color;
protected:
	string name;
public:
	int x = 34;
	string getName();
	void setName(string);
	string getColor();
	void setColor(string);
};

class Rectangle : public Form {
protected:
	int width;
	int height;
public:
	void setWidth(int);
	int getWidth();
	void setHeight(int);
	int getHeight();
	string getNumePrenume(string);
};


