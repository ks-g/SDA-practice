#include "stdafx.h"
#include "Operations.h"

void Operations::insert(BinarySearchTree& bst) {
	Student st;
	cin >> st;
	bst.setRoot(bst.insert(bst.getRoot(), st));
	cout << "Record inserted!\n";
	cin.ignore();
}

void Operations::de1ete(BinarySearchTree& bst) {
	long long fn;
	cin >> fn;
	if (bst.find(bst.getRoot(), fn) != NULL) {
		bst.setRoot(bst.deleteNode(bst.getRoot(), fn));
		cout << "Record deleted!\n";
		cin.ignore();
	}
	else
	{
		cout << "Record not found!\n";
		cin.ignore();
	}
}

void Operations::find(BinarySearchTree& bst) {
	long long fn;
	cin >> fn;
	Node* found = bst.find(bst.getRoot(), fn);
	if (found == NULL) {
		cout << "Record not found!\n";
		cin.ignore();
	}
	else {
		found->print();
		cout << "\n";
		cin.ignore();
	}
}

void Operations::traverseInOrder(BinarySearchTree& bst) {
	bst.traverseInOrder(bst.getRoot());
	cout << endl;
}