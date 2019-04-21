
#pragma once
#include "../UnitTest_cpp/stdafx.h"
#include "Item.h"
#include <fstream>

class Inventario
{
private:
	Item * invent[10];
	int n_maximo_itens = 0, peso = 0;
	int controle_ID;
	
public:
	Inventario();
	~Inventario();
	int carregarItens(Item * v_itens, std::fstream & i_stream); //0 - erro stream; 1- Falta de Espaço; 2- 
	Item * salvarItens(std::fstream o_stream); // Nullptr - caso erro; Item[] com itens salvos
	int insereItem(Item * i); //retorna 1 caso sucesso e 0 caso contrario
	bool removeItem(int ID); //caso removido com sucesso retorna true
	Item * consultaItemID(int ID); //caso erro retorna nullptr
	Item * consultaTodosItens(); //caso erro retorna nullptr
};

