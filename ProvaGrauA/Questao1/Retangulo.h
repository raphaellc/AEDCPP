#pragma once
#include "Forma.h"
class Retangulo : public Forma	
{
public:
	Retangulo();
	~Retangulo();
	float base, altura;
	float calculaArea() override;
};

