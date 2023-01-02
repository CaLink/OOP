#pragma once
#include <mutex>
#include <thread>


class Checker
{
private:
	std::mutex mu;
	int posts;

public:
	Checker();
	Checker(int post);
	
	int Check(int post);


};

