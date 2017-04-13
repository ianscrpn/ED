#include "Medico.h"
#include <string>

using namespace std;

Medico::Medico(){
	
}

Medico::Medico(string n, float a, float p)
{
	nome = n;
    altura = a;
    peso = p;
}
