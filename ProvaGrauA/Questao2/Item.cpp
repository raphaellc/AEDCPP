#include "Item.h"



Item::Item()
{
}


Item::~Item()
{
}

int Item::obtemId()
{
	return this->ID;
}

void Item::defineID(int ID)
{
	this->ID = ID;
}
