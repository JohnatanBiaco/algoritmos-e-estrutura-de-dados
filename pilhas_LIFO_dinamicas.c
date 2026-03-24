#include <stdio.h>
#include <stdlib.h>
/*
Tamanho: cresce e encolhe sob demanda durante a execução
risco: vazamento de memoria se nao utilizar free()
alta complexidade, exige manipulação complexa e segura de ponteiros
uso ideal em coleções de dados imprevisiveis e volumosos
*/
typedef struct Pilha{
    int topo;
    int capacidade;
    float *proxElem;
} Pilha;

void criar_pilha(Pilha *p, int c){
    p->proxElem = malloc(c * sizeof(*p->proxElem));
    p->capacidade = c;
    p->topo = -1;
}

void push(Pilha *p, float valor){
    if (p->topo == p->capacidade -1){
        printf("ERRO!\nPilha Cheia!!");
        return;
    }
    p->topo++;
    p->proxElem[p->topo] = valor;
}

float retorna_topo(Pilha *p){
    return p->proxElem[p->topo];    
}

float pop(Pilha *p){
    if (p->topo == -1){
        printf("ERRO!\nPilha vazia!!");
        return -1;
    }
    float aux = p->proxElem[p->topo]; // auxiliar para guardar valor que vai ser removido
    p->topo--; // remove o elemento do topo
    return aux; // retorna o valor que foi removido
}

int main(){
    Pilha p;
    criar_pilha(&p, 10);
    push(&p, 10.2);
    push(&p, 8.6);
    printf("Topo: %.2f\n", retorna_topo(&p));
    printf("Removido: %.2f\n", pop(&p));

    free(p.proxElem);
    return 0;
}

