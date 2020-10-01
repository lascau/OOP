#include <iostream>

using namespace std;

class Student {
private:
	int grade;
	Student(int nota) {
		grade = nota;
	}
public:
	 Student() {
		Student(101);
		grade = 8;
	}
	void setGrade(int grade) {
		this->grade = grade;
	}
	int getGrade() {
		return grade;
	}
};

int main() {
	Student a;
	cout << a.getGrade();

	system("pause");
	return 0;
}
