#include "Item.h"
#include "ContadorItens.h"
#include "Personagem.h"
#include <iostream>

ContadorItens * ContadorItens::_instancia = nullptr;
int main()
{
	ContadorItens * ci_contItens = ContadorItens::obtemInstancia();
	Personagem * persona = new Personagem;
	/*Item * it1 = new Item;
	it1->defineID(ci_contItens->incrementaContador());
	persona->getInventario()->insereItem(it1);
	Item * it2 = new Item;
	it2->defineID(ci_contItens->incrementaContador());
	persona->getInventario()->insereItem(it2);
	Item * colecaoItens = persona->getInventario()->consultaTodosItens();
	std::cout << colecaoItens[0].obtemId() << std::endl;
	std::cout << colecaoItens[1].obtemId() << std::endl;
	persona->getInventario()->salvarItens();*/
	persona->getInventario()->carregarItens();
	Item * colecaoItens = persona->getInventario()->consultaTodosItens();
	std::cout << colecaoItens[0].obtemId() << std::endl;
	std::cout << colecaoItens[1].obtemId() << std::endl;
	system("pause");
	return 0;
}