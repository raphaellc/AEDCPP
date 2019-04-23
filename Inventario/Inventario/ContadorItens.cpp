#include "ContadorItens.h"



ContadorItens::ContadorItens()
{
}


ContadorItens * ContadorItens::obtemInstancia()
{
	if (_instancia == nullptr)
		_instancia = new ContadorItens();
	return _instancia;
}

int ContadorItens::incrementaContador()
{
	return this->contador++;
}

int ContadorItens::decrementaContador()
{
	return --this->contador;
}

ContadorItens::~ContadorItens()
{
	this->contador = 0;
}
