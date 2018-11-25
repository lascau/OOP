#include <iostream>
#include <math.h>

using namespace std;

class NumarComplex {
private:
	double real;
	double imag;
public:
	NumarComplex() {}
	NumarComplex(double real, double imag) : real(real), imag(imag) {}
	
	NumarComplex(const NumarComplex& c) : real(c.real), imag(c.imag) {}
	
	NumarComplex operator+ (const NumarComplex &other) const{
		return NumarComplex(real + other.real, imag + other.imag);
	}

	NumarComplex operator- (const NumarComplex &other) const{
		return NumarComplex(real - other.real, imag - other.imag);
	}

	NumarComplex operator* (const NumarComplex &other) const{
		return NumarComplex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
	}
	
	NumarComplex operator+ (int nr) const{
		return NumarComplex(real + nr, imag);
	}

	NumarComplex operator- (int nr) const{
		return NumarComplex(real - nr, imag);
	}

	NumarComplex operator^ (int n) const{
		double real_res = real;
		double imag_res = imag;
		for (int exponent = 2; exponent <= n; ++exponent) {
			double aux = real_res;
			real_res = real * real_res - imag * imag_res;
			imag_res = real * imag_res + imag * aux;
		}
		return NumarComplex(real_res, imag_res);
	}

	double operator~ () const{
		return sqrt(real * real + imag * imag);
	}

	void afis() {
		cout << "(" << real << ") + (" << imag << ")i\n";
	}
};
int main() {
	NumarComplex c1(1, 2);
	NumarComplex c2(4, 3);
	NumarComplex c3, c4, c5, c6, c7, c8;
	c1.afis(); c2.afis();
	c3 = c1 + c2;
	c4 = c1 - c2;
	c5 = c1 * c2;
	c6 = c1 + 100;
	c7 = c1 ^ 2;
	c3.afis(); c4.afis(); c5.afis(); c6.afis(); c7.afis(); 
	cout << "Modul: " << ~c1 << '\n';
	return 0;
}