#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"
#include <string>

using namespace std;

class TrabalhadorPorHora : public Trabalhador{

public:
	float calcularPagamento(int);
	TrabalhadorPorHora();
	TrabalhadorPorHora(string, float);

};

#endif