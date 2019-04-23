#pragma once
#include "Inventario.h"

//Formato do arquivo 
// ID peso tipo
// ID peso tipo

class InventarioSeq :
	public Inventario
{
public:
	InventarioSeq();
	~InventarioSeq();
	int carregarItens() override; //0 - erro stream; 1- Sucesso;  
	int salvarItens() override; // Nullptr - caso erro; Item[] com itens salvos
};

