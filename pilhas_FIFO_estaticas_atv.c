#include <stdio.h>
#include <stdlib.h>

int itens[5];
int inicio = 0;
int fim = -1;
int total = 0;
int tamanho_maximo = 5;

void inserir(int id){ // adicionar
    if (fim == tamanho_maximo){
        printf("ERRO! A fila esta cheia!\n");
        return;
    }
    fim = (fim + 1) % tamanho_maximo;
    itens[fim] = id; // adiciona o valor na fila na posição fim
    total++;
}

void remover(int valor){ // remover
    if (total == 0){
        printf("ERRO! A itens esta vazia!\n");
        return;
    }
    inicio = (inicio + 1) % tamanho_maximo;
}

int main(){
    inserir(10);
    for (int i = 0; i < tamanho_maximo; i++){
        printf("Elemento na posicao %d eh %d\n", i, itens[i]);
    }

    return 0;
}