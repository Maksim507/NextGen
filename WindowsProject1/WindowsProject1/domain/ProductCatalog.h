#pragma once
#include "ItemId.h"
#include "ProductDescription.h"
#include <map>;
class ProductCatalog
{
private:
	std::map<ItemId, ProductDecription> Map;
	std::map<ItemId, ProductDecription>description;

};