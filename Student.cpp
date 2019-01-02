#include "stdafx.h"
#include "Student.h"

Student::Student() {
	setFacNum(0);
	setFName("");
	setLName("");
}

Student::Student(long long fNum, string fName, string lName) {
	setFacNum(fNum);
	setFName(fName);
	setLName(lName);
}

long long Student::getFacNum() const { return facNum; }

void Student::setFacNum(long long fn) { facNum = fn; }

string Student::getFName() const { return fName; }

void Student::setFName(string name) { fName = name; }

string Student::getLName() const { return lName; }

void Student::setLName(string name) { lName = name; }

ostream& operator<<(ostream& os, const Student& student) {
	os << student.getFacNum() << " " << student.getFName() << " " << student.getLName();
	return os;
}

istream& operator>>(istream& is, Student& student) {
	long long fn;
	string fnm;
	string lnm;
	is >> fn >> fnm >> lnm;
	student.setFacNum(fn);
	student.setFName(fnm);
	student.setLName(lnm);
	return is;
}