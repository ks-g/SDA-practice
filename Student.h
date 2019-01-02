#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student {
	long long facNum;
	string fName;
	string lName;

public:
	Student();
	Student(long long, string, string);
	long long getFacNum() const;
	void setFacNum(long long);
	string getFName() const;
	void setFName(string);
	string getLName() const;
	void setLName(string);
	friend ostream& operator<<(ostream&, const Student&);
	friend istream& operator>>(istream&, Student&);
};