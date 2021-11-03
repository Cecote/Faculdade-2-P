#include "matriz.h"
#include<stdio.h>

void lerOperacao(char *operacao){
    scanf("%c",&*operacao); // leitura especificando se e soma ou media
}

void lerMatriz(double M[][12]){
    for(int i=0;i<12;i++){ // loop feito para a leitura dos valores de entrada da matriz 
        for(int j=0;j<12;j++){
            scanf("%lf", &M[i][j]);
        }
    }
}

double somaMatriz(double M[][12]){
    int limiteEsquerda = 1, limiteDireita = 10;
    double soma = 0;

    for(int i=0;i<5;i++){ //loop para efetuar a soma dos valores superiores. O "i" vai da linha 0 a 4 por isso ele e menor que 5
        for(int j=limiteEsquerda;j<=limiteDireita;j++){ // j tem que startar como o valor do limite da esquerda e ser menor que o limite da direita para fazer o afunilamento e somar somente as areas "verdes" que estavam no pdf
            soma = soma + M[i][j]; //calculo da soma
        }
        limiteEsquerda++; //limiteEsquerda tem que acrescentar um para ocorrer o afunilamento mencionado na linha 18
        limiteDireita--;  //limiteDireita tem que decrescer um para ocorrer o afunilamento mencionado na linha 18
    }

    return soma;
}

double media(double resultado){
    double media = 0;

    media = resultado/30.0; //calculo da media

    return media;
}

void printResultado(double resultado){
    printf("%.1lf\n",resultado); // resultado
}
