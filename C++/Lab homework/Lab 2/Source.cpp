#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

//ex1
struct student {
	string nume;
	int varsta;
};

int f(int x) {
	return sizeof(x);
}

int f(double x) {
	return sizeof(x);
}

int f(char *x) {
	return sizeof(char *);
}

int f(student x) {
	return sizeof(student);
}
//ex2
unsigned char g(int a) {
	return (a & 255);
}

unsigned char g(long a) {
	return (a & 255);
}

char g(char *s) {
	return (*s & 255);

}
//ex3
struct nrComplex {
	int a; //partea reala
	int b; // partea imaginara
};

int modul(int real) {
	return real > 0 ? real : -real;
}

int modul(nrComplex C) {
	return sqrt(C.a * C.a + C.b * C.b);
}

//ex4
template <class T>
inline T Max(T a, T b, T c) {
	return max(max(a, b), c);
}

//ex5
struct pisica {
	string nume;
	string stapan;
	int age;
};

struct persoana {
	string nume;
	string prenume;
	int age;
};

struct masina {
	string marca;
	string nrInmatriculare;
	int age;
};

template <class T>
inline int functie(T struct_1, T struct_2) {
	return struct_1.age < struct_2.age ? struct_1.age : struct_2.age;
}

template <class T>
inline bool functie2(T struct_1, T struct_2) {
	return struct_1.age == struct_2.age ? true : false;
}

int main() {

//ex1
	student EU;
	EU.nume = "Miguel";
	EU.varsta = 20;
	cout << f(1000) << ' ' << f(0.3) << ' ' << f(EU) << ' ' << f((char *)"ana") << '\n';
//ex3
	cout << modul(5) << ' ' << modul(-3) << ' ' << modul({3, 10}) << '\n';
//ex4
	cout << Max(2, 4, 10) << '\n';
//ex5
	masina car1 = {
		"Audi",
		"PuieMSD01",
		5
	};
	masina car2 = {
		"BMW",
		"PuieMSD002",
		8
	};
	cout << functie<masina>(car1, car2) << '\n';
	cout << functie2<masina>(car1, car2) << '\n';
	system("pause");
	return 0;
}

