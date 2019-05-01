#pragma once
#include "Forma.h"
class Circulo : public Forma
{
public:
	Circulo();
	~Circulo();
	float raio;
	float calculaArea() override;

};

