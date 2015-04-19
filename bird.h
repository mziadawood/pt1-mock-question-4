#pragma once
#include<string>
using namespace std;
#include"Animal.h"
#include <iostream>

class bird:public Animal
{
public:

	void name()
	{
		cout << "name : bird \n";

	}

	void does()
	{
		cout << "tweets";
	}

	~bird();
};

