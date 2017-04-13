#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H
#include "Medico.h"
#include <string>

using namespace std;



class Ginecologista : public Medico
{
    private:
        string espec = "Ginecologia";

    public:
        Ginecologista(string, float, float);
        string getEspec(){return espec;}
        string colposcopia();


};

#endif