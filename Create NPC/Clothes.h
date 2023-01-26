#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Reader.h"

#define random(a, b) a + rand()%(b - a + 1)

using namespace std;

class Clothes
{
	int id;
	char sex;
	string name;
	string sprite;
	string color;
public:
	Clothes();
};

