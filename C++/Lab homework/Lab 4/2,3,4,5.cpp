#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	int note;
	string name;
public:
	Student *next;
	Student(int note = 0, string name = "Joe Doe") {
		this->note = note;
		this->name = name;
	}
	void setNote(int n) {
		this->note = n;
	}
	int getNote() {
		return this->note;
	}
	string getName() {
		return this->name;
	}
	void setName(string name) {
		this->name = name;
	}
};

class StudentsGroup {
private:
	int studentsNumber;
	Student *studentsList;
	Student *firstStudent;
public:
	StudentsGroup(int n = 0) {
		studentsNumber = n;
		studentsList = NULL;
		firstStudent = NULL;
	}
	void addStudent(Student stud) {
		studentsNumber++;
		Student *temp = new Student();
		temp = studentsList;
		temp->setName(stud.getName());
		temp->setNote(stud.getNote());
		if (studentsList == NULL) {
			studentsList = temp;
			firstStudent = temp;
			temp = NULL;
		}
		else {
			studentsList->next = temp;
			studentsList = temp;
		}
	}
	void readStudents() {
		string Name;
		int Nota;
		for (int i = 0; i < studentsNumber; i++) {
			cin >> Name;
			cin >> Nota;
			Student currentStudent;
			currentStudent.setName(Name);
			currentStudent.setNote(Nota);
			addStudent(currentStudent);
		}
	}
	void sortStudents() {
		bool isSorted = false;
		while (!isSorted) {
			isSorted = true;
			Student *iterator = new Student();
			iterator = firstStudent;
			while (iterator->next != NULL) {
				if (iterator->getNote() > iterator->next->getNote()) {
					isSorted = false;
					//swap these 2 students
					int temp = iterator->getNote();
					iterator->setNote(iterator->next->getNote());
					iterator->next->setNote(temp);

					string temp2 = iterator->getName();
					iterator->setName(iterator->next->getName());
					iterator->next->setName(temp2);
				}
			iterator = iterator->next;
			}
		}
	}
	int maxNote() {
		int maxnote = 1;
		Student *temp = new Student();
		temp = firstStudent;
		while (temp != NULL) {
			if (temp->getNote() > maxnote)
				maxnote = temp->getNote();
			temp = temp->next;
		}
		return maxnote;
	}
	Student note5() {
		Student *temp = new Student();
		Student s;
		temp = firstStudent;
		while (temp != NULL) {
			if (temp->getNote() == 5) {
				s.setName(temp->getName());
				s.setNote(temp->getName());
				return s;
			}
			temp = temp->next;
		}
		return s;
	}
	void displayStudents() {
		Student *temp = new Student();
		temp = firstStudent;
		while (temp != NULL) {
			cout << temp->getName() << " " << temp->getNote() << '\n';
			temp = temp->next;
		}
		cout << '\n';
	}
};

int main()
{
	StudentsGroup* A = new StudentsGroup(2);
	A->readStudents();
	A->displayStudents();
	return 0;
}
