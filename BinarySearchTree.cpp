#include "stdafx.h"
#include "BinarySearchTree.h"

	BinarySearchTree::BinarySearchTree() { root = NULL; }
	BinarySearchTree::~BinarySearchTree() {}

	Node* BinarySearchTree::create(Student st)
{
	Node* temp = new Node(st);
	temp->left = temp->right = NULL;
	return temp;
}

Node* BinarySearchTree::findMin(Node* root)
{
	while (root->left != NULL) root = root->left;
	return root;
}

	Node* BinarySearchTree::getRoot() {
		return root;
	}

	void BinarySearchTree::setRoot(Node* nd) {
		root = nd;
	}

	Node* BinarySearchTree::insert(Node* node, Student st)
	{
		if (node == NULL) return create(st);
		if (st.getFacNum() < node->key()) {
			node->left = insert(node->left, st);
		}
		else if (st.getFacNum() > node->key())
		{
			node->right = insert(node->right, st);
		}
		else {
			root->st = st;
		}
		return node;
	}

	Node* BinarySearchTree::deleteNode(Node* root, long long fn)
	{
		if (root == NULL) return root;
		if (fn < root->key())
		{
			root->left = deleteNode(root->left, fn);
		}
		else if (fn > root->key())
		{
			root->right = deleteNode(root->right, fn);
		}
		else
		{
			if (root->left == NULL)
			{
				Node* temp = root->right;
				delete root;
				return temp;
			}
			else if (root->right == NULL)
			{
				Node* temp = root->left;
				delete root;
				return temp;
			}
			else
			{
				Node* temp = findMin(root->right);
				root->st = temp->st;
				root->right = deleteNode(root->right, temp->key());
			}
		}
		return root;
	}

	Node* BinarySearchTree::find(Node* root, long long fn)
	{
		if (root == NULL || root->key() == fn) return root;
		if (root->key() < fn) return find(root->right, fn);
		return find(root->left, fn);
	}

	void BinarySearchTree::traverseInOrder(Node *root)
	{
		if (root != NULL)
		{
			traverseInOrder(root->left);
			printf("%lld, ", root->key());
			traverseInOrder(root->right);
		}
	}