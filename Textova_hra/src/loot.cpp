#include "loot.h"

void Loot::addLootList(int itemID, int dropChance) {
	list.push_back({ itemID, dropChance });                 // seznamová inicializace pomoci push_back({})
}

const std::vector <LootList>& Loot::getLootList() const {          // const pro zamezení uprav, &reference pro efektivitu
	return list;                                                  
}