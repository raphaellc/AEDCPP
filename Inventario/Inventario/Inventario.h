#pragma once
#include "Item.h"
#include <fstream>

class Inventario
{
protected:
	int n_maximo_itens = 0, peso = 0;
	int indice_atual = 0;
	void atualizaIndice();
	std::fstream arquivo;
	Item * invent = new Item[10];
public:
	Inventario();
	~Inventario();
	virtual int carregarItens() = 0; //0 - erro stream; 1- Falta de Espaço; 2- sucesso 
	virtual int salvarItens() = 0; // Nullptr - caso erro; Item[] com itens salvos
	int insereItem(Item * i); //retorna 1 caso sucesso e 0 caso contrario
	bool removeItem(int ID); //caso removido com sucesso retorna true
	Item * consultaItemID(int ID); //caso erro retorna nullptr
	Item * consultaTodosItens(); //caso erro retorna nullptr
};
