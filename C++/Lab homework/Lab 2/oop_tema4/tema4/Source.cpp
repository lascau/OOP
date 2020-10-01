#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <set>
using namespace std;

class Student {
private:
	int note;
	string name;
public:
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
	list<Student> studentsList;
public:
	StudentsGroup(int studentsNumber) {
		this->studentsNumber = studentsNumber;
	}
	void showStudentsInGroup() {
		int i = 0;
		for (list<Student>::iterator it = studentsList.begin(); it != studentsList.end(); ++it) {
			cout << i << " " << it->getName() << " " << it->getNote() << endl;
			i++;
		}
	}
	void readStudentGroup() {
		int note;
		string studentName;
		for (int i = 0; i < studentsNumber; i++) {
			Student s;
			cout << "student " << " name:";
			cin >> studentName;
			s.setName(studentName);
			cout << "note ";
			cin >> note;
			s.setNote(note);
			studentsList.push_back(s);
		}
	}
	pair<int, string> calculatemax()
	{
		pair<int, string> maxSt(-1, "");
		for (list<Student>::iterator it = studentsList.begin(); it != studentsList.end(); ++it)
		{
			if (it->getNote() > maxSt.first) {
				maxSt.first = it->getNote();
				maxSt.second = it->getName();
			}
		}
		return maxSt;
	}
	string student5()
	{
		for (list<Student>::iterator it = studentsList.begin(); it != studentsList.end(); ++it)
			if (it->getNote() == 5)
				return it->getName();
		return "nu exista";
	}
	void sortList()
	{
		set<pair<int, string> > s;
		for (list<Student>::iterator it = studentsList.begin(); it != studentsList.end(); ++it)
		{
			s.insert(make_pair(it->getNote(), it->getName()));
		}
		studentsList.clear();
		for (set<pair<int, string> >::iterator it = s.begin(); it != s.end(); ++it)
		{
			Student stud;
			stud.setNote(it->first);
			stud.setName(it->second);
			studentsList.push_back(stud);
		}
	}
};

int main()
{
	pair<int, string> x;
	StudentsGroup *studentsGroup = new StudentsGroup(3);
	studentsGroup->readStudentGroup();
	studentsGroup->showStudentsInGroup();
	x = studentsGroup->calculatemax();
	cout << "Studentul cu nota cea mai mare este: " << x.second << " cu nota: " << x.first << endl;
	cout << "Primul student cu nota 5 " << studentsGroup->student5() << '\n';
	studentsGroup->sortList();
	studentsGroup->showStudentsInGroup();
	return 0;
}