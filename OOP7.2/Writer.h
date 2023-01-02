#pragma once
#include <thread>
#include <iostream>
#include "Checker.h"

static int globalID = 0;

class Writer
{

private:
	
	int id;
	std::thread thrd;
	static std::mutex con_mu;
	int posted;
	Checker* myChecker;
	Writer();

public:
	Writer(Checker* checker);
	static void Send(Writer& person);
	int PostInfo();
	std::thread* getThreadReference();
};

