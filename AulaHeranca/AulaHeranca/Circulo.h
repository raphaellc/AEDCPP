#pragma once
#include "Forma.h"
class Circulo : public Forma
{
public:
	Circulo();
	~Circulo();
	std::string desenhar() override;

};

