#include "Otorrino.h"
#include <iostream>
#include <string>

using namespace std;

Otorrino::Otorrino(string n, float a, float p)
{
    nome = n;
    altura = a;
    peso = p;
}
string Otorrino::endoscopia()
{
    return "Realizando Endoscopia...";
}