#include "Hair.h"

Hair::Hair()
{
	Reader read("files/NPC hair.csv");
	vector<string> s = read.getObjects()[random(1, read.getObjects().size() - 1)];
	id = stoi(s[0]);
	sex = s[1][0];
	name = s[2];
	fl = new Flyweight();
}
