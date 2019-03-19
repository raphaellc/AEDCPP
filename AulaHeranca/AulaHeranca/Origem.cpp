#include <iostream>
#include "Forma.h"
#include "Circulo.h"
#include "Triangulo.h"
#include "Retangulo.h"

void main()
{
	Forma * circulo;
	Forma * triangulo;
	Forma * retangulo;
	Forma * formas[3];

	circulo = new Circulo();
	circulo->f_tipo = CIRCULO;
	formas[0] = circulo;

	triangulo = new Triangulo();
	triangulo->f_tipo = TRIANGULO;
	formas[1] = triangulo;

	retangulo = new Retangulo();
	retangulo->f_tipo = RETANGULO;
	formas[2] = retangulo;

	for (int i = 0; i < 3; i++)
	{
		std::cout << formas[i]->desenhar() << std::endl;
	}


	system("pause");
}
