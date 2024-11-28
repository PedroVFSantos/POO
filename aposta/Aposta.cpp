#include <iostream>
#include <string>
#include "Aposta.hpp"
#include <stdexcept>

int Aposta::contadorDeIDs = 0;
double Aposta::totalArrecadado = 0;

//Construtor
Aposta::Aposta(const std::string& nome, int quantidade):nomeApostador(nome), totalNumerosApostados(quantidade){

	apostaID = ++contadorDeIDs;
	numerosApostados = new int[quantidade]();
	calcularValorApostas();
	totalArrecadado += valorPago;
};

//Destrutor
Aposta::~Aposta(){

	delete [] numerosApostados;
	totalArrecadado -= valorPago;

};

void Aposta::calcularValorApostas(){

	if(totalNumerosApostados <= 5){

		valorPago = 1.0f;
	}
	else{
		valorPago = 1.0f + (totalNumerosApostados - 5) * 1.0f;
	}
}

void Aposta::defineNumero(int* numeros){

	for(int i = 0 ; i < totalNumerosApostados ; ++i){

		if(numeros[i]<=0){

			throw std::invalid_argument("Numero inválido");
	}

		numerosApostados[i] = numeros[i];
	}
}

int Aposta::obterNumero(int indiceVetor) const{


		if(indiceVetor >= 0 && indiceVetor < totalNumerosApostados){

			return numerosApostados[indiceVetor]; 
		}
	throw std::invalid_argument("ERROR");
};

int Aposta::getApostaID()const{
	return apostaID;
}

std::string Aposta::getNomeApostador() const{
	return nomeApostador;
}

double Aposta::getValorPago() const{

	return valorPago;
}

int Aposta::contadorDeAposta(){
	return contadorDeIDs;
}

double Aposta::getTotalArrecadado(){

	return totalArrecadado;
}

