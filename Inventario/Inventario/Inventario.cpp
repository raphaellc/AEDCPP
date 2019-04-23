#include "Inventario.h"



void Inventario::atualizaIndice()
{
	this->indice_atual++;
}

Inventario::Inventario()
{
}


Inventario::~Inventario()
{
}

int Inventario::insereItem(Item * i)
{
	if (i != nullptr) {
		invent[this->indice_atual] = i;
		this->indice_atual++;
		return 1;
	}
	return 0;
}

bool Inventario::removeItem(int ID)
{
	return false;
}

Item * Inventario::consultaItemID(int ID)
{
	return nullptr;
}

Item * Inventario::consultaTodosItens()
{
	return nullptr;
}
