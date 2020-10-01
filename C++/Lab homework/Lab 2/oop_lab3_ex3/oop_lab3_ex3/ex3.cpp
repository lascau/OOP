#include <iostream>

using namespace std;

class Student {
private:
	int grade;
public:
	static int no_instances;
	Student() {
		no_instances++;
	}
	void setGrade(int grade) {
		this->grade = grade;
	}
	int getGrade() {
		return grade;
	}
};

int Student::no_instances = 0;

int main() {
	Student a, b, c, d;
	cout << Student::no_instances << '\n';

	system("pause");
	return 0;
}