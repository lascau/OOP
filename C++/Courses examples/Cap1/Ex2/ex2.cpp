#include <iostream>

using namespace std;

template <typename T>
class vector {
	T *v;
	int dim;
public:
	vector(int n) {
		v = new T[dim = n]; //syntax : a = new int[nr_elem]
	}

	~vector() {
		delete[] v;
	}
	T& operator[](int k) { return v[k]; }
	int size() { return dim; }
};

int main() {
	vector<int> v1(20);
	vector<double> v2(10);
	v1[7] = 5;
	//v2[7] = 2.3;
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << ' ';
	system("pause");
	return 0;
}