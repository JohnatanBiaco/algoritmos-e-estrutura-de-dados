#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    // função sqrt(numero) -> raiz quadrada do numero, sempre pede e retorna tipo double (float com mais casas decimais)
    double numero = 25.0;
    double raiz = sqrt(numero);
    printf("A raiz de %.2f eh igual a: %.2f\n", numero, raiz);

    // função pow(base, expoente) -> calcula base elevada a expoente
    // sempre recebe double

    double base = 2.34232;
    double expoente = 4;
    double resultado = pow(base, expoente);
    printf("A potenciacao de %.5f por %.5f eh: %.5f\n", base, expoente, resultado);

    // função fabs(valor) -> retorna o valor absoluto do numero
    double valor = -42;
    double absoluto = fabs(valor);
    printf("O valor absoluto de %.2f eh: %.2f\n", valor, absoluto);

    // função ceil(numero) -> arredonda o valor para cima
    double numeroQuebrado = 3.54565;
    double arredondado = ceil(numeroQuebrado);
    printf("O valor de %.5f arredondado eh de %.2f\n", numeroQuebrado, arredondado);

    // função floor(numero) -> arredonda o valor para baixo
    double numeroQuebrado2 = 4.54565;
    double arredondadoMenor = floor(numeroQuebrado2);
    printf("O valor de %.5f arredondado eh de %.2f\n", numeroQuebrado2, arredondadoMenor);

    // função round(numero) -> arredonda para o inteiro mais proximo
    double numeroQuebrado3 = 4.54565;
    double arredondadoInteiro = round(numeroQuebrado3);
    printf("O valor de %.5f arredondado eh de %.2f\n", numeroQuebrado3, arredondadoInteiro);


    /*-----------------------------------------------------------------------------------*/

    // função sin(angulo_em_radianos) -> retorna o valor do seno
    double angulo = 45.0;
    double seno = sin(angulo);
    printf("O valor do seno do angulo %.2f eh %.2f\n", angulo, seno);

    // função cos(angulo_em_radianos) -> retorna o valor do cosseno
    double angulo1 = 45.0;
    double cosseno = cos(angulo1);
    printf("O valor do cosseno do angulo %.2f eh %.2f\n", angulo1, cosseno);


    /*-------------------------------------------------------------------------------------*/
    // função log(numero) -> retorna o valor do logaritmo de base natural do numero
    double numero1 = 10.0;
    double logaritmoNatural = log(numero);
    printf("O valor do logaritmo de base natural de %.2f eh %.2f\n", numero1, logaritmoNatural);

    //função log10(numero) -> retorna o valor do logaritmo de base 10 do numero
    double numero2 = 50.0;
    double logaritmo10 = log10(numero2);
    printf("O valor do logaritmo de base 10 de %.2f eh %.2f\n", numero2, logaritmo10);
    double teste = funcao(10, 2);
    printf("%.2f", teste);
    return 0;
}
    // caso queira definir valor e base para log, defina as 2 variaveis, e utilize das propriedades
    // de log, crie uma função que receba os 2 valores e faça o seguinte calculo:
    // logvalor = log(valor) / log(base)
    

    