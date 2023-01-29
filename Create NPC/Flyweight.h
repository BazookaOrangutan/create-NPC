#pragma once
#include <iostream>
#include <map>
#include <vector>
#include "Reader.h"
#include <fstream>
using namespace std;



class Flyweight
{
	vector < map<int, string> > urls;
	vector < vector<string> > colors;
	vector<string> skinColors;
public:
	Flyweight();
};

