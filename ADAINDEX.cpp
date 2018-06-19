#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct lista{

	struct lista* c[50];
	int count;
}tLista;

tLista* cria()
{
	tLista* no = (tLista*)malloc(sizeof(tLista));
		for(int i = 0; i < 50; i++){
			no->c[i] = NULL;
		}

	no->count = 0;
	return no;
}

void inserir(tLista* no,string s)
{
	tLista* noAux = no;

	int tam = s.length();

	for(int i = 0; i < tam; i++){
		if(noAux->c[s[i]-'a'] == NULL){
			noAux->c[s[i]-'a'] = cria();
		}
	noAux = noAux->c[s[i]-'a'];
	noAux->count = noAux->count + 1;
	}
}

int busca(tLista* no,string s)
{
	tLista* noAux = no;

	int tam = s.length();

	for(int i = 0; i < tam; i++){
		if(noAux->c[s[i]-'a'] != NULL){
			noAux = noAux->c[s[i]-'a'];
		}else{
			return 0;
		}
	}
	return noAux->count;
}

int main(){

	string prefixo;

	int n,q;
	
	cin >> n;
	cin >> q;

	tLista* listaN = cria();

	for(int i = 0; i < n; i++){
		cin >> prefixo;
		inserir(listaN, prefixo);
	}

	while(q--){
		cin >> prefixo;
		cout << busca(listaN, prefixo) << endl;
	}
}