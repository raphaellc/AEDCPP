#pragma once
#include <string>
enum Formas
{
	CIRCULO,
	TRIANGULO,
	RETANGULO
};
class Forma
{
	
public:
	Forma();
	~Forma();
	Formas f_tipo;
	virtual std::string desenhar() = 0;

};

