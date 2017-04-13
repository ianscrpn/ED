#include "Cirurgiao.h"
#include <iostream>
#include <string>

using namespace std;


Cirurgiao::Cirurgiao(string n, float a, float p)
{
    nome = n;
    altura = a;
    peso = p;
}

string Cirurgiao::cirurgiaCardiaca(){
    return "Realizando Cirurgia Cardiaca...";
}
