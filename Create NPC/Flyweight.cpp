#include "Flyweight.h"

Flyweight::Flyweight()
{
	Reader readClothes("files/NPC clothes.csv");
	for (int i = 0; i < readClothes.getObjects().size(); i++) {
		map<int, string> newMap;
		newMap.emplace(readClothes.getObjects()[i][0], readClothes.getObjects()[i][3]);
		urls.push_back(newMap);
	}

	Reader readShoes("files/NPC shoes.csv");
	for (int i = 0; i < readShoes.getObjects().size(); i++) {
		map<int, string> newMap;
		newMap.emplace(readShoes.getObjects()[i][0], readShoes.getObjects()[i][3]);
		urls.push_back(newMap);
	}

	Reader readHair("files/NPC hair.csv");
	for (int i = 0; i < readHair.getObjects().size(); i++) {
		map<int, string> newMap;
		newMap.emplace(readHair.getObjects()[i][0], readHair.getObjects()[i][3]);
		urls.push_back(newMap);
	}

	colors = Reader("files/clothes and shoes colors.csv").getObjects();
	
	ifstream in("files/skin colors.txt");
	string str;
	if (in.is_open()) {
		while (getline(in, str)) {
			skinColors.push_back(str);
		}
	}
	in.close();
}
