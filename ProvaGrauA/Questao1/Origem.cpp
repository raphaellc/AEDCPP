#include <iostream>
#include "Circulo.h"
#include "Triangulo.h"
#include "Retangulo.h"
#include "Forma.h"

void main()
{
	float base, altura;
	Forma * formas[3];
	Circulo * circulo;
	Triangulo * triangulo;
	Retangulo * retangulo;
	
	circulo = new Circulo();
	triangulo = new Triangulo();
	retangulo = new Retangulo();
	
	std::cout << "informe a base e a altura para calculo da área" << std::endl;
	std::cout << "Para o cálculo da área do circulo informe o primeiro valor negativo" << std::endl;
	std::cout << "e o segundo o do raio" << std::endl;
	std::cin >> base >> altura;

	circulo->raio = altura;
	triangulo->base = base;
	triangulo->altura = altura;
	retangulo->base = base;
	retangulo->altura = altura;

	formas[0] = circulo;
	formas[1] = triangulo;
	formas[2] = retangulo;
	
	for (int i = 0; i<3; i++){
		std::cout << "Área = " << formas[i]->calculaArea() << std::endl;
	}

	/*std::cout << "Area do Circulo " << circulo->calculaArea() << std::endl;
	std::cout << "Area do Triangulo " << triangulo->calculaArea() << std::endl;
	std::cout << "Area do Retangulo " << retangulo->calculaArea() << std::endl;*/

	system("pause");
}