#pragma once
#include "Node.h"

class BinarySearchTree {
private:
	Node* root;	
	Node* create(Student);	
	Node* findMin(Node*);
public:	
	BinarySearchTree();
	~BinarySearchTree();
	Node* getRoot();
	void setRoot(Node*);
	Node* insert(Node*, Student);
	Node* deleteNode(Node*, long long);
	Node* find(Node*, long long);
	void traverseInOrder(Node*);
};