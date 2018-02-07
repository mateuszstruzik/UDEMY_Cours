#pragma once
#include<iostream>
#include<string>				//do przeslania stringa do buffora potrzebna biblioteka 
#include<time.h>

using namespace std;

class ExceptionsBasicExceptions
{
private:

	bool randomTrueFalse();
	void mightGoWrong();
	void usesMightGoWrong();
public:

	void simulateMain();

	ExceptionsBasicExceptions();
	~ExceptionsBasicExceptions();
};

