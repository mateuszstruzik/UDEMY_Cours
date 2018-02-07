#include "FilesWhole.h"



FilesWhole::FilesWhole()
{
}


FilesWhole::~FilesWhole()
{
}

void readWithFor(ifstream &a) {
	for (string l; getline(a, l);) {
		cout<<l<<endl;
	}
}

void FilesWhole::fileWrite()
{
	ofstream outfile;
	string outputfilename = "text.txt";
	outfile.open(outputfilename);
	if (outfile.is_open()) {
		outfile << "HEllo ther " << endl;
		outfile << 123 << endl;

		outfile.close();
	}
	else {
		cout << "Could not open creating file :" << outputfilename << endl;
	}
}

void FilesWhole::fileRead()
{
	string filename = "test.txt";
	ifstream infile;

	infile.open(filename);
	
	if (infile.is_open()) {
		string line;
		while (infile) {
			getline(infile, line);
			cout << line << endl;
		}
		infile.close();
		cout << "time for for ----------" << endl;
		infile.open(filename);
		readWithFor(infile);
		infile.close();
	}
	else {
		cout << "cannot open file:" << filename << endl;
	}
}

void FilesWhole::parsingText()
{
	string filename = "statss.txt";
	ifstream input;

	input.open(filename);

	if (!input.is_open()) {
		throw string("File cannot read ");
	}

	while (input) {				 // z forem chyba metoda jest korzytsniejsza
		string line;
		getline(input, line, ':');
		int population;
		input >> population;
		input >> ws; // z c++11 ws read whatewer white space pozbywamy sie pustych lini z zaczytywania pliku 
		if (!input)
			break;

		cout << "'" << line << " -- '" << population << endl;
	}
}

void FilesWhole::collectwhole()
{
	fileWrite();
	fileRead();

	try {
		parsingText();
	}
	catch (string &e) {
		cout << e <<endl;
	}
}
