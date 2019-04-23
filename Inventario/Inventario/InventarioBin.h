#pragma once
#include "Inventario.h"
class InventarioBin : 
	public Inventario
{
public:
	InventarioBin();
	~InventarioBin();
	int carregarItens() override; //0 - erro stream; 1- Sucesso;  
	int salvarItens() override; //0 - erro stream; 1- Sucesso;  
};

