#pragma once
#include "Inventario.h"
class InventarioBin : 
	public Inventario
{
public:
	InventarioBin();
	~InventarioBin();
	int carregarItens() override; //0 - erro stream; 1- Falta de Espa�o; 2- 
	int salvarItens() override; // Nullptr - caso erro; Item[] com itens salvos
};

