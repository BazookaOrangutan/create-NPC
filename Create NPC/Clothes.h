#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Reader.h"
#include "Flyweight.h"
#include "Appearance.h"
#define random(a, b) a + rand()%(b - a + 1)

using namespace std;

class Clothes : public Appearance
{
	string top;
	string down;
public:
	Clothes();
};

