#include "Clothes.h"

Clothes::Clothes()
{
	Reader read("files/NPC clothes.cvs");
	vector<string> s = read.getObjects()[random(1, read.getObjects().size() - 1)];
	id = stoi(s[0]);
	sex = s[1][0];
	name = s[2];
	Flyweight(id, s[3], )
	sprite = s[3];

}
