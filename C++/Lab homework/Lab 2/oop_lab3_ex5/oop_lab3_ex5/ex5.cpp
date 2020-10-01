#include <iostream>
#include <string>//

using namespace std;

class Student {
private:
	string firstName;
	string lastName;
	string groupe;
	string listOfCourses[6];
public:
	Student() {} //
	Student(string firstName, string lastName, string groupe, string listOfCourses[6]) {
		this->firstName		   = firstName;
		this->lastName		   = lastName;
		this->groupe           = groupe;
		this->listOfCourses[6] = listOfCourses[6];
	}
	string getFirstName() { return firstName; }
	string getLastName() { return firstName; }
	string getgroupe() { return groupe; }
	string[] getListOfCourses() { return listOfCourses[6]; }//
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
	void deleteStudent(Student stud) {
		no_students--;
		node *currentStudent = new node();
		node *previousStudent = new node();
		currentStudent = head;
		while (currentStudent != NULL) {
			if (currentStudent->student == stud) {
				//sterg studentul
				previousStudent->next = currentStudent->next;
				break;
			}
			previousStudent = currentStudent;
			currentStudent = currentStudent->next;
		}
	}
	void editStudent(Student stud) {
		node *temp = new node();
		temp = head;
		while (temp != NULL) {
			if (temp->student == stud)
				//...
			temp = temp->next;
		}
		return found;
	}
	bool isStudent(Student stud) {
		bool found = false;
		node *temp = new node();
		temp = head;
		while (temp != NULL) {
			if (temp->getFirstName() == stud.getFirstName() && temp->getLastName() == stud.getLastName())
				found = true;
			temp = temp->next;
		}
		return found;
	}

	LinkedList* noOfStudentsEnrolledAt(string course) {
		LinkedList studenti_inscrisi_acelasi_curs;
		node *temp = new node();
		temp = head;
		while (temp != NULL) {
			bool found = false;
			for (string current_course : temp->getListOfCourses())
				if (current_course == course)
					found = true;
			if (found) studenti_inscrisi_acelasi_curs.addStudent(temp);
			temp = temp->next;
		}
		return studenti_inscrisi_acelasi_curs;
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