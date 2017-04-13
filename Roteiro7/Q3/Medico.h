#ifndef MEDICO_H
#define MEDICO_H
#include <string>

using namespace std;


class Medico
{
    
    protected:
        string nome;
        float altura;
        float peso;

	public:
		Medico();
        Medico(string, float, float);
        string getNome(){return nome;}
        float getAltura(){return altura;}
        float getPeso(){return peso;}




 };

#endif // MEDICO_H
