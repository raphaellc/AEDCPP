#pragma once
#include "Inventario.h"
#include "InventarioBin.h"
#include "InventarioSeq.h"
class Personagem
{
private:
	Inventario * inv = new InventarioBin;
public:
	Personagem(); //Sem par�metros - cria inventario bin�rio;
	Personagem(int tipo_invent = 0);
	~Personagem();
	Inventario * getInventario();
};

