#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"
#include <iostream>
#include <string>

using namespace std;

int main(){

	TrabalhadorPorHora Joao("Joao", 500);
	TrabalhadorAssalariado t2("Jonas", 600);

	cout << "Salario de Joao: " << Joao.calcularPagamento(20) << endl;

	cout << "Salario de Joao: " << Joao.calcularPagamento(45) << endl;

	cout << "Salario de Pedro: " << t2.calcularPagamento(20) << endl;

	return 0;
}
