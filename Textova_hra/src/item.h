#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
public:
	int id;
	std::string jmeno;
	std::string popis;

	Item(int id, std::string jmeno, std::string popis) {
		this->id = id;
		this->jmeno = jmeno;
		this->popis = popis;
	}

	virtual ~Item(){}                 // destruktor pro dědičnost pro věci

};

#endif // ITEM_H