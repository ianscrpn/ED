#ifndef OTORRINO_H
#define OTORRINO_H
#include "Medico.h"
#include <string>

using namespace std;



class Otorrino : public Medico
{
    private:
        string espec = "Otorrinolaringologia";

    public:
        Otorrino(string, float, float);
        string getEspec(){return espec;}
        string endoscopia();


};

#endif