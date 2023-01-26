#pragma once
#include <iostream>
#include <map>
using namespace std;



class Flyweight
{
	map<int, string> url;
	string color;
	
public:
	Flyweight(int id, string url, string color);
};

