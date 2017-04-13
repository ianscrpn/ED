#include "Trabalhador.h"
#include <string>

using namespace std;

Trabalhador::Trabalhador(){

}

Trabalhador::Trabalhador(string n, float s){
	nome = n;
	salario = s;

}
void Trabalhador::setNome(string n){
	nome = n;
};

void Trabalhador::setSalario(float s){
	salario = s;
}