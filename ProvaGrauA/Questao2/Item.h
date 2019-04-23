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
	~Item();
	int obtemId();
	void defineID(int ID);
};

