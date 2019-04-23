#include "Item.h"
//Classe Singleton
class ContadorItens
{
private:
	ContadorItens();
	int contador;
	static ContadorItens * _instancia;
public:
	static ContadorItens * obtemInstancia();
	int incrementaContador();
	int decrementaContador();
	~ContadorItens();
};

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
	return ++this->contador;
}

int ContadorItens::decrementaContador()
{
	return --this->contador;
}

ContadorItens::~ContadorItens()
{
	this->contador = 0;
}

ContadorItens * ContadorItens::_instancia = nullptr;
int main()
{
	ContadorItens * ci_contItens = ContadorItens::obtemInstancia();

	return 0;
}