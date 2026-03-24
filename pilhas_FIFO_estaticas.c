#include <stdio.h>
#include <stdlib.h>

int fila[10];
int inicio = 0;
int fim = 0;
int tamanho_maximo = 10;

void enqueue(int valor){ // adicionar
    if (fim == tamanho_maximo){
        printf("ERRO! A fila esta cheia!\n");
        return;
    }
    fila[fim] = valor; // adiciona o valor na fila na posição fim
    fim = (fim + 1) % tamanho_maximo; // matematica modular para deixar a lista circular (se o resultado for igual a 0
    // ele volta para o inicio da fila )
}

void dequeue(int valor){ // remover
    if (inicio == 0){
        printf("ERRO! A fila esta vazia!\n");
        return;
    }
    inicio = (inicio + 1) % tamanho_maximo;
}

int main(){
    enqueue(10);
    for (int i = 0; i < tamanho_maximo; i++){
        printf("Elemento na posicao %d eh %d\n", i, fila[i]);
    }

    return 0;
}