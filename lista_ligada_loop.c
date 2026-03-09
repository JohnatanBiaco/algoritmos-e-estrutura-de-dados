#include <stdio.h>
#include <stdlib.h>

typedef struct Gomo{
    int x;
    int y;
    struct Gomo *proximo; 
} Gomo;


int main(){
    int contador = 0;
    Gomo *head = malloc(sizeof(Gomo)); // define o head
    head->x=10; // posição inicial
    head->y=10; // posição inicial
    head->proximo=NULL; // como é unico, aponta para NULL
    // segundo gomo
    Gomo *segundo = malloc(sizeof(Gomo));
    segundo->x=10; // manteu em X 
    segundo->y=11; // avançou em Y
    segundo->proximo=head; // aponta para a cabeça
    head=segundo; 
    // terceiro gomo
    Gomo *terceiro = malloc(sizeof(Gomo));
    terceiro->x=10; // manteu em X
    terceiro->y=12; // avançou em Y
    terceiro->proximo=head; // aponta para a cabeça
    head=terceiro; // a cabeça vira o terceiro

    // auxiliar
    Gomo *aux = head; // auxiliar começa pela cabeça
    int buscaX = 10;
    int buscaY = 13;
    while (aux != NULL){
        if (buscaX == aux->x && buscaY == aux->y){
            puts("Encontrado");
            break;
        }
        aux = aux->proximo;
    }
    puts("Nao encontrado");
    
    Gomo *aux2 = head;
    while(aux2 != NULL){
        printf("Contador Atual: %d\n", contador);
        contador++;
        aux2 = aux2->proximo;
    }
    printf("Contador Finalizado, contador total = %d", contador);
    
    return 0;
}