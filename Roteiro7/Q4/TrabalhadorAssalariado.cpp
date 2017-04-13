#include "TrabalhadorAssalariado.h"
#include <string>
#define PAG 50

using namespace std;

TrabalhadorAssalariado::TrabalhadorAssalariado(){
	
}

TrabalhadorAssalariado::TrabalhadorAssalariado(string n, float s){
	nome = n;
	salario = s;
}

float TrabalhadorAssalariado::calcularPagamento(int horas){
	return 40*PAG;
}