#include "Item.h"
#include "ContadorItens.h"
#include "Personagem.h"
#include <iostream>

ContadorItens * ContadorItens::_instancia = nullptr;
int main()
{
	//Controle de IDs de itens;
	ContadorItens * ci_contItens = ContadorItens::obtemInstancia();
	
	//Cria Personagem com Inventário com Arquivo Binarios
	Personagem * persona = new Personagem(0);
	
	//Cria Personagem com Inventário com Arquivo Sequencial
	//Personagem * persona = new Personagem(1);
	
	// *** Cria Itens e Insere no Inventário ***//
	Item * it1 = new Item;
	it1->defineID(ci_contItens->incrementaContador());
	persona->getInventario()->insereItem(it1);
	Item * it2 = new Item;
	it2->defineID(ci_contItens->incrementaContador());
	persona->getInventario()->insereItem(it2);

	// *** Consulta Itens Inseridos no Inventário *** //
	Item * colecaoItens = persona->getInventario()->consultaTodosItens();
	std::cout << colecaoItens[0].obtemId() << std::endl;
	std::cout << colecaoItens[1].obtemId() << std::endl;

	// *** Salva Itens no Arquivo ***//
	persona->getInventario()->salvarItens();
	
	// *** Carrega Itens do Arquivo ***//
	persona->getInventario()->carregarItens();
	colecaoItens = persona->getInventario()->consultaTodosItens();
	std::cout << colecaoItens[0].obtemId() << std::endl;
	std::cout << colecaoItens[1].obtemId() << std::endl;
	
	system("pause");
 	
	return 0;
}