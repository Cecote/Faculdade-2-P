#include <stdio.h>
int main()
{
    double M[12][12]; //Matriz para ler os 144 numeros reais
    char O; // variavel que vai ler a entrada e definir se e uma operacao de soma ou media
    int limiteEsquerda = 1, limiteDireita = 10; // variaveis correspondentes aos limites maximos onde irei varrer a matriz para efetuar a soma somente da parte de cima
    double soma = 0, media = 0; // variaveis que vao armazenar a soma e a media

    scanf("%c",&O); // leitura especificando se e soma ou media

    for(int i=0;i<12;i++){ // loop feito para a leitura dos valores de entrada da matriz 
        for(int j=0;j<12;j++){
            scanf("%lf", &M[i][j]);
        }
    }

    for(int i=0;i<5;i++){ //loop para efetuar a soma dos valores superiores. O "i" vai da linha 0 a 4 por isso ele e menor que 5
        for(int j=limiteEsquerda;j<=limiteDireita;j++){ // j tem que startar como o valor do limite da esquerda e ser menor que o limite da direita para fazer o afunilamento e somar somente as areas "verdes" que estavam no pdf
            soma = soma + M[i][j]; //calculo da soma
        }
        limiteEsquerda++; //limiteEsquerda tem que acrescentar um para ocorrer o afunilamento mencionado na linha 18
        limiteDireita--;  //limiteDireita tem que decrescer um para ocorrer o afunilamento mencionado na linha 18
    }

    if(O == 'S'){
        printf("%.1lf\n",soma); // resultado se o for soma
    }

    if(O == 'M'){
        media = soma/30; //calculo da media
        printf("%.1lf\n",media); // resultado se for media
    }

    return 0;//não remova
}
