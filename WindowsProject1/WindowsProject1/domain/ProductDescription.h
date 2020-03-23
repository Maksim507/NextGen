#pragma once
#include "ItemId.h"
#include "Money.h"
#include <string>
class ProductDecription {
private:
	ItemId id;
	Money price;
	std::string description;
	ProductDecription(ItemId id,
		Money price,
		std::string description);
	ItemId getItemId();
	Money getPrice();
	std::string getDescription();
};
