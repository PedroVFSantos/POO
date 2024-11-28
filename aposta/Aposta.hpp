#ifndef APOSTA_HPP
#define APOSTA_HPP

#include <string>

class Aposta {

private:

	int apostaID;
	std::string nomeApostador;
	int* numerosApostados;
	double valorPago;
	int totalNumerosApostados;

	static int contadorDeIDs;
	static double totalArrecadado;

	//Calcular o valor da aposta
	void calcularValorApostas();

public:

	Aposta(const std::string& nome, int quantidade);
	~Aposta();

	//Metodo SET
	int obterNumero(int indiceVetor) const;
	void defineNumero(int* numeros);

	//GETS
	int getApostaID() const;
	std::string getNomeApostador() const;
	double getValorPago() const;
	int getNumerosApostados() const;

	static int contadorDeAposta();
	static double getTotalArrecadado();
};


#endif // !APOSTA_HPP
