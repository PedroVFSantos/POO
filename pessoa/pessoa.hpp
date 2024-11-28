#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <string>

class Pessoa {

private:

	int* andarAtual;
	static int totalAndares;
	int capacidadeElevador;
	std::string pessoasElevador;

public:

	Pessoa(const int* andar, const std::string nome);
	~Pessoa();

	//SETS
	void Inicializa(int capacidade,int)
}

#endif // !PESSOA_HPP
