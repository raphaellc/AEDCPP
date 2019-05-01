#include <iostream>

int funcaoGA(int tamanho_vetor, int * vetor ) { 
	 
		if (--tamanho_vetor > 0) {
			return (tamanho_vetor)*vetor[(tamanho_vetor)] + funcaoGA(tamanho_vetor, vetor);
		}
		else{
			return 0;
		}
}
/*funcaoGA(3,v) 
2*v[2] + funcao(2,v)
2*v[2] + 1*v[1] + funcao(1,v)
2 * v[2] + 1 * v[1] + 0 
*/
void main() {
	int v[8] = { 12,4,3,13,1,6,2,10};
	std::cout << "Resultado!" << funcaoGA(8, v) << std::endl;

	system("pause");
}
