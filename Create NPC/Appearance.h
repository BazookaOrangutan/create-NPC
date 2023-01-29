#pragma once
#include <iostream>
#include "Flyweight.h"
using namespace std;


class Appearance
{
	int id;
	char sex;
	string name;
	Flyweight* fl = new Flyweight();
	string* color;
	string* sprite;
public:
	Appearance();
	
};

