#pragma once
#include "Inventario.h"
#include "InventarioBin.h"
class Personagem
{
private:
	Inventario * inv = new InventarioBin;
public:
	Personagem();
	~Personagem();
	Inventario * getInventario();
};

