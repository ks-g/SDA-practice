#include "stdafx.h"
#include "Node.h"

Node::Node(Student st) {
	this->st = st;
	this->left = NULL;
	this->right = NULL;
}

Node::Node(Student st, Node* left, Node* right) {
	this->st = st;
	this->left = left;
	this->right = right;
}

long long Node::key() {
	return st.getFacNum();
}

void Node::print() {
	cout << st;
}