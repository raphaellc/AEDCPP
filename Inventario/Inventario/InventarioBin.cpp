#include "InventarioBin.h"



InventarioBin::InventarioBin()
{
}


InventarioBin::~InventarioBin()
{
}

int InventarioBin::carregarItens()
{
	Item * temp_it = new Item;
	arquivo.open("../inventario.bin", std::ios::in | std::ios::binary);
	if (arquivo.is_open()) {
		arquivo.seekg(std::ios::beg);
		for (int i = 0; i < 10; i++) {
			arquivo.read(reinterpret_cast<char *>(temp_it), sizeof(Item));
			if (arquivo.gcount())
				invent[i] = *temp_it;
			else
				return 0;
		}
	}
	else {
		return 0;
	}
	arquivo.close();
	return 2;
}

int InventarioBin::salvarItens()
{
	arquivo.open("../inventario.bin", std::ios::out | std::ios::binary | std::ios::trunc);
	if (arquivo.is_open()) {
		for (int i = 0; i < 10; i++)
		{
			if (invent[i].obtemId() >= 0) {
				arquivo.write(reinterpret_cast<char *>(&invent[i]), sizeof(Item));
			}
		}
	}else
	{
		return 0;
	}
	arquivo.close();
	return 2;
}
