#include "stdafx.h"
#include "ProgramLoop.h"

ProgramLoop::ProgramLoop() { running = false; }
ProgramLoop::~ProgramLoop() {}

void ProgramLoop::start() {
	running = true;
}

void ProgramLoop::stop() {
	running = false;
}

void ProgramLoop::runOurParticularProgram() {
	this->start();
	Operations op;
	BinarySearchTree bst;
	string input{};
	while (running&&getline(cin, input))
	{
		if (input.compare("insert") == 0)
		{
			op.insert(bst);
		}
		else if (input.compare("delete") == 0)
		{
			op.de1ete(bst);
		}
		else if (input.compare("find") == 0)
		{
			op.find(bst);
		}
		else if (input.compare("traverseInorder") == 0)
		{
			op.traverseInOrder(bst);
		}
		else if (input == "exit")
		{
			this->stop();
		}
		else
		{
			cout << "Invalid input, please try again!";
			cin.ignore();
		}
	}
}