#pragma once
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

