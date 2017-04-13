#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"
#include <string>

using namespace std;

class TrabalhadorAssalariado : public Trabalhador{

public:
	float calcularPagamento(int);
	TrabalhadorAssalariado();
	TrabalhadorAssalariado(string, float);

};

#endif
