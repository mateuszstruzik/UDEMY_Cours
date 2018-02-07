#include "ExceptionsBasicExceptions.h"



void ExceptionsBasicExceptions::simulateMain()
{
	for (int i = 0; i < 10; i++) { // for w celu zwielokrotnienia wynikow i sprawdzenia czy losowosc wystepuje i dziala 
		try {
			usesMightGoWrong();
		}
		catch (const char *e) {
			cout << " Error message: " << e << endl;
		}
		catch (string &e) {									//jesli chcemy zalpac string a wczesniej przeciez zadeklarpwalismy obiekt uzywamy referencji skladnia wyjatkow umozliwiwa nam to 
			cout << "Error string message: " << e << endl;
		}
		catch (int e) {
			cout << "Error code : " << e << endl;
		}

		cout << "Still working" << endl;
	}
}

ExceptionsBasicExceptions::ExceptionsBasicExceptions()
{
}


ExceptionsBasicExceptions::~ExceptionsBasicExceptions()
{
}

bool ExceptionsBasicExceptions::randomTrueFalse() { // funkcja generuje losowo true or false 

	

	//auto gen = bind(uniform_int_distribution<>(0, 1), default_random_engine());

	auto gen = rand() % 2;

	cout << gen;
	return gen;
}

void ExceptionsBasicExceptions::mightGoWrong() {

	bool error1 = randomTrueFalse(); //dzieki funkcji moge losow wywolywac bledy 
	bool error2 = randomTrueFalse();
	bool error3 = randomTrueFalse();

	if (error1) {
		throw "something goes wrong ";
	}
	if (error2) {
		throw string("something else go wrong");
	}
	if (error3) {
		throw 8;
	}
}

void ExceptionsBasicExceptions::usesMightGoWrong() {
	mightGoWrong();
}
