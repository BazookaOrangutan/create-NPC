#pragma once
#include <iostream>
#include "Reader.h"
#include "Flyweight.h"
#include "Appearance.h"

#define random(a, b) a + rand() % (b - a + 1)

using namespace std;

class Hair : public Appearance
{

public:
	Hair() : Appearance(){};

};

