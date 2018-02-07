#include "Exceptions_course.h"



Exceptions_course::Exceptions_course()
{
}


Exceptions_course::~Exceptions_course()
{
}

void Exceptions_course::collectWholePart()
{//call stack kontroluje ktora funkcja jest wywolywana (stack) funkcja wywolana przez inna funkcje znajduje sie na szczycie stacku dane ze stacku sa potem odczytywane od gory stacku ??? 

		srand(time(NULL));

		ExceptionsBasicExceptions exceptions;
		ExceptionsStandardExceptions standard;
		ExceptionsCustomExceptionsmainSim custom;
		ExceptionCatchingOrder catching_order;

		custom.simMain();
		standard.simulationMain();
		exceptions.simulateMain();
		catching_order.simMain();

	
	
	
}
