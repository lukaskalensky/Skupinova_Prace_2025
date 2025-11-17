//
// Created by honzi on 7. 11. 2025.
//

#ifndef SKUPINOVA_PRACE_2025_ENEMY_TYPES_H
#define SKUPINOVA_PRACE_2025_ENEMY_TYPES_H

#include <string>
#include <vector>
#include "loot.h"  // Použijeme Item z loot.h

struct Enemy {
    std::string name;
    int difficultyNumber;
    int goldReward;
    int tier; // 1=easy, 2=medium, 3=hard, 4=boss
    std::vector<std::string> possibleLootNames;
    std::string description;
};

// Get all enemy types
std::vector<Enemy> getAllEnemies();

// Load enemies from file
std::vector<Enemy> loadEnemiesFromFile(const std::string& filename);

// Get random enemy by difficulty tier
Enemy getRandomEnemy(int tier); // 1=easy, 2=medium, 3=hard, 4=boss

// Get all available items
std::vector<Item> getAllItems();

// Load items from file
std::vector<Item> loadItemsFromFile(const std::string& filename);

// Get random loot drop from enemy (uses global loot table)
Item getEnemyLootDrop(const Enemy& enemy);

// Calculate total combat bonus from items
int calculateCombatBonus(const std::vector<Item>& inventory);



#endif //SKUPINOVA_PRACE_2025_ENEMY_TYPES_H