#include "ExceptionsCustomExceptions.h"



ExceptionsCustomExceptions::ExceptionsCustomExceptions()
{
}


ExceptionsCustomExceptions::~ExceptionsCustomExceptions()
{
}

void ExceptionsCustomExceptionsmainSim::simMain()
{
	Test test;
	try {
		test.goesWrong();
	}
	catch (ExceptionsCustomExceptions &e) {
		cout << e.what() << endl;
	}
}
