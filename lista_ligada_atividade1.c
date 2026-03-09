#include <stdio.h>
#include <stdlib.h>

/*
Atv 1: O molde de dados (struct)
Voce precisa cruar uma estrutura que armezene a nota de um aluno que seja capaz
 de se ligar a nota do proximo aluno*/
struct Nota{
    float nota;
    struct Nota *proximaNota;
};

/*
Atv 2: Pedindo espaço (alocação dinamica)
Agora, voce nao pode criar uma variavel comum. Voce deve pedir um espaço na memoria
que seja exatamente do tamanho da sua struct Nota
*/

int main(){
    struct Nota *novaNota = (struct Nota*) malloc(sizeof(struct Nota)); // cria espaço na memoria
    
    if (novaNota == NULL){
        puts("Memoria Cheia");
    } else {
        novaNota->nota = 5; //adiciona o valor do ponteiro
        printf("Valor: %.2f\n", novaNota->nota);
    }
    teste();
    return 0;
}
int teste(){
    struct Nota *novaNota = (struct Nota*) malloc(sizeof(struct Nota)); /*
    nao precisaria fazer essa estrutura, pois ja foi feito antes, porem, deixa organizado*/
    struct Nota *novaNota2 = (struct Nota*) malloc(sizeof(struct Nota)); /*
    aloca a memoria do segundo elemento do ponteiro*/
    struct Nota *head; /* define a cabeça da lista*/
    novaNota->nota = 12.5; // atribui valor para a novaNota1
    novaNota2->nota = 15.0; // atribui valor para a novaNota2

    novaNota->proximaNota = novaNota2; // novaNota1 referencia a novaNota2 
    novaNota2->proximaNota = NULL;  // novaNota2 refencia o fim da lista "NULL"
    head = novaNota;

    printf("Nota 1 = %.2f \nnota 2 = %.2f\n", novaNota->nota, novaNota2->nota);

    if (novaNota2->proximaNota == NULL){
        puts("Voce alcancou o final da lista");
    }

    return 0;
}
