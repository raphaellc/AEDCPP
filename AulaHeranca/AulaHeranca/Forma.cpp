#include "Forma.h"



Forma::Forma()
{
}


Forma::~Forma()
{
}

std::string Forma::desenhar(int forma)
{
	std::string desenho_forma;
	switch (this->f_tipo)
	{
	case CIRCULO:
		desenho_forma = "circulo";
		break;
	case TRIANGULO:
		desenho_forma = "triangulo";
		break;
	case RETANGULO:
		desenho_forma = "retângulo";
		break;
	}
	
	return desenho_forma;
}
