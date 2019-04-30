#include "InventarioSeq.h"


InventarioSeq::InventarioSeq()
{
	this->n_maximo_itens = 10;
}


InventarioSeq::~InventarioSeq()
{
}

int InventarioSeq::carregarItens()
{
	Item* it;
	int id_item, peso_item;
	std::string tp_item;
	arquivo.open("../inventarioSeq.txt", std::ios::in);
	if (arquivo) {
		while (!arquivo.eof()) {
			arquivo >> id_item >> peso_item >> tp_item;
			insereItem(new Item(id_item, peso_item, tp_item));
		}
		arquivo.close();
		return 1;
	}
	return 0;
}

int InventarioSeq::salvarItens()
{
	int indice = 0;
	arquivo.open("../inventarioSeq.txt", std::ios::out | std::ios::trunc);
	if (arquivo) {
		while (indice < this->indice_atual) {
			arquivo << this->invent[indice].obtemId() << " " << this->invent[indice].obtemPeso()
				<< " " << this->invent[indice].obtemTipo() << std::endl;
			indice++;
		}
		arquivo.close();
		return 1;
	}
	return 0;
}
