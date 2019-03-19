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
	std::string desenhar(int forma);

};

