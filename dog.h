#pragma once
#include<string>
using namespace std;
#include"Animal.h"
#include <iostream>
class dog:public Animal
{

public:
	void name()
	{
		cout << "name : dog \n";
	}

	void does()
	{
		cout << "barks";
	}

	~dog();
};

