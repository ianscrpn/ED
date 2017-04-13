#include "TrabalhadorPorHora.h"
#include <string>
#define PAG 50

using namespace std;

TrabalhadorPorHora::TrabalhadorPorHora(){

}

TrabalhadorPorHora::TrabalhadorPorHora(string n, float s){
	nome = n;
	salario = s;
}

float TrabalhadorPorHora::calcularPagamento(int horas){
	float pagamento;
	if(horas > 40){
		pagamento = 40*PAG + 1.5*PAG*(horas-40);
	}else{
		pagamento = PAG*horas;
	}
	return pagamento;

}