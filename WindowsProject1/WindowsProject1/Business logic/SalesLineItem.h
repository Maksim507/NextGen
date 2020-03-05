#pragma once
#include "ProductDescription.h"
#include "Money.h"
class SalesLineItem
{
private:
	int quantity;
	ProductDecription description;
public:
	SalesLineItem(ProductDecription desc, int quantity);
	int getSubtotal();
};