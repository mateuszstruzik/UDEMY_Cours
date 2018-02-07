#include "ExceptionCatchingOrder.h"



ExceptionCatchingOrder::ExceptionCatchingOrder()
{
}


ExceptionCatchingOrder::~ExceptionCatchingOrder()
{
}

void ExceptionCatchingOrder::goesWrong()
{
	bool error1detect = true;
	bool error2detect = false;

	if (error1detect) {
		throw bad_alloc();
	}

	if (error2detect) {
		throw exception();
	}
}

void ExceptionCatchingOrder::simMain()   //poniewaz class bad_alloc jest subklasa exception 
{										//to dzieki polimorfizmowi bad_alloc pausje do catch exception 
	try {								// przy lapaniu wyjatkow trzeba pamietac o tym zeby subclasy najlepiej byly przed parentami 
		goesWrong();					//natomiast jesli error2detect bedzie lapany ten problem nie wystapi throw exception pasuje tylko do classy exception 
	}
	//catch (exception &e) {
	//	cout << "Catching exception :" << e.what() << endl;
	//}
	//catch (bad_alloc &e) {
	//	cout << "Catching bad_alloc :" << e.what() << endl;
	//}
	catch (bad_alloc &e) {
		cout << "Catching bad_alloc :" << e.what() << endl;
	}
	catch (exception &e) {
		cout << "Catching exception :" << e.what() << endl;
	}
}
