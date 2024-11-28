#ifndef CLASSPAPAINOEL_HPP 
#define CLASSPAPAINOEL_HPP

#include <string>

class papaiNoel{

private:

	int numeroDosPedidos;
	std::string nomeCrianca;
	int quantidadeDeItens;
	std::string* itens;

	static int totalPedidos; 
	static int totalItens;
	static int geradorSequencial;

public:

	papaiNoel(const std::string& nome, int quantidade);
	~papaiNoel();

	//SETS
	void set_itens(int indexVetor, const std::string& itens);
	
	//GETs
	std::string get_Itens(int indexVetor) const;
	int get_NumeroPedidos() const;
	std::string get_nomeCrianca();
	int get_quantidadeItens() const;

	//Metodos Static
	static int get_geradorSequencial();
	static int get_totalPedidos();
	static int get_totalItens();

};
#endif // !
