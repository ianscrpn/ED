#include <stdio.h>
#include <iostream>
#include <cstring>
//#include "pilha_seq.h"

using namespace std;

# define MAX 100  /* tamanho Máximo da Pilha */

typedef struct {
    char dados[MAX]; /* vetor que contém a Pilha */
    int topo;  /* posição do topo da Pilha */
} tPilha; 

void cria(tPilha *pilha) {
    pilha->topo = -1;
}

/** Verifica se a Pilha está vazia */
int vazia(tPilha pilha) {
    if (pilha.topo == -1){
        return 1;
    }else{
        return 0;
    }
}

/** Verifica se a Pilha está cheia */
int cheia(tPilha pilha) {
    if (pilha.topo == MAX-1){
        return 1;
    }else{
        return 0;
    }
}

/** Obtém o tamanho da Pilha */
int tamanho(tPilha P) {
    return (P.topo + 1);
}

/** Consulta o elemento do topo da Pilha.
    Retorna 0 se a pilha estiver vazia, caso contrário retorna 1. */
int top(tPilha pilha, char *dado) {
    if (vazia(pilha)) {
            return 0; /* pilha vazia */
    }
    *dado = pilha.dados[pilha.topo];
    return 1;
}

/** Insere um elemento no topo da pilha.
    Retorna 0 se a pilha estiver cheia.
    Caso contrário retorna 1 */
int push(tPilha *pilha, char dado) {
    if (cheia(*pilha)){
            return 0;  /* pilha cheia */
    }
    else {
        pilha->topo++;
        pilha->dados[pilha->topo] = dado;
        return 1;
    }
}

/** Retira o elemento do topo da pilha.
    Retorna 0 se a pilha estiver vazia.
    Caso contrário retorna 1 */
int pop(tPilha *pilha, char *dado ) {
    if (vazia(*pilha)){
            return 0; /* Pilha vazia */
    }
    else {
            *dado = pilha->dados[pilha->topo];
            (pilha->topo)--;
            return 1;
    }
}

// if(str[i] == (a, b, ..., z){print str[i]}

// if(str[i] == '(' ){stack.push(str[i])}

// if(str[i] == ')'){desempilhar até primeiro '('}

int main(){

    tPilha pilha;
    cria(&pilha);

    char aux, str[400];

    int t;
    cin >> t;

    while(t--){
        cin >> str;

    	for(int i = 0; i < strlen(str) ; i++){
    		if((str[i] >= 97) && (str[i]) <= 122 ){
    			cout << str[i];

    		}else if(str[i] == ')'){

                top(pilha, &aux);
                cout << aux;
                pop(&pilha, &aux);

            }else if(str[i] != '('){
                push(&pilha, str[i]);
            }
        }
        cout << endl;
    }
    return 0;
}