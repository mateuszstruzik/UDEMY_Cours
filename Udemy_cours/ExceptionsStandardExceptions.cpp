#include "ExceptionsStandardExceptions.h"



ExceptionsStandardExceptions::ExceptionsStandardExceptions()
{
}

ExceptionsStandardExceptions::ExceptionsStandardExceptions(int i)
{
	ii = i;

	if (ii == 1) {
		bad_alloc exception;  //tworze taki exception zeby obejsc wysypanie sie kompilatora przy alokowaniu  za duzej pamieci do tablicy
		throw exception;
	}
}


ExceptionsStandardExceptions::~ExceptionsStandardExceptions()
{
}

void ExceptionsStandardExceptions::simulationMain()
{
	try {
		ExceptionsStandardExceptions standard(1);
	}
	catch (bad_alloc &e) {
		cout << " Caught exception: " << e.what() << endl;
	}

	cout << "Still runing" << endl;
}
