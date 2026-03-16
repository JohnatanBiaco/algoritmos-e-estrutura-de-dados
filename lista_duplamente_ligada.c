#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Trem{
    char Carga[30];
    struct Trem *ant;
    struct Trem *prox;
} Trem;

int main(){
    Trem *CargaA = malloc(sizeof(Trem)); // aloca memoria
    strcpy(CargaA->Carga, "Carvao"); // define valor para CargaA
    Trem *CargaB = malloc(sizeof(Trem)); // aloca memoria
    strcpy(CargaB->Carga, "Ferro"); // define valor para CargaB
    Trem *CargaC = malloc(sizeof(Trem)); // aloca memoria
    strcpy(CargaC->Carga, "Diamante"); // define valor para CargaC

    CargaA->ant=NULL;
    CargaA->prox=CargaB;
    CargaB->ant=CargaA;
    CargaB->prox=CargaC;
    CargaC->ant=CargaB;
    CargaC->prox=NULL;

    Trem *aux = CargaA;
    while (aux != NULL){
        printf("Carga Atual = %s\n", aux);
        aux = aux->prox;
        puts("Indo para a proxima carga...");
    }
    puts("A carga chegou ao FIM! \nVamos voltar as cargas Anteriores!");
    Trem *aux2 = CargaC;
    while(aux2 !=NULL){
        printf("Carga atual = %s\n", aux);
        aux2 = aux2->ant;
        puts("Indo para a Carga anterior...");
    }
    puts("A carga chegou ao INICIO!");
    
    return 0;
}