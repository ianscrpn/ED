#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>

using namespace std;

class Trabalhador{

protected:
	string nome;
	float salario;
public:
	void setNome(string);
	void setSalario(float);
	string getNome(){return nome;}
	float getSalario(){return salario;}

	Trabalhador();
	Trabalhador(string, float);
};


#endif	