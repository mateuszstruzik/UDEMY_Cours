#pragma once
#include<iostream>
#include<exception> // bedziemy po niej dziedziczyc

using namespace std;

class ExceptionsCustomExceptions:public exception 
{
public:
	ExceptionsCustomExceptions();
	~ExceptionsCustomExceptions();

	virtual const char* what() const throw() { //nie uzywac const throw raczej zly nawyk tutaj zeby miec pewnosc ze stworzymy wlasne what();
		return "Something bad happened";
	}
};

class Test {   //klasa zeby przetestowac stworzony wyjatek 
public:
	void goesWrong() {
		throw ExceptionsCustomExceptions();
	}

};

class ExceptionsCustomExceptionsmainSim {
public:
	void simMain();
};
