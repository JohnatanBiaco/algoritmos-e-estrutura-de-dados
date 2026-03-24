#include <stdio.h>
#include <stdlib.h>

/*
Tamanho Fixo, alocado estaticamente na compilação
risco: overflow se atingir o limite estrito da capacidade
baixa complexidade, facil de debugar, implementação direta e rapida
uso ideal em sistemas previsiveis, controle embarcado

*/
int tamanho_maximo = 10;
int pilha[10];
int topo = -1;

int pilha_cheia(){
    if (topo == tamanho_maximo -1){
        printf("ERRO!\nA pilha esta cheia!");
        return 1;}
    return 0;
}
void push(int valor){
    if (pilha_cheia() == 1){
        return;
    }else{
    topo++;
    pilha[topo] = valor;
    }
}
int pilha_vazia(){
    if (topo == -1){
        printf("ERRO!\nA pilha esta vazia!");
        return 1;
    }
    return 0;
}
void pop(){
    if (pilha_vazia() == 1){
        return;
    }else{
    topo--;
    }
}

int main(){
    return 0;
}