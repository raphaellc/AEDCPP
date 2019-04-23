#include "Personagem.h"



Personagem::Personagem()
{
}

Personagem::Personagem(int tipo_invent)
{
	if (tipo_invent == 0)
		this->inv = new InventarioBin;
	else
		this->inv = new InventarioSeq;
}


Personagem::~Personagem()
{
}

Inventario * Personagem::getInventario()
{
	return this->inv;
}
