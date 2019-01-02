#pragma once
#include "BinarySearchTree.h"

class Operations {
private:
	void insert(BinarySearchTree&);
	void de1ete(BinarySearchTree&);
	void find(BinarySearchTree&);
	void traverseInOrder(BinarySearchTree&);
	friend class ProgramLoop;
};