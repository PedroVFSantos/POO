#include <iostream>
#include "Aposta.hpp"

int main (int argc, char *argv[]) {
	
	//Criar Fulano e sua aposta
	Aposta ap1("Fulano", 6);

	//Define os numeros do Fulano
	int numeros[] = {-1,2,3,4,5,6};
	ap1.defineNumero(numeros);

	Aposta ap2("Pedro", 7);
	int numeral[] = {1,2,3,4,5,6,7};
	ap2.defineNumero(numeral);

	//Quantidade de Aposta
	std::cout<<"Quantidade de Apostas: "<< Aposta::contadorDeAposta()<<std::endl;

	//Imprimir total Arrecadado
	std::cout<<"Total Arrecadado: "<<Aposta::getTotalArrecadado()<<std::endl;

	return 0;
}
