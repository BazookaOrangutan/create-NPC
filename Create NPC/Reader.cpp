#include "Reader.h"

Reader::Reader(string path)
{
	ifstream in(path);
	string str;
	string s;
	if (in.is_open()) {
		while (getline(in, str)) {
			objects.push_back(split(str, ','));
		}
	}
	in.close();
}

vector<vector<string>> Reader::getObjects()
{
	return objects;
}

vector<string> Reader::split(string str, char s)
{
	vector<string> buf;
	string st = "";
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == s) {
			buf.push_back(st);
			st = "";
		}
		else {
			st += str[i];
		}
	}
	return buf;
}
