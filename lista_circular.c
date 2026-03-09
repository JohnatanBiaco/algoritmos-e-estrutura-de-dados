#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Musica{
    char nome[30];
    struct Musica *prox;
} Musica;

int main(){
    Musica *MusicaA = malloc(sizeof(Musica)); // aloca memoria
    strcpy(MusicaA->nome, "Always"); // define valor para musicaA
    Musica *MusicaB = malloc(sizeof(Musica)); // aloca memoria
    strcpy(MusicaB->nome, "Nothing else Matters"); // define valor para musicaB
    Musica *MusicaC = malloc(sizeof(Musica)); // aloca memoria
    strcpy(MusicaC->nome, "Black"); // define valor para musicaC
    MusicaA->prox=MusicaB; // musicaA aponta para musicaB
    MusicaB->prox=MusicaC; // musicaB aponta para musicaC
    MusicaC->prox=MusicaA; // musicaC aponta para musicaA

    Musica *aux = MusicaA; // cria ponteiro auxiliar que aponta para musicaA
    while (aux !=NULL){
        printf("%s\n", aux);
        aux=aux->prox;
    }
    return 0;
}