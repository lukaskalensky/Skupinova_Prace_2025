#ifndef LOOT_H
#define LOOT_H

#include "item.h"

#include <vector>

struct LootList {
	int itemID;
	int dropChance;
};

class Loot {
private:
	std::vector<LootList> list;
public:
	void addLootList(int itemID, int dropChance);
	const std::vector<LootList>& getLootList() const;   // funkce pro zavolani loot listu pomoci getLootList()
};

#endif // LOOT_H