#pragma once
//Classe Singleton
class ContadorItens
{
private:
	ContadorItens();
	int contador = 0;
	static ContadorItens * _instancia;
public:
	static ContadorItens * obtemInstancia();
	int incrementaContador();
	int decrementaContador();
	~ContadorItens();
};

