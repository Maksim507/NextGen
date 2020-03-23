#include "ProductDescription.h"
#include "string"
#include "Money.h"
ProductDecription::ProductDecription(
	ItemId id,
	Money price,
	std::string description)
{
	this->id = id;
	this->price = price;
	this->description = description;
}

ItemId ProductDecription::getItemId()
{
	return ItemId();
}

Money ProductDecription::getPrice()
{
	return Money();
}
std::string ProductDecription::getDescription()
{
	return description;
}