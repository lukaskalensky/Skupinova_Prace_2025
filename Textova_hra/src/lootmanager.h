#ifndef LOOTMANAGER_H
#define LOOTMANAGER_H

#include "item.h"
#include "loot.h"

#include <vector>
#include <memory>

class LootManager {
private:
	std::vector < std::unique_ptr<Item>> availableItems;          // unique_ptr pro správu paměti - automatické uvolnění
public:
	void addItem(std::unique_ptr<Item> item);
	const Item* getItemById(int id) const;
	std::vector<const Item*> generateLoot(const Loot& loot) const;
}; 

#endif // LOOTMANAGER_H