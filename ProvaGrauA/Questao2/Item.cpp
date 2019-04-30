#include "Item.h"



Item::Item()
{
}

Item::Item(int id, int peso, std::string tp)
{
	this->ID = id;
	this->peso = peso;
	this->tipo = tp;
}


Item::~Item()
{
}

int Item::obtemId()
{
	return this->ID;
}

int Item::obtemPeso()
{
	return this->peso;
}

std::string Item::obtemTipo()
{
	return this->tipo;
}

void Item::defineID(int ID)
{
	this->ID = ID;
}

void Item::definePeso(int p)
{
	this->peso = p;
}

void Item::defineTipo(std::string str_tipo)
{
	this->tipo = str_tipo;
}
