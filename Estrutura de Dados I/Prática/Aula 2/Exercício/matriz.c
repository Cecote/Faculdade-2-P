#include "matriz.h"
#include<stdio.h>
#include<stdlib.h>

void lerOrdem(int *ordem){
    scanf("%d",ordem);

}

//manter como especificado
double **alocaMatriz(double **M, int ordem){
    M = malloc (ordem * sizeof(double*));
    for(int i=0;i<ordem;i++){
        M[i] = malloc (ordem * sizeof(double));
    }
    return M;
}

//manter como especificado
double **desalocaMatriz(double **M, int ordem){
    for(int i=0;i<ordem;i++){
        free(M[i]);
    }

    free (M);
    M = NULL;

    return M;
}

//manter como especificado
void lerOperacao(char *operacao){
    scanf(" %c",operacao);
}

void lerMatriz(double **M, int ordem){
    for(int i=0;i<ordem;i++){ // loop feito para a leitura dos valores de entrada da matriz 
        for(int j=0;j<ordem;j++){
            scanf("%lf", &M[i][j]);
        }
    }
}

double somaMatriz(double **M, int ordem){
    int limiteEsquerda = 1, limiteDireita = (ordem - 2);
    double soma = 0;

    for(int i=0;i<((ordem/2));i++){ //loop para efetuar a soma dos valores superiores. O "i" vai da linha 0 a 4 por isso ele e menor que 5
        for(int j=limiteEsquerda;j<=limiteDireita;j++){ // j tem que startar como o valor do limite da esquerda e ser menor que o limite da direita para fazer o afunilamento e somar somente as areas "verdes" que estavam no pdf
            soma = soma + M[i][j]; //calculo da soma
        }
        limiteEsquerda++; //limiteEsquerda tem que acrescentar um para ocorrer o afunilamento mencionado na linha 18
        limiteDireita--;  //limiteDireita tem que decrescer um para ocorrer o afunilamento mencionado na linha 18
    }

    return soma;
}

double media(double resultado, int ordem){
    int limiteEsquerda = 1, limiteDireita = (ordem - 2);
    int contador = 0;

    for(int i=0;i<((ordem/2));i++){ //loop para efetuar a soma dos valores superiores. O "i" vai da linha 0 a 4 por isso ele e menor que 5
        for(int j=limiteEsquerda;j<=limiteDireita;j++){ // j tem que startar como o valor do limite da esquerda e ser menor que o limite da direita para fazer o afunilamento e somar somente as areas "verdes" que estavam no pdf
            contador++;
        }
        limiteEsquerda++; //limiteEsquerda tem que acrescentar um para ocorrer o afunilamento mencionado na linha 18
        limiteDireita--;  //limiteDireita tem que decrescer um para ocorrer o afunilamento mencionado na linha 18
    }

    return (resultado/contador);

}

void printResultado(double resultado){
    printf("%.1lf\n",resultado); // resultado
}
