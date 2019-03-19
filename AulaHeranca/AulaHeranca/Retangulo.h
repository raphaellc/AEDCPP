#pragma once
#include "Forma.h"
class Retangulo :
	public Forma
{
public:
	Retangulo();
	~Retangulo();
	std::string desenhar() override;
};

