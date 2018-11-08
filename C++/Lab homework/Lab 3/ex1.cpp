#include <iostream>

using namespace std;

//1)
//class Student {
//public:
//	int grade;
//	Student() {
//		grade = 5;
//	}
//	/*Student(int val) {
//		grade = val;
//	}*/
//	Student(int grade) {
//		this->grade = grade;
//	}
//	~Student() {
//		cout << "Obiect distrus!!!";
//	}
//};

class Student {
private:
	int grade;
public:
	Student(int grade) {
		this->grade = grade;
	}
	void setGrade(int grade) {
		this->grade = grade;
	}
	int getGrade() {
		return this->grade;
	}
};
int main() {
	Student a(5);
	cout << a.getGrade() << '\n';
	a.setGrade(10);
	cout << a.getGrade() << '\n';

	Student* b = new Student(3);
	cout << b->getGrade() << '\n';
	b->setGrade(8);
	cout << b->getGrade() << '\n';

	system("pause");
	return 0;
}