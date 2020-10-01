#include "Matrice.h"

template<typename T>
Matrice<T>::Matrice(int no_lines, int no_columns)
{
	mat = new T*[no_lines];
	for (int i = 0; i < no_lines; ++i)
		mat[i] = new T[no_columns];

	//initializam cu matricea nula
	for (int i = 0; i < no_lines; ++i)
		for (int j = 0; j < no_columns; ++j)
			mat[i][j] = 0;
}

/*
template<typename T>
Matrice& Matrice<T>::operator= (const Matrice<T>& A) {

	for (int i = 0; i < no_lines; ++i)
		for (int j = 0; j < no_columns; ++j)
			mat[i][j] = A.mat[i][j];
	return *this;
}
*/

template<typename T>
istream& operator>> (istream& in, Matrice<T>& M) {
	for (int i = 0; i < M.no_lines; ++i)
		for (int j = 0; j < M.no_columns; ++j)
			in >> M.mat[i][j];
	return in;
}

template<typename T>
ostream& operator<< (ostream& out, const Matrice<T>& M) {
	for (int i = 0; i < M.no_lines; ++i)
		for (int j = 0; j < M.no_columns; ++j) {
			out << M.mat[i][j] << ' ';
		out << '\n';
	}
	return out;
}

template<typename T>
Matrice<T>::~Matrice()
{
	for (int i = 0; i < no_lines; ++i)
		delete[] mat[i];
	delete[] mat;
}
