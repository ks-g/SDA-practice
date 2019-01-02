#pragma once
#include "Operations.h"

class ProgramLoop {
	bool running;
public:
	ProgramLoop();
	~ProgramLoop();	
	void start();
	void stop();
	void runOurParticularProgram();
};