#pragma once
#include "Inventario.h"
#include "InventarioBin.h"
#include "InventarioSeq.h"
class Personagem
{
private:
	Inventario * inv = new InventarioBin;
public:
	Personagem(); //Sem parâmetros - cria inventario binário;
	Personagem(int tipo_invent = 0);
	~Personagem();
	Inventario * getInventario();
};

