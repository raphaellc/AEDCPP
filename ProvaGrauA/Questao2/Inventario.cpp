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
		invent[this->indice_atual] = *i;
		this->indice_atual++;
		return 1;
	}
	return 0;
}

bool Inventario::removeItem(int ID)
{
	for (int i = 0; i < 10; i++)
		if(invent[i].obtemId() == ID)
		{
			delete &invent[i];
			for(int j = i; j < 9; j++)
			{
				invent[j] = invent[j + 1];
			}
			return true;
		}
	return false;
}

Item * Inventario::consultaItemID(int ID)
{
	return nullptr;
}

Item * Inventario::consultaTodosItens()
{
	return invent;
}
