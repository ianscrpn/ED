#ifndef OFTAMOLOGISTA_H
#define OFTAMOLOGISTA_H
#include "Medico.h"
#include <string>

using namespace std;


class Oftamologista : public Medico
{

    private:
        string espec = "Oftamologia";
    public:
        Oftamologista(string, float, float);
        string getEspec(){return espec;}
        string exameDeVista();

};

#endif // OFTAMOLOGISTA_H
