#include <iostream>
#include <string>
#include "Medico.h"
#include "Oftamologista.h"
#include "Cirurgiao.h"
#include "Otorrino.h"
#include "Ginecologista.h"

using namespace std;


int main(){

    Cirurgiao Pedro("Pedro", 1.80, 85);
    Oftamologista Maria("Maria", 1.65, 57);
    Otorrino Vitor("Vitor", 1.78, 85.5);
    Ginecologista Claudia("Claudia", 1.70, 60);

    cout << "Dr(a). " << Pedro.getNome() << ", especializado(a) em " << Pedro.getEspec() << " está: " 
    << Pedro.cirurgiaCardiaca() << endl;

    cout << "Dr." << Pedro.getNome() << " tem " << Pedro.getAltura() << "m e pesa " << Pedro.getPeso() << " kg" << endl;
    
    cout << "Dr(a). " << Maria.getNome() << ", especializado(a) em " << Maria.getEspec() << " está: " 
    << Maria.exameDeVista() << endl;

    cout << "Dr(a). " << Vitor.getNome() << ", especializado(a) em " << Vitor.getEspec() << " está: " 
    << Vitor.endoscopia() << endl;

    cout << "Dr(a). " << Claudia.getNome() << ", especializado(a) em " << Claudia.getEspec() << " está: " 
    << Claudia.colposcopia() << endl;
    

	return 0;
}
