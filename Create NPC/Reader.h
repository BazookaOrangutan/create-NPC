#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

class Reader
{
	vector< vector<string> > objects;
public:
	Reader(string path);
	vector< vector<string> > getObjects();
private:
	vector<string> split(string str, char s);
};

