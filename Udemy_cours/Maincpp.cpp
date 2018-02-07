#include"Exceptions_course.h"
#include"FilesWhole.h"

using namespace std;



//call stack kontroluje ktora funkcja jest wywolywana (stack) funkcja wywolana przez inna funkcje znajduje sie na szczycie stacku dane ze stacku sa potem odczytywane od gory stacku ??? 


int main() {

	Exceptions_course exception_course;

	exception_course.collectWholePart();

	cout << endl << "--------------------------------\n" << endl;

	FilesWhole fileswhole;

	fileswhole.collectwhole();

	system("pause");
	return 0;
}