#pragma once
#include "Student.h"

struct Node {
	Student st;
	Node* left;
	Node* right;

	Node(Student);
	Node(Student, Node*, Node*);
	long long key();
	void print();
};