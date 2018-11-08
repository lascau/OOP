#include <iostream>
#include <string>//

using namespace std;

//the default constructor cannot be referenced it is a deleted function
class Student {
private:
	int grade;
	string name;
public:
	Student(){} //
	Student(string name) {
		this->name = name;
	}
	void setGrade(int grade) {
		this->grade = grade;
	}
	int getGrade() {
		return grade;
	}
	string getName() {
		return name;
	}
};

class node {
public:
	node() {}//
	Student student;
	node* next;
};

class LinkedList {
	node* head;
	node* tail;
public:
	static int no_students;
	LinkedList()
	{
		head = NULL;
		tail = NULL;
	}
	void addStudent(Student stud) {
		no_students++;
		node *temp = new node();
		temp->student = stud;
		temp->next = NULL;
		if (head == NULL) {
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else {
			tail->next = temp;
			tail = temp;
		}
	}

	void displayStudents() {
		node *temp = new node();
		temp = head;
		while (temp != NULL) {
			cout << temp->student.getName() << " ";
			temp = temp->next;
		}
		cout << '\n';
	}

	void displayStartFromStudent(Student stud) {
		bool found = false;
		node *temp = new node();
		temp = head;
		while (temp != NULL) {
			if (temp->student.getName() == stud.getName()) found = 1;
			if (found) cout << temp->student.getName() << " ";
			temp = temp->next;
		}
		cout << '\n';
	}
};

int LinkedList::no_students = 0;

int main() {

	Student a("Gica"), b("Hortensiu"), c("Rico");
	LinkedList ls;
	ls.addStudent(a);
	ls.addStudent(b);
	ls.addStudent(c);
	cout << "NR DE STUDENTI ESTE: " << LinkedList::no_students << '\n';
	ls.displayStudents();
	ls.displayStartFromStudent(b);
	system("pause");
	return 0;
}