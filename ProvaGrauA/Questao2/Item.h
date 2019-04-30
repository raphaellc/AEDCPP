#pragma once
#include <string>
class Item
{
private:
	int ID;
	int peso;
	std::string tipo;
public:
	Item();
	Item(int id, int peso, std::string tp);
	~Item();
	int obtemId();
	int obtemPeso();
	std::string obtemTipo();
	void defineID(int ID);
	void definePeso(int p);
	void defineTipo(std::string str_tipo);
};

