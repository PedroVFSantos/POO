#include <iostream>
#include "classPapaiNoel.hpp"
#include <stdexcept>

int papaiNoel:: totalPedidos = 0;
int papaiNoel::totalItens = 0;
int papaiNoel::geradorSequencial = 0;

papaiNoel::papaiNoel(const std::string& nome, int quantidade): numeroDosPedidos(quantidade), nomeCrianca(nome), quantidadeDeItens(quantidade), itens(new std::string[quantidadeDeItens]){

	numeroDosPedidos = ++geradorSequencial;
	totalItens += quantidadeDeItens;
	totalPedidos++;
}  

papaiNoel::~papaiNoel(){

	delete[] itens;
	totalItens -= quantidadeDeItens;
	totalPedidos--;
}

void papaiNoel::set_itens(int indexVetor, const std::string& item){

	if(indexVetor > 0 && indexVetor <= quantidadeDeItens){

		itens[indexVetor] = item[indexVetor];
	}
	else{
		throw std::out_of_range("Excedeu");
	}
}

std::string papaiNoel::get_Itens(int indexVetor) const{

	if(indexVetor > 0 && indexVetor <= quantidadeDeItens){

		return itens[indexVetor];
	}

	else{
		throw std::invalid_argument("Excedeu");
	}
}

int papaiNoel::get_NumeroPedidos() const{

	return numeroDosPedidos;
}

std::string papaiNoel::get_nomeCrianca() {

	return nomeCrianca;
}

int papaiNoel:: get_quantidadeItens() const{

	return quantidadeDeItens;
}

int papaiNoel::get_totalItens(){

	return totalItens;
}

int papaiNoel::get_totalPedidos(){

	return totalPedidos;
}

