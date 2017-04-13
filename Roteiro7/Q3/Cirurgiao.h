#ifndef CIRURGIAO_H
#define CIRURGIAO_H
#include "Medico.h"
#include <string>

using namespace std;



class Cirurgiao : public Medico
{
    private:
        string espec = "Cirurgia";

    public:
        Cirurgiao(string, float, float);
        string getEspec(){return espec;}
        string cirurgiaCardiaca();


};

#endif // CIRURGIAO_H
