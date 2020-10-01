#pragma once
#include <iostream>

using namespace std;

template<typename T>
class Matrice
{
	T** mat;
	int no_lines;
	int no_columns;
public:
	Matrice(int no_lines = 0, int no_columns = 0);
	/*
	Matrice& operator= (const Matrice<T>& A);
	bool operator== (const Matrice<T>& A);
	bool operator!= (const Matrice<T>& A);
	friend Matrice operator+ (const Matrice<T>& A, const Matrice<T>& B);
	friend Matrice operator- (const Matrice<T>& A, const Matrice<T>& B);
	friend Matrice operator* (const Matrice<T>& A, const Matrice<T>& B);
	*/
	friend istream& operator>> <> (istream& in, Matrice<T>& M);
	friend ostream& operator<< <> (ostream& out, const Matrice<T>& M);
	
	~Matrice();
};

template class Matrice<int>;  
template<typename T> istream& operator>> (istream& in, Matrice<T>& M);
template<typename T> ostream& operator<< (ostream& out, const Matrice<T>& M);



