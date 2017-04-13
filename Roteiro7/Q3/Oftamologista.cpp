#include "Oftamologista.h"
#include <iostream>
#include <string>

using namespace std;

Oftamologista::Oftamologista(string n, float a, float p)
{
    nome = n;
    altura = a;
    peso = p;
}
string Oftamologista::exameDeVista()
{
    return "Realizando Exame de Vista...";
}
