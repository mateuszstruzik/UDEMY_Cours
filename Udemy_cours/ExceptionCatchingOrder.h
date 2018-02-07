#pragma once
#include<iostream>
#include<exception>

using namespace std;

class ExceptionCatchingOrder
{
public:
	ExceptionCatchingOrder();
	~ExceptionCatchingOrder();

	void goesWrong();
	void simMain();
};

