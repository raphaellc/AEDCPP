#include "Personagem.h"



Personagem::Personagem()
{
}


Personagem::~Personagem()
{
}

Inventario * Personagem::getInventario()
{
	return this->inv;
}
