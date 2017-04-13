#include "Ginecologista.h"
#include <iostream>
#include <string>

using namespace std;

Ginecologista::Ginecologista(string n, float a, float p)
{
    nome = n;
    altura = a;
    peso = p;
}
string Ginecologista::colposcopia()
{
    return "Realizando Colposcopia...";
}