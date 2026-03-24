#include <stdio.h>
#include <stdlib.h>

int estoque[5];
int topo = -1;
int tamanho_maximo = 5;

int pilhaCheia(){
    if (topo == tamanho_maximo){
        printf("ERRO! A pilha esta cheia!\n");
        return -1;
    }
    return 0;
}
int pilhaVazia(){
    if (topo == -1){
        printf("ERRO! A pilha esta vazia!\n");
        return -1;
    }
    return 0;
}
void empilhar(int id){
    if (pilhaCheia() == -1){
        return;
    }

    topo++;
    estoque[topo] = id; 
}
int desempilhar(){
    if (pilhaVazia() == -1){
        return -1;
    }
    
    topo--;
    return 0;
}

int esteira[5];
int frente = 0;
int final = -1;
int total = 0;

int filaCheia(){
    if (final == tamanho_maximo){
        printf("ERRO! A pilha esta cheia!\n");
        return -1;
    }
    return 0;
}
int filaVazia(){
    if (frente == -1){
        printf("ERRO! A pilha esta vazia!\n");
        return -1;
    }
    return 0;
}

void entrarNaEsteira(int id){
    if (filaCheia() == -1){
        return;
    }

    esteira[final] = id;
    final = (final + 1) % tamanho_maximo;
}
int sairDaEsteira(){
    if (filaVazia() == -1){
        return -1;
    }

    frente = (frente + 1) % tamanho_maximo;
    return 0;
}
